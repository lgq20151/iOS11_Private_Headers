/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTCheckpointTrace : CUTCheckpointRange {
    NSMutableArray * _mutableCheckpoints;
}

@property (nonatomic, retain) NSMutableArray *mutableCheckpoints;

- (void).cxx_destruct;
- (void)_appendReportToMutableString:(id)arg1 indentation:(long long)arg2 paddedNameLength:(long long)arg3;
- (id)_identifierWithExtraIdentifier:(id)arg1;
- (id)appendCheckpoint:(id)arg1;
- (id)checkpoints;
- (id)description;
- (void)freeze;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;
- (id)instantCheckpointWithName:(id)arg1;
- (id)instantCheckpointWithName:(id)arg1 extraIdentifier:(id)arg2;
- (id)mutableCheckpoints;
- (id)rangeCheckpointWithName:(id)arg1;
- (id)rangeCheckpointWithName:(id)arg1 extraIdentifier:(id)arg2;
- (void)setAssertsUseAfterFreeze:(bool)arg1;
- (void)setMutableCheckpoints:(id)arg1;

@end
