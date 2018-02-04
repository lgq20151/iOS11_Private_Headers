/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPredictionTimeline : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _startDate;
    NSArray * _transitionDates;
    NSArray * _values;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSArray *transitionDates;
@property (nonatomic, retain) NSArray *values;

+ (id)predictionUnavailable;
+ (bool)supportsSecureCoding;
+ (id)timelineWithValues:(id)arg1 eachWithDuration:(double)arg2 startingAt:(id)arg3;
+ (id)timelineWithValues:(id)arg1 forDurations:(id)arg2 startingAt:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithValues:(id)arg1 eachWithDuration:(double)arg2 startingAt:(id)arg3;
- (id)initWithValues:(id)arg1 forDurations:(id)arg2 startingAt:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isUnavailable;
- (id)largestDateRangeWithValuesBetween:(double)arg1 and:(double)arg2 ofMinimumDuration:(double)arg3;
- (void)setStartDate:(id)arg1;
- (void)setTransitionDates:(id)arg1;
- (void)setValues:(id)arg1;
- (id)startDate;
- (id)transitionDates;
- (id)valueAtDate:(id)arg1;
- (id)values;

@end