/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMutableItemUpdateOutcome : HFItemUpdateOutcome {
    NSMutableDictionary * _mutableResults;
}

@property (nonatomic, retain) NSMutableDictionary *mutableResults;
@property (nonatomic) unsigned long long outcomeType;
@property (nonatomic, retain) NSDictionary *results;

- (void).cxx_destruct;
- (void)addResultsFromDictionary:(id)arg1;
- (void)addResultsFromOutcome:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithResults:(id)arg1 type:(unsigned long long)arg2;
- (id)mutableResults;
- (id)results;
- (void)setMutableResults:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setResults:(id)arg1;

@end
