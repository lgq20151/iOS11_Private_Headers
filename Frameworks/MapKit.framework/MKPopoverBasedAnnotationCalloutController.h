/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPopoverBasedAnnotationCalloutController : MKAnnotationCalloutController <MKSmallCalloutViewControllerDelegate, UIPopoverControllerDelegate, UIPopoverControllerDelegatePrivate, _MKPopoverEmbeddingViewWindowDelegate, _UIPopoverControllerMapsTransitionDelegate> {
    id /* block */  _afterMoveToWindowBlock;
    bool  _allowsPopoverWhenNotInWindow;
    bool  _animatingIn;
    MKSmallCalloutViewController * _calloutViewController;
    _MKPopoverEmbeddingView * _embeddingView;
    bool  _isCalloutExpanded;
    bool  _isHidingForImplementationReasons;
    bool  _isShowingPopover;
    UIView * _layoutConstraintsView;
    UIPopoverController * _popoverController;
}

@property (nonatomic) bool allowsPopoverWhenNotInWindow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIPopoverController *popoverController;
@property (readonly) Class superclass;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverTargetRectForAnnotationView:(id)arg1 inView:(id)arg2;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (bool)_isShowingCallout;
- (void)_popoverControllerDidFinishMapsTransitionExpanding:(id)arg1;
- (void)_popoverControllerWillBeginMapsTransitionMovingSideways:(id)arg1;
- (void)_setDetailAccessoryView:(id)arg1 animated:(bool)arg2;
- (void)_setLeftAccessoryView:(id)arg1 animated:(bool)arg2;
- (void)_setRightAccessoryView:(id)arg1 animated:(bool)arg2;
- (void)_setSubtitle:(id)arg1 animated:(bool)arg2;
- (void)_setTitle:(id)arg1;
- (void)_showCalloutAnimated:(bool)arg1 scrollToFit:(bool)arg2 avoid:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_snapLayoutConstraintsViewToContainerBounds;
- (id)_subtitle;
- (void)_updateCalloutAnimated:(bool)arg1;
- (void)_updatePopoverContentSize:(bool)arg1;
- (bool)allowsPopoverWhenNotInWindow;
- (bool)calloutContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (void)embeddingView:(id)arg1 didMoveToWindow:(id)arg2;
- (void)embeddingView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)hideCalloutAnimated:(bool)arg1;
- (id)init;
- (bool)isCalloutExpanded;
- (id)popoverController;
- (void)popoverController:(id)arg1 animationCompleted:(long long)arg2;
- (void)setAllowsPopoverWhenNotInWindow:(bool)arg1;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)showCalloutForAnnotationView:(id)arg1 animated:(bool)arg2 scrollToFit:(bool)arg3 avoid:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)smallCalloutViewControllerDidAppear:(id)arg1;

@end
