/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMFitnessMachineWorkout : CMWorkout {
    NSString * fManufacturerName;
    NSString * fModel;
}

@property (nonatomic, readonly) NSString *manufacturerName;
@property (nonatomic, readonly) NSString *model;

+ (id)fitnessMachineWorkoutInstance:(id)arg1;
+ (bool)isAvailable;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1 workoutType:(long long)arg2 manufacturerName:(id)arg3 model:(id)arg4;
- (id)manufacturerName;
- (id)model;

@end
