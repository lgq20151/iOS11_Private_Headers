/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFManagedFeatureObserver : NSObject <MCProfileConnectionObserver> {
    bool  _cachedAuthenticationRequiredToAutoFill;
}

@property (nonatomic, readonly) bool authenticationRequiredToAutoFill;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedObserver;

- (bool)authenticationRequiredToAutoFill;
- (void)dealloc;
- (id)init;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;

@end
