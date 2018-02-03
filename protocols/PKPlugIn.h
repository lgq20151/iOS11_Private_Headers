/* made by EzioChiu.
 */

@protocol PKPlugIn <NSObject>

@required

- (bool)active;
- (NSDictionary *)attributes;
- (void)beginUsing:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSDictionary *)bundleInfoDictionary;
- (NSURL *)containingUrl;
- (<PKPlugIn> *)createInstanceWithUUID:(NSUUID *)arg1;
- (NSUserDefaults *)defaults;
- (NSBundle *)embeddedBundle;
- (id)embeddedPrincipal;
- (void)endUsing:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSDictionary *)entitlements;
- (NSString *)identifier;
- (NSString *)localizedContainingName;
- (void)localizedInfoDictionaryForKeys:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (NSString *)localizedName;
- (NSString *)localizedShortName;
- (NSUUID *)multipleInstanceUUID;
- (id /* block */)notificationBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, <PKPlugIn> *, unsigned long long, void*, id, SEL
- (bool)onSystemVolume;
- (NSDictionary *)plugInDictionary;
- (id)plugInPrincipal;
- (void)setHostPrincipal:(id)arg1 withProtocol:(Protocol *)arg2;
- (void)setNotificationBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PKPlugIn> *, unsigned long long, void*
- (void)setReplyQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setUserElection:(long long)arg1;
- (bool)spent;
- (<PKPlugIn> *)supersededBy;
- (NSURL *)url;
- (bool)useBundle:(NSString *)arg1 error:(id*)arg2;
- (long long)userElection;
- (NSString *)version;

@end
