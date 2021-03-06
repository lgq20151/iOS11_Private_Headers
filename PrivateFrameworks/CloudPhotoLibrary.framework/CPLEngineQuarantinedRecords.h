/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject> {
    unsigned long long  _newRejectedCount;
    CPLRejectedRecords * _newRejectedRecords;
    NSMutableArray * _quarantineMessages;
    unsigned long long  _rejectedCount;
    CPLRejectedRecords * _rejectedRecords;
    bool  _rejectedRecordsHasChanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_sendQuarantineFeedbackWithRecordClass:(Class)arg1 reason:(id)arg2;
- (bool)addQuarantinedRecordsWithIdentifier:(id)arg1 reason:(id)arg2 error:(id*)arg3;
- (bool)bumpRejectedRecords:(id)arg1 error:(id*)arg2;
- (unsigned long long)countOfQuarantinedRecords;
- (bool)isRecordWithIdentifierQuarantined:(id)arg1;
- (bool)removeQuarantinedRecordsWithIdentifier:(id)arg1 notify:(bool)arg2 error:(id*)arg3;
- (bool)resetRejectedRecordsWithError:(id*)arg1;
- (bool)resetWithError:(id*)arg1;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
