/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAppCellularUsageCategoryDetailsController : PSListController {
    WirelessDataUsageWorkspace * _workspace;
}

@property (nonatomic, retain) WirelessDataUsageWorkspace *workspace;

- (void).cxx_destruct;
- (void)setWorkspace:(id)arg1;
- (bool)shouldReloadSpecifiersOnResume;
- (id)specifiers;
- (id)workspace;

@end
