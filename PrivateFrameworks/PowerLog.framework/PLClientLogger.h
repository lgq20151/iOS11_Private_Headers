/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

@interface PLClientLogger : NSObject {
    NSObject<OS_dispatch_queue> * _adaptivePermissionWorkQueue;
    bool  _batchDropMessages;
    NSObject<OS_dispatch_queue> * _batchFlushQueue;
    int  _batchedDropMessageCount;
    NSMutableArray * _batchedTaskCache;
    bool  _batchedTimerInFlight;
    NSSet * _batchingClientWhitelist;
    bool  _clientDebug;
    bool  _forceBatching;
    NSMutableDictionary * _pendingTaskCache;
    NSMutableDictionary * _permissionCache;
    NSString * _processName;
    bool  _talkToPowerlogHelper;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSObject<OS_xpc_object> * _xpcConnection;
    NSObject<OS_xpc_object> * _xpcConnectionHelper;
    NSObject<OS_dispatch_queue> * _xpcConnectionHelperQueue;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
}

@property (retain) NSObject<OS_dispatch_queue> *adaptivePermissionWorkQueue;
@property bool batchDropMessages;
@property (retain) NSObject<OS_dispatch_queue> *batchFlushQueue;
@property int batchedDropMessageCount;
@property (retain) NSMutableArray *batchedTaskCache;
@property bool batchedTimerInFlight;
@property (readonly) NSSet *batchingClientWhitelist;
@property bool clientDebug;
@property bool forceBatching;
@property (retain) NSMutableDictionary *pendingTaskCache;
@property (retain) NSMutableDictionary *permissionCache;
@property (retain) NSString *processName;
@property bool talkToPowerlogHelper;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnection;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnectionHelper;
@property (retain) NSObject<OS_dispatch_queue> *xpcConnectionHelperQueue;
@property (retain) NSObject<OS_dispatch_queue> *xpcConnectionQueue;

+ (bool)allowMessageOnDevice;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)adaptivePermissionWorkQueue;
- (void)addToBatchedTaskCacheForType:(id)arg1 forClientID:(short)arg2 forKey:(id)arg3 withPayload:(id)arg4;
- (void)addToPendingTaskCacheForType:(id)arg1 forClientID:(short)arg2 forKey:(id)arg3 withPayload:(id)arg4;
- (bool)batchDropMessages;
- (id)batchFlushQueue;
- (void)batchTasksCacheFlush;
- (int)batchedDropMessageCount;
- (id)batchedTaskCache;
- (bool)batchedTimerInFlight;
- (id)batchingClientWhitelist;
- (short)blockedPermissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3 withTimeout:(unsigned long long)arg4;
- (id)buildMessageForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (short)cachedPermissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3;
- (bool)clientDebug;
- (bool)forceBatching;
- (id)init;
- (void)logForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (void)logStateCaches;
- (id)pendingTaskCache;
- (id)pendingTasksForType:(id)arg1 forClientID:(short)arg2 forKey:(id)arg3;
- (id)permissionCache;
- (void)permissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3 completion:(id /* block */)arg4;
- (void)powerlogStateChanged;
- (id)processName;
- (id)queryForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (void)setAdaptivePermissionWorkQueue:(id)arg1;
- (void)setBatchDropMessages:(bool)arg1;
- (void)setBatchFlushQueue:(id)arg1;
- (void)setBatchedDropMessageCount:(int)arg1;
- (void)setBatchedTaskCache:(id)arg1;
- (void)setBatchedTimerInFlight:(bool)arg1;
- (void)setCachePermission:(short)arg1 ForClientID:(short)arg2 withKey:(id)arg3 withType:(id)arg4;
- (void)setClientDebug:(bool)arg1;
- (void)setForceBatching:(bool)arg1;
- (void)setPendingTaskCache:(id)arg1;
- (void)setPermissionCache:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setTalkToPowerlogHelper:(bool)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcConnectionHelper:(id)arg1;
- (void)setXpcConnectionHelperQueue:(id)arg1;
- (void)setXpcConnectionQueue:(id)arg1;
- (bool)talkToPowerlogHelper;
- (id)workQueue;
- (id)xpcConnection;
- (id)xpcConnectionHelper;
- (id)xpcConnectionHelperQueue;
- (id)xpcConnectionQueue;
- (id)xpcConnectionWithClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (void)xpcSendMessage:(id)arg1 withClientID:(short)arg2 withKey:(id)arg3 withPayload:(id)arg4;
- (void)xpcSendMessageWithRateLimitingforClient:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (id)xpcSendMessageWithReply:(id)arg1 withClientID:(short)arg2 withKey:(id)arg3 withPayload:(id)arg4;

@end
