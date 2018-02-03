/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionTimeRange : CMLogItem {
    NSDate * fEndDate;
    NSDate * fStartDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *startDate;

+ (struct { double x1; double x2; })CLMotionTimeRangeFromCMMotionTimeRange:(id)arg1;
+ (id)CMMotionTimeRangeFromCLMotionTimeRange:(struct { double x1; double x2; })arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2;
- (id)startDate;

@end
