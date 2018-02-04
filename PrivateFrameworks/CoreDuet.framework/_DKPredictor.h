/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPredictor : NSObject {
    <_DKKnowledgeQuerying> * _knowledgeStore;
}

@property (nonatomic, retain) <_DKKnowledgeQuerying> *knowledgeStore;

+ (bool)databaseTooYoung:(id)arg1 atDate:(id)arg2;
+ (id)dateRangeFromDictionary:(id)arg1 atDate:(id)arg2;
+ (id)defaultPeriodAtDate:(id)arg1;
+ (int)endingSlotFromDate:(id)arg1;
+ (id)normalizeDictionaryToCurrentDate:(id)arg1 atDate:(id)arg2;
+ (id)predictorLog;
+ (id)predictorWithKnowledgeStore:(id)arg1;
+ (id)roundDate:(id)arg1 toUpperQuarterHour:(bool)arg2;
+ (int)startingSlotFromDate:(id)arg1;

- (void).cxx_destruct;
- (id)deviceActivityLikelihood;
- (id)expectedInBedPeriod;
- (id)initWithKnowledgeStore:(id)arg1;
- (id)knowledgeStore;
- (id)launchLikelihoodForTopNApplications:(long long)arg1 withLikelihoodGreaterThan:(double)arg2 withTemporalResolution:(int)arg3;
- (id)launchLikelihoodPredictionForApp:(id)arg1;
- (id)pluginLikelihood;
- (id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
- (id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 asOfDate:(id)arg4;
- (void)setKnowledgeStore:(id)arg1;

@end