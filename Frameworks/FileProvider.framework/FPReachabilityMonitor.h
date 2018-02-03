/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPReachabilityMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _reachabilityFlags;
    NSHashTable * _reachabilityObservers;
    struct __SCNetworkReachability { } * _reachabilityRef;
}

@property (nonatomic, readonly) bool isNetworkReachable;
@property (nonatomic) unsigned int reachabilityFlags;

+ (bool)isNetworkReachableForFlags:(unsigned int)arg1;
+ (id)sharedReachabilityMonitor;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (bool)isNetworkReachable;
- (unsigned int)reachabilityFlags;
- (void)removeObserver:(id)arg1;
- (void)setReachabilityFlags:(unsigned int)arg1;

@end
