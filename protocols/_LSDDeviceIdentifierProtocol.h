/* made by EzioChiu.
 */

@protocol _LSDDeviceIdentifierProtocol

@required

- (void)clearAllIdentifiersOfType:(long long)arg1;
- (void)clearIdentifiersForUninstallationWithVendorName:(NSString *)arg1 bundleIdentifier:(NSString *)arg2;
- (void)generateIdentifiersWithVendorName:(NSString *)arg1 bundleIdentifier:(NSString *)arg2;
- (void)getIdentifierOfType:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*
- (void)getIdentifierOfType:(void *)arg1 vendorName:(void *)arg2 bundleIdentifier:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: long long, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*

@end
