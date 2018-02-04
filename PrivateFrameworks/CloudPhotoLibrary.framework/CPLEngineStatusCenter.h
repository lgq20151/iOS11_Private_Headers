/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineStatusCenter : CPLEngineStorage <CPLAbstractObject> {
    unsigned long long  _currentGeneration;
    NSMutableSet * _pendingDeletedTransientStatuses;
    NSMutableDictionary * _pendingTransientStatuses;
    NSMutableSet * _persistedIdentifiers;
    NSDate * _transactionStartDate;
    NSMutableDictionary * _transientStatuses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStatusChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fillStatus:(id)arg1;
- (void)_fillStatus:(id)arg1 withClientCacheRecord:(id)arg2 cloudCacheRecord:(id)arg3 isConfirmed:(bool)arg4 isInIDMapping:(bool)arg5;
- (id)_statusFromCachesWithRecordIdentifier:(id)arg1;
- (bool)acknowledgeChangedStatuses:(id)arg1 error:(id*)arg2;
- (bool)discardNotificationForRecordWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)hasStatusChanges;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (bool)notifyStatusForRecordHasChanged:(id)arg1 persist:(bool)arg2 error:(id*)arg3;
- (id)recordForStatusWithIdentifier:(id)arg1;
- (bool)resetWithError:(id*)arg1;
- (id)status;
- (id)statusChanges;
- (id)statusesForRecordsWithIdentifiers:(id)arg1;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end