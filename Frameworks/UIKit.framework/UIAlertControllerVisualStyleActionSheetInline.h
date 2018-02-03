/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertControllerVisualStyleActionSheetInline : UIAlertControllerVisualStyleActionSheet {
    bool  _actionsReversed;
    UIView * _headerView;
    UIVisualEffectView * _revealEffectView;
    _UIPreviewPresentationEffectView * _sourceViewSnapshot;
}

@property (nonatomic) bool actionsReversed;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, retain) UIVisualEffectView *revealEffectView;
@property (nonatomic, retain) _UIPreviewPresentationEffectView *sourceViewSnapshot;

+ (long long)interfaceActionPresentationStyle;
+ (void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5;

- (void).cxx_destruct;
- (double)_actionDescriptiveTextFontSize;
- (bool)_shouldReverseActions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceRectForAlertController:(id)arg1 inContainerView:(id)arg2;
- (bool)actionsReversed;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(id /* block */)arg7;
- (void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(id /* block */)arg5;
- (id)dimmingViewForAlertController:(id)arg1;
- (id)headerView;
- (bool)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (id)interactionProgressForTransitionOfType:(long long)arg1 forAlertController:(id)arg2;
- (double)minimumWidth;
- (long long)permittedActionLayoutDirection;
- (bool)placementAvoidsKeyboard;
- (id)revealEffectView;
- (void)setActionsReversed:(bool)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setRevealEffectView:(id)arg1;
- (void)setSourceViewSnapshot:(id)arg1;
- (bool)shouldOccludeDuringPresentation;
- (bool)shouldPreserveRespondersAcrossWindows;
- (id)sourceViewSnapshot;
- (id)tintColorForAlertController:(id)arg1;
- (double)transitionDurationForPresentation:(bool)arg1 ofAlertController:(id)arg2;
- (bool)transitionOfType:(long long)arg1 shouldBeInteractiveForAlertController:(id)arg2;

@end
