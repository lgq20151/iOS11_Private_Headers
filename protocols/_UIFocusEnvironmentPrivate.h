/* made by EzioChiu.
 */

@protocol _UIFocusEnvironmentPrivate <UIFocusEnvironment>

@required

- (<UIFocusEnvironment> *)_parentFocusEnvironment;

@optional

- (bool)_isEligibleForFocusInteraction;
- (NSArray *)_linearFocusMovementSequences;
- (long long)_preferredFocusMovementStyle;
- (bool)_reversesLinearFocusWrapping;
- (void)_setNeedsNonDeferredFocusUpdate;

@end
