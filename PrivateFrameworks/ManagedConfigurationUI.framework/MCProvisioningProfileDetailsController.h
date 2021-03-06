/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCProvisioningProfileDetailsController : MCURLListenerListController {
    UIAlertView * _activeAlert;
    UITableViewCell * _configBottom;
    MCDetailsHeaderCell * _configHeader;
    MCDetailsDescriptionTableCell * _configMiddle;
    NSString * _displayName;
    bool  _installSucceeded;
    bool  _isExpired;
    bool  _isInstallMode;
    NSString * _organizationName;
    struct _MISProfile { } * _profile;
    bool  _profileIsSigned;
}

+ (id)_formattedStringForDate:(id)arg1;
+ (struct _MISProfile { }*)createProfileFromProfileData:(id)arg1;
+ (id)displayNameForUserInfo:(id)arg1;
+ (bool)isNearExpirationForUserInfo:(id)arg1;
+ (id)organizationForUserInfo:(id)arg1;
+ (void)updateUserInfo:(id)arg1 withProfile:(struct _MISProfile { }*)arg2;
+ (void)updateUserInfoForUseWithProfileInfoCell:(id)arg1 withProfile:(struct _MISProfile { }*)arg2;

- (void).cxx_destruct;
- (id)_configDataForProfile:(struct _MISProfile { }*)arg1;
- (bool)_displayedAsSheet;
- (void)_finishInstallWithSuccess:(bool)arg1;
- (void)_hideNavBarButtons:(bool)arg1;
- (void)_prepareForInstall;
- (void)_prepareForRemove;
- (void)_profileListChanged:(id)arg1;
- (void)_showInstallWarning;
- (void)_showMISError:(int)arg1 withTitle:(id)arg2;
- (void)_showNavBarButtonsForSuccess:(bool)arg1 animated:(bool)arg2;
- (void)_showProgressIndicator;
- (void)_showRemovalWarning;
- (void)_takeMeBack;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)installPayload;
- (void)performInstall;
- (void)performRemove;
- (void)removePayload;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
