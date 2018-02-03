/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityPeerReceipt : PFUbiquitySafeSaveFile {
    PFUbiquityKnowledgeVector * _kv;
    NSDate * _writeDate;
}

@property (nonatomic, readonly) PFUbiquityKnowledgeVector *kv;
@property (nonatomic, readonly) PFUbiquityLocation *receiptFileLocation;
@property (nonatomic, retain) NSDate *writeDate;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 andKnowledgeVector:(id)arg2 forPeerID:(id)arg3 storeName:(id)arg4 modelVersionHash:(id)arg5 andUbiquityRootLocation:(id)arg6;
- (id)initWithLocalPeerID:(id)arg1 andReceiptFileLocation:(id)arg2;
- (id)initWithLocalPeerID:(id)arg1 receiptPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 andUbiquityRootLocation:(id)arg5;
- (id)kv;
- (bool)loadFileFromLocation:(id)arg1 error:(id*)arg2;
- (id)receiptFileLocation;
- (void)setWriteDate:(id)arg1;
- (id)writeDate;
- (bool)writeFileToLocation:(id)arg1 error:(id*)arg2;

@end
