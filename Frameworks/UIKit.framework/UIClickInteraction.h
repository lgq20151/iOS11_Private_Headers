/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIClickInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {
    <UIClickInteractionDelegate> * _delegate;
    _UIClickFeedbackGenerator * _feedbackGenerator;
    _UIPreviewInteractionHighlighter * _interactionEffect;
    bool  _interactive;
    bool  _latching;
    bool  _selected;
    long long  _state;
    UITouchForceGestureRecognizer * _touchForceGestureRecognizer;
    UIView * _view;
    UIView * view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIClickInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLatching, nonatomic) bool latching;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_createFeedbackGenerator;
- (void)_endInteractionIfNeeded;
- (void)_handleTouchForceGestureRecognizer:(id)arg1;
- (void)_prepareForInteraction;
- (void)_updateInteractionForGestureRecognizer:(id)arg1;
- (void)cancelInteraction;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (id)init;
- (bool)isLatching;
- (bool)isSelected;
- (void)setDelegate:(id)arg1;
- (void)setLatching:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
