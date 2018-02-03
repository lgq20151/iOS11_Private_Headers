/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityPeerSnapshot : NSObject {
    NSMutableDictionary * _diffFromPrevious;
    NSString * _exportingPeerID;
    PFUbiquityKnowledgeVector * _kv;
    NSDictionary * _logSnapshot;
    NSDate * _transactionDate;
    NSNumber * _transactionNumber;
}

@property (nonatomic, readonly) NSDictionary *diffFromPrevious;
@property (nonatomic, readonly) NSString *exportingPeerID;
@property (nonatomic, readonly) PFUbiquityKnowledgeVector *knowledgeVector;
@property (nonatomic, readonly) NSDictionary *logSnapshot;
@property (nonatomic, readonly) NSDate *transactionDate;
@property (nonatomic, readonly) NSNumber *transactionNumber;

- (long long)compare:(id)arg1;
- (void)computeDiffToPreviousSnapshot:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)diffFromPrevious;
- (id)exportingPeerID;
- (id)initWithExportingPeerID:(id)arg1 logSnapshot:(id)arg2 transactionNumber:(id)arg3 transactionDate:(id)arg4 andKnowledgeVector:(id)arg5;
- (id)initWithTranasctionEntry:(id)arg1 andLogSnapshot:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)knowledgeVector;
- (id)logSnapshot;
- (void)removeValuesChangedByPeerSnapshot:(id)arg1;
- (id)transactionDate;
- (id)transactionNumber;

@end
