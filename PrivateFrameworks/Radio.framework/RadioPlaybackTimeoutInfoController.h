/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPlaybackTimeoutInfoController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    long long  _activeAccountIdentifier;
    RadioPlaybackTimeoutInfo * _currentTimeoutInfo;
    NSMutableArray * _currentTimeoutInfoLoadCompletionHandlers;
    RadioLoadStoreBagRequest * _loadStoreBagRequest;
    RadioStoreBag * _storeBag;
    NSDictionary * _syncOverrideTimeoutDictionary;
}

+ (void)_clearAccountRelatedTimeoutInfo;

- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (id)_generateCurrentTimeoutInfoReturningReady:(bool*)arg1;
- (void)_invalidateCurrentTimeoutInfoAllowingChangeNotification:(bool)arg1;
- (double)_playbackTimeoutForRadioConfigurationKey:(id)arg1 fallbackRadioConfigurationKey:(id)arg2 syncOverrideTimeoutKey:(id)arg3 fallbackSyncOverrideTimeoutKey:(id)arg4 defaultValue:(double)arg5;
- (void)_radioRequestDidFinishNotification:(id)arg1;
- (void)_setSyncOverrideTimeoutDictionary:(id)arg1;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (void)dealloc;
- (void)getCurrentTimeoutInfoWithCompletionHandler:(id /* block */)arg1;
- (id)init;

@end
