/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRDevicePropertyDiff : NRDiffBase {
    <NSObject><NSCopying> * _value;
}

@property (nonatomic, readonly) <NSObject><NSCopying> *value;

+ (id)enclosedClassTypes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)value;

@end
