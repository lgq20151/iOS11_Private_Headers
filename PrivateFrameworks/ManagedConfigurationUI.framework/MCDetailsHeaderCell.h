/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCDetailsHeaderCell : UITableViewCell {
    MCDetailsHeaderContentView * _headerView;
}

- (void).cxx_destruct;
- (double)heightForTableView;
- (void)hideActionButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 mode:(int)arg3;
- (void)layoutSubviews;
- (void)setActionToInstall;
- (void)setActionToRemove;
- (void)setDelegate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setGradientColor:(int)arg1;
- (void)setHidesUntrustedLabel:(bool)arg1;
- (void)setIsExpired:(bool)arg1;
- (void)setIsSigned:(bool)arg1;
- (void)setIsTrusted:(bool)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setUseTrustedNomenclature:(bool)arg1;
- (void)showActionButton;

@end
