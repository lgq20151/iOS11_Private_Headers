/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKContentDatabase : NSObject {
    NSString * _containerIdentifier;
    bool  _isProductionEnvironment;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
    bool  _shouldUseCloudd;
    bool  _shouldUseSecureConnectionForPermanentURLs;
}

@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (nonatomic, readonly) bool isProductionEnvironment;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic, readonly) bool shouldUseCloudd;
@property (nonatomic) bool shouldUseSecureConnectionForPermanentURLs;

- (void).cxx_destruct;
- (id)_permanentURLForRecordID:(id)arg1 field:(long long)arg2 useHTTPS:(bool)arg3;
- (void)addOperation:(id)arg1;
- (id)containerIdentifier;
- (id)initWithContainerIdentifier:(id)arg1 productionEnvironment:(bool)arg2 networkBehaviorMonitor:(id)arg3;
- (bool)isProductionEnvironment;
- (id)networkBehaviorMonitor;
- (id)permanentURLForRecordID:(id)arg1 field:(long long)arg2;
- (id)permanentURLForRecordID:(id)arg1 field:(long long)arg2 useSecureConnection:(bool)arg3;
- (void)setShouldUseSecureConnectionForPermanentURLs:(bool)arg1;
- (bool)shouldUseCloudd;
- (bool)shouldUseSecureConnectionForPermanentURLs;

@end
