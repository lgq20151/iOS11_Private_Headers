/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIInteractiveHighlightPreviewingContext : NSObject <UIPreviewInteractionDelegatePrivate, UIViewControllerPreviewing_Internal> {
    UIView * _customViewForInteractiveHighlight;
    <UIViewControllerPreviewingDelegate> * _delegate;
    UIPreviewInteraction * _previewInteraction;
    UIViewController * _previewViewController;
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
@property (nonatomic, readonly) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) UIView *sourceView;
@property (readonly) Class superclass;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (id)_preferredHighlightViewForSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_preferredHighlightViewForSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inTableView:(id)arg2;
- (id)_previewInteraction:(id)arg1 viewControllerPresentationForPresentingViewController:(id)arg2;
- (id)_previewInteractionHighlighterForPreviewTransition:(id)arg1;
- (id)customViewForInteractiveHighlight;
- (id)delegate;
- (id)initWithSourceView:(id)arg1 viewController:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredSourceViewRectInCoordinateSpace:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionController:(id)arg1 commitViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(bool)arg3;
- (void)previewInteractionController:(id)arg1 willDismissViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forLocation:(struct CGPoint { double x1; double x2; })arg3 inSourceView:(id)arg4;
- (void)previewInteractionDidCancel:(id)arg1;
- (bool)previewInteractionShouldBegin:(id)arg1;
- (id)previewingGestureRecognizerForFailureRelationship;
- (void)setCustomViewForInteractiveHighlight:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (void)unregister;
- (id)viewController;

@end