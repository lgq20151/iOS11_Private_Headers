/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBRemoteDataProviderConnection : NSObject <BBDataProviderConnectionServerProxy, BBDataProviderStore, BBRemoteDataProviderDelegate> {
    NSString * _bundleID;
    bool  _clientReady;
    bool  _connected;
    NSMutableDictionary * _dataProvidersBySectionID;
    NSMutableDictionary * _dataProvidersByUniversalSectionID;
    <BBRemoteDataProviderStoreDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceName;
}

@property (nonatomic, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isConnected;
@property (nonatomic, copy) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_removeDataProvider:(id)arg1;
- (void)addDataProviderWithSectionID:(id)arg1 clientProxy:(id)arg2 identity:(id)arg3 completion:(id /* block */)arg4;
- (void)addParentSectionFactory:(id)arg1;
- (id)bundleID;
- (void)clientIsReady:(id /* block */)arg1;
- (id)dataProviderForSectionID:(id)arg1;
- (id)dataProviderForUniversalSectionID:(id)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (id)initWithServiceName:(id)arg1 bundleID:(id)arg2 delegate:(id)arg3;
- (bool)isConnected;
- (void)loadAllDataProviders;
- (void)performBlockOnDataProviders:(id /* block */)arg1;
- (void)remoteDataProviderNeedsToWakeClient:(id)arg1;
- (void)removeDataProvider:(id)arg1;
- (void)removeDataProviderWithSectionID:(id)arg1;
- (id)serviceName;
- (void)setBundleID:(id)arg1;
- (void)setConnected:(bool)arg1 completion:(id /* block */)arg2;
- (void)setServiceName:(id)arg1;

@end