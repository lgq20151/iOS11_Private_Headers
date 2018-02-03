/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteObservationBuffer : NSObservationBuffer {
    bool  _automaticallyEmitsObjects;
    id /* block */  _bufferFullHandler;
    NSMutableArray * _dequeue;
    NSObject<OS_dispatch_queue> * _inputQueue;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    unsigned long long  _maxCount;
    bool  _memoryPressureSensitive;
    NSOperationQueue * _outputQueue;
    long long  _policy;
    int  _state;
}

+ (void)initialize;

- (void)_alreadyOnQueueEmitAllObjects;
- (void)_alreadyOnQueueEmitObject;
- (void)_mergeChanges;
- (void)_receiveBox:(id)arg1;
- (bool)automaticallyEmitsObjects;
- (id /* block */)bufferFullHandler;
- (void)dealloc;
- (void)emitAllObjects;
- (void)emitObject;
- (id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3;
- (bool)isMemoryPressureSensitive;
- (void)setAutomaticallyEmitsObjects:(bool)arg1;
- (void)setBufferFullHandler:(id /* block */)arg1;
- (void)setMemoryPressureSensitive:(bool)arg1;

@end
