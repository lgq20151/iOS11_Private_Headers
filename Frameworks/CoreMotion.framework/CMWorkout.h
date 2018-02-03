/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMWorkout : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * fSessionId;
    long long  fType;
}

@property (nonatomic, readonly) NSUUID *sessionId;
@property (nonatomic, readonly) long long type;

+ (int)CLMotionActivityTypeFromCMWorkoutType:(long long)arg1;
+ (long long)CMWorkoutTypeFromCLMotionActivityType:(int)arg1;
+ (bool)isAvailable;
+ (long long)natalieDataSessionFromWorkoutType:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)workoutName:(long long)arg1;
+ (long long)workoutTypeFromNatalieDataSession:(long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1 type:(long long)arg2;
- (id)sessionId;
- (long long)type;

@end