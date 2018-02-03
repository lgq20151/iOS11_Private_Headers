/* made by EzioChiu.
 */

@protocol UMUserSwitchManagement <NSObject>

@required

- (void)registerUserSwitchStakeHolder:(id <UMUserSwitchStakeholder>)arg1;
- (void)registerUserSwitchStakeHolder:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <UMUserSwitchStakeholder> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)registerUserSyncStakeholder:(id <UMUserSyncStakeholder>)arg1 withMachServiceName:(NSString *)arg2;
- (void)resumeSync;
- (void)switchToLoginUserWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)switchToLoginUserWithError:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)switchToUser:(void *)arg1 passcodeData:(void *)arg2 context:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: UMUser *, NSData *, UMUserSwitchContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)terminateSyncWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(NSString *)arg3;

@end
