/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDContextualKeyPath : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _deviceID;
    bool  _isEphemeral;
    bool  _isUserCentric;
    NSString * _key;
}

@property (nonatomic) unsigned long long deviceID;
@property (nonatomic) bool isEphemeral;
@property (nonatomic) bool isUserCentric;
@property (nonatomic, copy) NSString *key;

+ (id)ephemeralKeyPathWithKey:(id)arg1;
+ (id)keyPathWithKey:(id)arg1;
+ (id)keyPathWithKey:(id)arg1 isUserCentric:(bool)arg2;
+ (id)remotekeyPathForKeyPath:(id)arg1 forDevice:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 forDevice:(unsigned long long)arg2 isUserCentric:(bool)arg3 isEphemeral:(bool)arg4;
- (bool)isEphemeral;
- (bool)isEqual:(id)arg1;
- (bool)isUserCentric;
- (id)key;
- (unsigned long long)length;
- (void)setDeviceID:(unsigned long long)arg1;
- (void)setIsEphemeral:(bool)arg1;
- (void)setIsUserCentric:(bool)arg1;
- (void)setKey:(id)arg1;

@end