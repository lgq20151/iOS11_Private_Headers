/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAccelerometerData : CMLogItem {
    id  _internal;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; } acceleration;

+ (bool)supportsSecureCoding;

- (struct { double x1; double x2; double x3; })acceleration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAcceleration:(struct { float x1; float x2; float x3; })arg1 andTimestamp:(double)arg2;
- (id)initWithCoder:(id)arg1;

@end
