/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewInteractionViewControllerHelper : NSObject <UIPreviewPresentationControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    <UIViewControllerContextTransitioning> * _currentTransitionContext;
    id /* block */  _dismissalCompletion;
    _UIPreviewInteractionHighlighter * _highlighter;
    id /* block */  _presentationCompletion;
    UIWindow * _presentingWindow;
    UIViewController * _previousParentViewController;
    UIView * _previousSuperview;
    bool  _shouldActAsAppearanceAnimationController;
    bool  _shouldUseDefaultPresentationController;
    _UIPreviewInteractionViewControllerPresentation * _viewControllerPresentation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _UIPreviewInteractionViewControllerPresentation *viewControllerPresentation;

- (void).cxx_destruct;
- (void)_finalizeAfterViewControllerPresentation;
- (void)_performDismissalCompletionIfNeeded;
- (void)_performPresentViewControllerFromViewController:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)customPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)defaultPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)dismissViewController;
- (id)initWithViewControllerPresentation:(id)arg1;
- (void)presentViewControllerFromViewController:(id)arg1 highlighter:(id)arg2 presentationCompletion:(id /* block */)arg3 dismissalCompletion:(id /* block */)arg4;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)previewPresentationController:(id)arg1 shouldDismissViewController:(id)arg2;
- (double)transitionDuration:(id)arg1;
- (id)viewControllerPresentation;

@end
