/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIUserNotificationAction : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _activationMode;
    NSString * _activationModeString;
    bool  _authenticationRequired;
    unsigned long long  _behavior;
    NSString * _behaviorString;
    bool  _destructive;
    NSString * _identifier;
    NSDictionary * _parameters;
    NSString * _title;
}

@property (nonatomic) unsigned long long activationMode;
@property (nonatomic, readonly) NSString *activationModeString;
@property (getter=isAuthenticationRequired, nonatomic) bool authenticationRequired;
@property (nonatomic) unsigned long long behavior;
@property (nonatomic, readonly) NSString *behaviorString;
@property (getter=isDestructive, nonatomic) bool destructive;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *parameters;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)activationMode;
- (id)activationModeString;
- (unsigned long long)behavior;
- (id)behaviorString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 behavior:(unsigned long long)arg3 parameters:(id)arg4 activationMode:(unsigned long long)arg5 isAuthenticationRequired:(bool)arg6 isDestructive:(bool)arg7;
- (bool)isAuthenticationRequired;
- (bool)isDestructive;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)parameters;
- (void)setActivationMode:(unsigned long long)arg1;
- (void)setAuthenticationRequired:(bool)arg1;
- (void)setBehavior:(unsigned long long)arg1;
- (void)setDestructive:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)validatedAction;

@end
