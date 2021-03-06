/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataXPCSessionTaskQueue : NSObject {
    <GEODataXPCConnectionManager> * _connectionManager;
    _GEODataXPCSessionTaskQueueHelper * _helper;
    NSObject<OS_dispatch_queue> * _isolation;
    NSObject<OS_dispatch_queue> * _localIsolation;
    NSMutableDictionary * _pendingTasks;
}

@property (nonatomic, readonly) <GEODataXPCConnectionManager> *connectionManager;
@property (nonatomic, readonly) NSMutableDictionary *pendingTasks;

- (void).cxx_destruct;
- (void)configureLimits:(id)arg1;
- (id)connectionManager;
- (void)decrementTaskCountForQueue:(unsigned int)arg1;
- (id)description;
- (void)enqueueTask:(id)arg1;
- (void)incrementTaskCountForQueue:(unsigned int)arg1;
- (unsigned int)inflightTaskCountForQueue:(unsigned int)arg1;
- (id)init;
- (id)initWithIsolationQueue:(id)arg1 limits:(id)arg2 connectionManager:(id)arg3;
- (id)pendingTasks;
- (bool)reachedTaskCountLimitForQueue:(unsigned int)arg1;
- (bool)removeQueuedTask:(id)arg1;
- (void)sendNextTaskForQueue:(unsigned int)arg1;
- (void)sendTask:(id)arg1;
- (void)sendTaskImmediately:(id)arg1;
- (unsigned int)taskCountLimitForQueue:(unsigned int)arg1;

@end
