/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKMatchResultInfo : NSObject {
    bool  _credentialAdded;
    BKIdentity * _identity;
    long long  _lockoutState;
    bool  _unlocked;
}

@property (nonatomic) bool credentialAdded;
@property (nonatomic, retain) BKIdentity *identity;
@property (nonatomic) long long lockoutState;
@property (nonatomic) bool unlocked;

- (void).cxx_destruct;
- (bool)credentialAdded;
- (id)identity;
- (id)initWithDeviceIdentity:(id)arg1 details:(id)arg2;
- (long long)lockoutState;
- (void)setCredentialAdded:(bool)arg1;
- (void)setIdentity:(id)arg1;
- (void)setLockoutState:(long long)arg1;
- (void)setUnlocked:(bool)arg1;
- (bool)unlocked;

@end
