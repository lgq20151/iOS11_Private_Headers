/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewInteractionGestureRecognizerTouchForceProvider : NSObject <UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding> {
    bool  _active;
    UITouchForceGestureRecognizer * _gestureRecognizer;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITouchForceGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double touchForce;

- (void).cxx_destruct;
- (void)_handleGestureRecognizer:(id)arg1;
- (void)cancelInteraction;
- (void)dealloc;
- (id)gestureRecognizer;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithGestureRecognizer:(id)arg1;
- (id)initWithView:(id)arg1 configuration:(id /* block */)arg2;
- (bool)isActive;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (double)touchForce;

@end
