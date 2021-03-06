/* made by EzioChiu.
 */

@protocol HUQuickControlContainerViewDelegate <NSObject>

@required

- (UIView<HUQuickControlPresentableView> *)containerView:(HUQuickControlContainerView *)arg1 createControlViewForControlType:(unsigned long long)arg2;
- (void)containerView:(HUQuickControlContainerView *)arg1 didSelectControlType:(unsigned long long)arg2;
- (bool)containerView:(HUQuickControlContainerView *)arg1 hasControlOfType:(unsigned long long)arg2;
- (NSString *)containerView:(HUQuickControlContainerView *)arg1 titleForControlType:(unsigned long long)arg2;
- (void)detailsButtonPressedInContainerView:(HUQuickControlContainerView *)arg1;

@end
