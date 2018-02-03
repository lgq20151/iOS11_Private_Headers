/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTCheckpointInstant : CUTCheckpointSignpost {
    NSDate * _date;
}

@property (nonatomic, retain) NSDate *date;

- (void).cxx_destruct;
- (id)_reportEndDate;
- (id)_reportStartDate;
- (void)_touchDate;
- (id)date;
- (id)description;
- (id)initWithDate:(id)arg1 name:(id)arg2 uniqueIdentifier:(id)arg3;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2;
- (void)mergeWithCheckpoint:(id)arg1;
- (void)setDate:(id)arg1;

@end
