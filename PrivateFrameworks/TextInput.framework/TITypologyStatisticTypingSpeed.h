/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyStatisticTypingSpeed : TITypologyStatisticComposite {
    TITypologyStatisticBasicCounts * _basicCounts;
    TITypologyStatisticTimeElapsed * _timeElapsed;
}

@property (nonatomic, readonly) TITypologyStatisticBasicCounts *basicCounts;
@property (nonatomic, readonly) TITypologyStatisticTimeElapsed *timeElapsed;
@property (nonatomic, readonly) float typingSpeed;

+ (id)statistic;
+ (id)statisticCompositeWithStatistics:(id)arg1;

- (id)aggregateReport;
- (id)basicCounts;
- (void)dealloc;
- (id)initWithTimeElapsed:(id)arg1 basicCounts:(id)arg2;
- (id)timeElapsed;
- (float)typingSpeed;

@end
