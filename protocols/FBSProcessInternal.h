/* made by EzioChiu.
 */

@protocol FBSProcessInternal <FBSProcessIdentity>

@required

- (void)_terminateWithRequest:(FBSProcessTerminationRequest *)arg1 forWatchdog:(FBSProcessWatchdog *)arg2;
- (bool)_watchdog:(FBSProcessWatchdog *)arg1 shouldTerminateWithDeclineReason:(out id*)arg2;
- (FBSProcessTerminationRequest *)_watchdog:(FBSProcessWatchdog *)arg1 terminationRequestForViolatedProvision:(FBSProcessExecutionProvision *)arg2 error:(NSError *)arg3;
- (void)_watchdogStarted:(FBSProcessWatchdog *)arg1;
- (void)_watchdogStopped:(FBSProcessWatchdog *)arg1;

@end
