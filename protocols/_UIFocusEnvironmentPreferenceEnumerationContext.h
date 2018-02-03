/* made by EzioChiu.
 */

@protocol _UIFocusEnvironmentPreferenceEnumerationContext <NSObject>

@required

- (_UIDebugLogReport *)debugReport;
- (<UIFocusEnvironment> *)environment;
- (bool)isLeafPreference;
- (bool)isPreferredByItself;
- (bool)isPrimaryPreference;
- (NSArray *)preferredEnvironments;
- (<UIFocusEnvironment> *)preferringEnvironment;
- (bool)prefersNothingFocused;

@end
