/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextGestureCluster : NSObject <UIGestureRecognizerDelegate> {
    NSMutableArray * _children;
    <UITextGestureClusterViewDelegate> * _delegate;
    NSMutableDictionary * _gestures;
    bool  _inGesture;
    UITextGestureCluster * _parent;
    UIView * _view;
}

@property (nonatomic, readonly, retain) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UITextGestureClusterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSDictionary *gestures;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inGesture;
@property (readonly) UITextGestureCluster *parent;
@property (readonly) UITextGestureCluster *root;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting;
- (void)_resetForLink;
- (bool)_shouldObscureTextInput;
- (void)addChild:(id)arg1;
- (void)addGestureRecognizer:(id)arg1 withName:(id)arg2;
- (void)cancelInteractionWithLink;
- (id)children;
- (bool)cluster_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)cluster_gestureRecognizerShouldBegin:(id)arg1;
- (void)completeInitialisation;
- (bool)containerChangesSelectionOnOneFingerTap;
- (void)dealloc;
- (id)defaultDoubleTapRecognizerWithAction:(SEL)arg1;
- (id)defaultTapRecognizerWithAction:(SEL)arg1;
- (id)delegate;
- (id)description;
- (void)detach;
- (void)disableClearsOnInsertion;
- (double)distanceBetweenPoint:(struct CGPoint { double x1; double x2; })arg1 andRange:(id)arg2;
- (bool)doesControlDelegate;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureWithName:(id)arg1;
- (id)gestures;
- (bool)inGesture;
- (id)init;
- (id)initWithView:(id)arg1;
- (bool)isInteractingWithLink;
- (id)linkInteractionView;
- (id)parent;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (id)recognizerForName:(id)arg1;
- (id)recursiveDescription;
- (void)removeChild:(id)arg1;
- (void)resetForLink;
- (id)root;
- (void)setDelegate:(id)arg1;
- (void)setInGesture:(bool)arg1;
- (bool)shouldClusterAllowSelectionGestures:(bool)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 toBegin:(bool)arg3;
- (bool)shouldHandleFormGestureAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldIgnoreLinkGestures;
- (bool)tapOnLinkWithGesture:(id)arg1;
- (id)textInput;
- (void)turnOffDrawsAsAtomIfPlainStyleAtom;

@end
