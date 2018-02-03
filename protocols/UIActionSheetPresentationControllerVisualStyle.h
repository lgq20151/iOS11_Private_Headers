/* made by EzioChiu.
 */

@protocol UIActionSheetPresentationControllerVisualStyle <NSObject>

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (double)cornerRadius;
- (UIColor *)dimmingViewColor;
- (UIView<UIActionSheetPresentationControllerDismissActionView> *)dismissActionView;
- (double)dismissToContentSpacing;
- (void)setTraitCollection:(UITraitCollection *)arg1;
- (UITraitCollection *)traitCollection;

@end
