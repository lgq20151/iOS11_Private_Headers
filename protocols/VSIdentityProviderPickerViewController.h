/* made by EzioChiu.
 */

@protocol VSIdentityProviderPickerViewController <NSObject>

@required

- (unsigned long long)additionalProvidersMode;
- (<VSIdentityProviderPickerViewControllerDelegate> *)delegate;
- (void)deselectSelectedProviderAnimated:(bool)arg1;
- (NSArray *)identityProviders;
- (bool)isCancellationAllowed;
- (NSString *)requestingAppDisplayName;
- (NSString *)resourceTitle;
- (void)setAdditionalProvidersMode:(unsigned long long)arg1;
- (void)setCancellationAllowed:(bool)arg1;
- (void)setDelegate:(id <VSIdentityProviderPickerViewControllerDelegate>)arg1;
- (void)setIdentityProviders:(NSArray *)arg1;
- (void)setRequestingAppDisplayName:(NSString *)arg1;
- (void)setResourceTitle:(NSString *)arg1;

@end
