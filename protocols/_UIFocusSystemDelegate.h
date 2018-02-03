/* made by EzioChiu.
 */

@protocol _UIFocusSystemDelegate <NSObject>

@optional

- (<_UIFocusRegionContainer> *)_focusMapContainerForFocusSystem:(UIFocusSystem *)arg1;
- (void)_focusSystem:(UIFocusSystem *)arg1 didFinishUpdatingFocusInContext:(UIFocusUpdateContext *)arg2;
- (bool)_focusSystem:(UIFocusSystem *)arg1 prefersDeferralForFocusUpdateInContext:(UIFocusUpdateContext *)arg2;
- (bool)_focusSystem:(UIFocusSystem *)arg1 shouldRestoreFocusInContext:(UIFocusUpdateContext *)arg2;
- (NSArray *)_preferredFocusEnvironmentsForFocusSystem:(UIFocusSystem *)arg1;

@end
