/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTTelephonyManager : NSObject {
    NSMutableSet * _disableFastDormancyTokens;
    NSRecursiveLock * _lock;
    bool  _registered;
    struct __CTServerConnection { } * _serverConnection;
    void * _suspendDormancyAssertion;
}

@property (nonatomic) struct __CTServerConnection { }*_serverConnection;
@property (nonatomic) void*_suspendDormancyAssertion;
@property (nonatomic, readonly) bool disableFastDormancy;
@property (nonatomic, retain) NSMutableSet *disableFastDormancyTokens;
@property (nonatomic, retain) NSRecursiveLock *lock;
@property (nonatomic) bool registered;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)__adjustFastDormancyTokens;
- (void)_adjustFastDormancyTokens;
- (struct __CTServerConnection { }*)_serverConnection;
- (void)_setFastDormancySuspended:(bool)arg1;
- (void*)_suspendDormancyAssertion;
- (void)addFastDormancyDisableToken:(id)arg1;
- (void)dealloc;
- (bool)disableFastDormancy;
- (id)disableFastDormancyTokens;
- (id)init;
- (id)lock;
- (bool)registered;
- (void)removeFastDormancyDisableToken:(id)arg1;
- (void)setDisableFastDormancyTokens:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setRegistered:(bool)arg1;
- (void)set_serverConnection:(struct __CTServerConnection { }*)arg1;
- (void)set_suspendDormancyAssertion:(void*)arg1;

@end
