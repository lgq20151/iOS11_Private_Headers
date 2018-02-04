/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIIdentityPickerViewController : PSListController {
    bool  _allowEditing;
    <ACUIIdentityPickerViewControllerDelegate> * _delegate;
    NSArray * _emailAddresses;
    NSArray * _identities;
    NSString * _property;
}

@property (nonatomic, readonly) NSString *property;

- (void).cxx_destruct;
- (bool)_allowIdentitySelection;
- (void)_finishedFetchingIdentities:(id)arg1;
- (id)_identitySpecifiers;
- (struct __SecIdentity { }*)_identityToAutoselectWithEnabled:(bool)arg1;
- (bool)_isPropertyEnabled;
- (struct __SecIdentity { }*)_selectedIdentity;
- (void)_setPropertyEnabled:(bool)arg1 identity:(struct __SecIdentity { }*)arg2;
- (void)_setValue:(id)arg1 forSwitchSpecifier:(id)arg2;
- (id)_specifiersForIdentities:(id)arg1;
- (void)_updateCell:(id)arg1 selected:(bool)arg2;
- (id)_valueForSwitchSpecifier:(id)arg1;
- (id)property;
- (id)specifiers;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end