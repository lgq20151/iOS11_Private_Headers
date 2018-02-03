/* made by EzioChiu.
 */

@protocol LSInstallProgressProtocol <NSObject>

@required

- (void)_lsPing:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)addObserver;
- (void)createInstallProgressForApplication:(LSApplicationProxy *)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(NSString *)arg3;
- (void)installationEndedForApplication:(NSString *)arg1 withState:(unsigned long long)arg2;
- (void)installationFailedForApplication:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)removeObserver;
- (void)sendNotification:(int)arg1 forApplications:(NSArray *)arg2 withPlugins:(bool)arg3;

@end
