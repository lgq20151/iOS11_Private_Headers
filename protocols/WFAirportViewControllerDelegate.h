/* made by EzioChiu.
 */

@protocol WFAirportViewControllerDelegate <NSObject, WFNetworkListDelegate>

@required

- (void)airportSettingsViewController:(WFAirportViewController *)arg1 setAutoJoinEnabled:(bool)arg2;
- (NSString *)airportSettingsViewController:(WFAirportViewController *)arg1 unconfiguredAccessoriesGroupHeaderTitle:(NSArray *)arg2;
- (long long)airportSettingsViewControllerAskToJoinStatus:(WFAirportViewController *)arg1;
- (bool)airportSettingsViewControllerCurrentNetworkConnectionIsProblematic:(WFAirportViewController *)arg1;
- (void)airportSettingsViewControllerDidTapDataUsage:(WFAirportViewController *)arg1;
- (void)airportSettingsViewControllerDidTapDiagnosticsMode:(WFAirportViewController *)arg1;
- (void)airportSettingsViewControllerDidTapKnownNetworks:(WFAirportViewController *)arg1;
- (bool)airportSettingsViewControllerShouldShowDiagnosticsMode:(WFAirportViewController *)arg1;
- (bool)airportSettingsViewControllerShouldShowKnownNetworks:(WFAirportViewController *)arg1;

@end