/* made by EzioChiu.
 */

@protocol LSInstallationServiceProtocol <NSObject>

@required

- (void)installApplication:(void *)arg1 atURL:(void *)arg2 withOptions:(void *)arg3 installType:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSURL *, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)uninstallApplication:(void *)arg1 withOptions:(void *)arg2 uninstallType:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSDictionary *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
