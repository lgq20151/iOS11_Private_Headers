/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataXPCSessionWeakTaskArray : NSObject {
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSPointerArray * _tasks;
}

- (void).cxx_destruct;
- (unsigned long long)_indexOfTask:(id)arg1;
- (void)addTask:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithIsolationQueue:(id)arg1;
- (void)removeTask:(id)arg1;

@end
