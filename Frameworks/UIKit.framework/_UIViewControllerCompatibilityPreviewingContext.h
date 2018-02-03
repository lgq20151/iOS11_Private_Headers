/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewControllerCompatibilityPreviewingContext : NSObject <UIPreviewInteractionControllerDelegate_Internal, UIViewControllerPreviewing_Internal> {
    UIView * _customViewForInteractiveHighlight;
    <UIViewControllerPreviewingDelegate> * _delegate;
    UIPreviewInteractionController * _previewInteractionController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
    UIViewController * _viewController;
}

@property (nonatomic, retain) UIView *customViewForInteractiveHighlight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <UIViewControllerPreviewingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPreviewInteractionController *previewInteractionController;
@property (nonatomic, readonly) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, readonly) UIView *sourceView;
@property (readonly) Class superclass;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (id)customViewForInteractiveHighlight;
- (id)delegate;
- (id)initWithSourceView:(id)arg1 viewController:(id)arg2;
- (bool)performsCustomCommitTransitionForPreviewInteractionController:(id)arg1;
- (bool)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;
- (id)previewInteractionController;
- (id)previewInteractionController:(id)arg1 committedViewControllerForPreviewViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(bool)arg3;
- (void)previewInteractionController:(id)arg1 didSelectMenuItem:(id)arg2;
- (void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(struct CGPoint { double x1; double x2; })arg3 inSourceView:(id)arg4 containerView:(id)arg5;
- (void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;
- (void)previewInteractionController:(id)arg1 performCustomCommitForPreviewViewController:(id)arg2 completion:(id /* block */)arg3;
- (bool)previewInteractionController:(id)arg1 shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3;
- (id)previewInteractionController:(id)arg1 transitioningDelegateForPreviewingAtPosition:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3 presentingViewController:(id*)arg4;
- (void)previewInteractionController:(id)arg1 willDismissViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(struct CGPoint { double x1; double x2; })arg3 inSourceView:(id)arg4;
- (bool)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(id)arg1;
- (id)previewingGestureRecognizerForFailureRelationship;
- (void)setCustomViewForInteractiveHighlight:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreviewInteractionController:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (void)unregister;
- (id)viewController;

@end
