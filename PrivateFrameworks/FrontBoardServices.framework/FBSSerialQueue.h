/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSerialQueue : NSObject {
    NSMutableArray * _blocks;
    unsigned long long  _dequeueID;
    unsigned long long  _enqueueID;
    unsigned long long  _lastSynchronizingWorkspaceName;
    NSArray * _mainRunLoopModes;
    NSObject<OS_dispatch_queue> * _queue;
    struct __CFRunLoopSource { } * _runLoopSource;
    bool  _runLoopSourceHandlingBlock;
    NSObject<OS_dispatch_semaphore> * _synchronizingEnqueueSemaphore;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

+ (id)queueWithDispatchQueue:(id)arg1;
+ (id)queueWithMainRunLoopModes:(id)arg1;

- (bool)_hasNext;
- (id)_initWithDispatchQueue:(id)arg1 mainRunLoopModes:(id)arg2;
- (bool)_performNext;
- (void)_performNextFromRunLoopSource;
- (void)_queue_performAsync:(id /* block */)arg1;
- (void)_setSynchronizingEnqueueSemaphore:(id)arg1 forWorkspaceWithName:(unsigned long long)arg2;
- (void)assertOnQueue;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)performAfter:(double)arg1 withBlock:(id /* block */)arg2;
- (void)performAsync:(id /* block */)arg1;

@end
