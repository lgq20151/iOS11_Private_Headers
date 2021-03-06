/* made by EzioChiu.
 */

@protocol UILayoutItem <UITraitEnvironment>

@required

- (void)_ui_addSubLayoutItem:(id <UILayoutItem>)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_ui_bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_ui_frame;
- (void)_ui_insertSubLayoutItem:(id <UILayoutItem>)arg1 atIndex:(long long)arg2;
- (void)_ui_removeFromParentLayoutItem;
- (UIView *)_ui_superview;
- (UIView *)_ui_view;
- (NSLayoutYAxisAnchor *)bottomAnchor;
- (NSLayoutXAxisAnchor *)centerXAnchor;
- (NSLayoutYAxisAnchor *)centerYAnchor;
- (NSLayoutDimension *)heightAnchor;
- (NSLayoutXAxisAnchor *)leadingAnchor;
- (NSLayoutXAxisAnchor *)leftAnchor;
- (NSLayoutXAxisAnchor *)rightAnchor;
- (NSLayoutYAxisAnchor *)topAnchor;
- (NSLayoutXAxisAnchor *)trailingAnchor;
- (NSLayoutDimension *)widthAnchor;

@end
