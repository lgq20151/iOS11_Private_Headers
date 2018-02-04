/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIIncompatibleAppsController : PSListController {
    NSArray * _updates;
}

@property (nonatomic, retain) NSArray *updates;

+ (id)incompatible3rdPartyAppProxies;
+ (bool)proxyWillBeDeprecatedFor32Bit:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleAppsChangedNotification;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)openStoreForSpecifier:(id)arg1;
- (void)refreshAvailableSoftwareUpdates;
- (void)setUpdates:(id)arg1;
- (id)specifiers;
- (bool)updateIsAvailableForBundleID:(id)arg1;
- (id)updates;

@end