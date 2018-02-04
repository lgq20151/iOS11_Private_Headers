/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemService : NSObject {
    <FBSystemServiceDelegate> * _delegate;
    int  _pendingExit;
    FBSSerialQueue * _queue;
    FBSystemServiceServer * _server;
}

@property (nonatomic) <FBSystemServiceDelegate> *delegate;
@property (getter=isPendingExit, readonly) bool pendingExit;
@property (nonatomic, readonly, retain) FBSSerialQueue *queue;
@property (nonatomic, retain) FBSystemServiceServer *server;

+ (id)sharedInstance;

- (void)_activateApplication:(id)arg1 requestID:(unsigned int)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(id /* block */)arg6;
- (bool)_isTrustedRequestToOpenApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4;
- (bool)_isWhitelistedLaunchSuspendedApp:(id)arg1;
- (unsigned long long)_mapShutdownOptionsToOptions:(id)arg1;
- (void)_performExitTasksForRelaunch:(bool)arg1;
- (void)_reallyActivateApplication:(id)arg1 requestID:(unsigned int)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 isTrusted:(bool)arg6 sequenceNumber:(unsigned long long)arg7 cacheGUID:(id)arg8 ourSequenceNumber:(unsigned long long)arg9 ourCacheGUID:(id)arg10 withResult:(id /* block */)arg11;
- (bool)_requireEntitlementToOpenURL:(id)arg1 options:(id)arg2;
- (bool)_shouldPendRequestForClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4;
- (void)_shutdownWithFBSOptions:(id)arg1;
- (void)_terminateProcess:(id)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 completion:(id /* block */)arg5;
- (void)activateApplication:(id)arg1 requestID:(unsigned int)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(id /* block */)arg6;
- (void)canActivateApplication:(id)arg1 source:(id)arg2 withResult:(id /* block */)arg3;
- (void)dataReset:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (void)exitAndRelaunch:(bool)arg1;
- (void)exitAndRelaunch:(bool)arg1 withOptions:(unsigned long long)arg2;
- (void)handleActions:(id)arg1 source:(id)arg2 withResult:(id /* block */)arg3;
- (id)initWithQueue:(id)arg1;
- (void)isPasscodeLockedOrBlockedWithResult:(id /* block */)arg1;
- (bool)isPendingExit;
- (void)prepareForExitAndRelaunch:(bool)arg1;
- (id)queue;
- (id)server;
- (void)setDelegate:(id)arg1;
- (void)setPendingExit:(bool)arg1;
- (void)setServer:(id)arg1;
- (void)setSystemIdleSleepDisabled:(bool)arg1 forReason:(id)arg2;
- (void)shutdownAndReboot:(bool)arg1;
- (void)shutdownWithOptions:(unsigned long long)arg1;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(id /* block */)arg6;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 source:(id)arg5;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(id /* block */)arg6;

@end