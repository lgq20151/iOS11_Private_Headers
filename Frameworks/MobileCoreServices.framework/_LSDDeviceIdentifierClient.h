/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSDDeviceIdentifierClient : _LSDClient <_LSDDeviceIdentifierProtocol>

- (void)clearAllIdentifiersOfType:(long long)arg1;
- (void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (void)generateIdentifiersWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (void)getClientProcessVendorNameAndBundleIdentifierWithCompletionHandler:(id /* block */)arg1;
- (void)getIdentifierOfType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)hasEntitlementToClearAllIdentifiersOfType:(long long)arg1;
- (bool)hasUninstallEntitlement;

@end
