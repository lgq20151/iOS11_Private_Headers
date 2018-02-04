/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AALoginContextManager : NSObject {
    AAStorableLoginContext * _stashedContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stashedContextLock;
}

@property (nonatomic, retain) AAStorableLoginContext *stashedContext;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)persistStashedContext;
- (void)setStashedContext:(id)arg1;
- (id)stashedContext;

@end