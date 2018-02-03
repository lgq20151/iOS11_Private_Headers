/* made by EzioChiu.
 */

@protocol UIActivityContinuationManagerApplicationContext

@required

- (void)activityContinuationManager:(UIActivityContinuationManager *)arg1 configureProgressUIWithError:(NSError *)arg2;
- (bool)activityContinuationManager:(UIActivityContinuationManager *)arg1 continueUserActivity:(NSUserActivity *)arg2;
- (void)activityContinuationManager:(UIActivityContinuationManager *)arg1 didFailToContinueUserActivityWithType:(NSString *)arg2 error:(NSError *)arg3;
- (void)activityContinuationManager:(UIActivityContinuationManager *)arg1 didUpdateUserActivity:(NSUserActivity *)arg2;
- (void)activityContinuationManager:(void *)arg1 displayProgressUI:(void *)arg2 dismissalHandler:(void *)arg3; // needs 3 arg types, found 7: UIActivityContinuationManager *, NSProgress *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)activityContinuationManager:(void *)arg1 hideProgressUIWithCompletion:(void *)arg2; // needs 2 arg types, found 6: UIActivityContinuationManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)activityContinuationManager:(UIActivityContinuationManager *)arg1 willContinueUserActivityWithType:(NSString *)arg2;
- (bool)activityContinuationManagerHandleErrorsByConfiguringProgressUI:(UIActivityContinuationManager *)arg1;
- (NSError *)activityContinuationManagerUserCancelledError:(UIActivityContinuationManager *)arg1;

@end
