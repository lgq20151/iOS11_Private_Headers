/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetCacheServicesExtensions.framework/AssetCacheServicesExtensions
 */

@interface AssetCacheServicesReporter : NSObject {
    NSObject<OS_os_log> * _logHandle;
    NSMutableDictionary * _results;
    <AssetCacheServicesReporterDelegate> * _weakDelegate;
    NSObject<OS_dispatch_queue> * _weakDelegateQueue;
}

@property (retain) NSObject<OS_os_log> *logHandle;
@property (retain) NSMutableDictionary *results;
@property <AssetCacheServicesReporterDelegate> *weakDelegate;
@property NSObject<OS_dispatch_queue> *weakDelegateQueue;

- (void).cxx_destruct;
- (void)didFinishWithResults:(id)arg1;
- (void)didGatherResults:(id)arg1 forKeyPath:(id)arg2;
- (bool)doRanges:(id)arg1 containAddress:(id)arg2;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)keyPath:(id)arg1 byAppendingKey:(id)arg2;
- (id)locateServersWithOptions:(id)arg1;
- (id)logHandle;
- (id)prettyRanges:(id)arg1;
- (void)reportCachedServersWithKeyPath:(id)arg1;
- (void)reportFreshServersWithKeyPath:(id)arg1;
- (void)reportMightHaveWithKeyPath:(id)arg1;
- (void)reportPublicIPAddress;
- (void)reportPublicIPAddressRangesWithKeyPath:(id)arg1;
- (void)reportServersWithKeyPath:(id)arg1 generateOptions:(id /* block */)arg2;
- (id)results;
- (void)setLogHandle:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setWeakDelegate:(id)arg1;
- (void)setWeakDelegateQueue:(id)arg1;
- (void)start;
- (id)weakDelegate;
- (id)weakDelegateQueue;
- (void)willStartGatheringResultsForKeyPath:(id)arg1;

@end