/* made by EzioChiu.
 */

@protocol UIInterfaceActionConcreteVisualStyleImpl <NSObject>

@required

- (UIColor *)actionTitleLabelColorForViewState:(UIInterfaceActionViewState *)arg1;
- (UIFont *)actionTitleLabelFontForViewState:(UIInterfaceActionViewState *)arg1;
- (double)contentCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentMargin;
- (UIScreen *)defaultScreen;
- (double)horizontalImageContentSpacing;
- (UIView<UIInterfaceActionVisualBackgroundDisplaying> *)newActionBackgroundViewForViewState:(UIInterfaceActionViewState *)arg1;
- (UIView<UIInterfaceActionVisualGroupBackgroundDisplaying> *)newGroupBackgroundViewWithGroupViewState:(UIInterfaceActionGroupViewState *)arg1;
- (double)verticalImageContentSpacing;

@optional

- (UIColor *)actionClassificationLabelColorForViewState:(UIInterfaceActionViewState *)arg1;
- (UIFont *)actionClassificationLabelFontForViewState:(UIInterfaceActionViewState *)arg1;
- (NSArray *)actionGroupPropertiesAffectingActionsScrollViewStyling;
- (UIColor *)actionImageViewTintColorForImageProperty:(NSString *)arg1 actionViewState:(UIInterfaceActionViewState *)arg2;
- (NSArray *)actionPropertiesAffectingActionRepresentationViewStyling;
- (NSArray *)actionPropertiesAffectingImageViewStyling;
- (NSArray *)actionPropertiesAffectingLabelStyling;
- (double)actionSectionSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })actionSequenceEdgeInsets;
- (id)actionViewStateForAttachingToActionRepresentationView:(UIView *)arg1;
- (void)configureAttributesForActionRepresentationView:(UIView *)arg1 actionViewState:(UIInterfaceActionViewState *)arg2;
- (void)configureAttributesForActionScrollView:(UIScrollView *)arg1 groupViewState:(UIInterfaceActionGroupViewState *)arg2;
- (void)configureAttributesForImageView:(UIImageView *)arg1 imageProperty:(NSString *)arg2 actionViewState:(UIInterfaceActionViewState *)arg3;
- (void)configureAttributesForTitleLabel:(UILabel *)arg1 classificationLabel:(UILabel *)arg2 actionViewState:(UIInterfaceActionViewState *)arg3;
- (void)configureForDismissingGroupView:(UIView *)arg1 alongsideTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)configureForPresentingGroupView:(UIView *)arg1 alongsideTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (struct CGSize { double x1; double x2; })maximumActionGroupContentSize;
- (struct CGSize { double x1; double x2; })minimumActionContentSize;
- (UIView<UIInterfaceActionVisualSeparatorDisplaying> *)newActionSeparatorViewForGroupViewState:(UIInterfaceActionGroupViewState *)arg1;
- (UIView<UIInterfaceActionVisualSectionSeparatorDisplaying> *)newSectionSeparatorViewForGroupViewState:(UIInterfaceActionGroupViewState *)arg1;
- (bool)selectByPressGestureRequired;
- (bool)selectionFeedbackEnabled;

@end
