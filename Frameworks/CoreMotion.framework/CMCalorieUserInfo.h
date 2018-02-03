/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMCalorieUserInfo : CMLogItem {
    double  fAge;
    long long  fCondition;
    long long  fGender;
    double  fHeight;
    double  fWeight;
}

@property (nonatomic, readonly) double age;
@property (nonatomic, readonly) long long condition;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double weight;

+ (id)genderString:(long long)arg1;
+ (bool)supportsSecureCoding;

- (double)age;
- (long long)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)gender;
- (double)height;
- (id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4;
- (id)initWithAge:(double)arg1 gender:(long long)arg2 height:(double)arg3 weight:(double)arg4 condition:(long long)arg5;
- (id)initWithCoder:(id)arg1;
- (double)weight;

@end
