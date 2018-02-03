/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityBaselineHeuristics : NSObject {
    PFUbiquityKnowledgeVector * _currentBaselineKV;
    PFUbiquityKnowledgeVector * _currentKV;
    NSString * _localPeerID;
    long long  _logSize;
    long double _logToStoreSizeRatio;
    long long  _minLogBytes;
    NSString * _modelVersionHash;
    long long  _numRequiredTransactions;
    NSString * _storeName;
    long long  _storeSize;
    PFUbiquityLocation * _ubiquityRootLocation;
}

@property (nonatomic, retain) PFUbiquityKnowledgeVector *currentBaselineKV;
@property (nonatomic, retain) PFUbiquityKnowledgeVector *currentKV;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) long long logSize;
@property (nonatomic) long double logToStoreSizeRatio;
@property (nonatomic) long long minLogBytes;
@property (nonatomic, readonly) NSString *modelVersionHash;
@property (nonatomic) long long numRequiredTransactions;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) long long storeSize;
@property (nonatomic, readonly) PFUbiquityLocation *ubiquityRootLocation;

- (long long)bytesForFileAtPath:(id)arg1;
- (bool)canRollBaseline:(id*)arg1;
- (id)copy;
- (id)currentBaselineKV;
- (id)currentKV;
- (void)dealloc;
- (id)description;
- (bool)haveEnoughTransactionsToRoll;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (id)localPeerID;
- (long long)logSize;
- (long double)logToStoreSizeRatio;
- (bool)logsConsumeEnoughDiskSpace;
- (long long)minLogBytes;
- (id)modelVersionHash;
- (long long)numRequiredTransactions;
- (void)setCurrentBaselineKV:(id)arg1;
- (void)setCurrentKV:(id)arg1;
- (void)setLogSize:(long long)arg1;
- (void)setLogToStoreSizeRatio:(long double)arg1;
- (void)setMinLogBytes:(long long)arg1;
- (void)setNumRequiredTransactions:(long long)arg1;
- (void)setStoreSize:(long long)arg1;
- (id)storeName;
- (long long)storeSize;
- (id)ubiquityRootLocation;
- (void)updateHeuristics;

@end
