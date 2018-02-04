/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSSignInController : NSObject <IDSServiceDelegate> {
    NSNumber * _faceTimePreviousEnabled;
    NSMutableDictionary * _nameServiceMap;
    NSMapTable * _serviceCallbackMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *faceTimePreviousEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *nameServiceMap;
@property (nonatomic, retain) NSMapTable *serviceCallbackMap;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_serviceForName:(id)arg1;
- (void)disableFaceTime;
- (void)disableService:(id)arg1;
- (void)disableiMessage;
- (void)enableFaceTime;
- (void)enableService:(id)arg1;
- (void)enableiMessage;
- (id)faceTimePreviousEnabled;
- (id)init;
- (bool)isFaceTimeEnabled;
- (bool)isServiceCurrentlyEnabled:(id)arg1;
- (bool)isiMessageEnabled;
- (id)nameServiceMap;
- (void)registerEnabledStatusChangedCallback:(id /* block */)arg1 forService:(id)arg2;
- (void)registerFaceTimeEnabledStatusChangedCallback:(id /* block */)arg1;
- (void)registeriMessageEnabledStatusChangedCallback:(id /* block */)arg1;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (id)serviceCallbackMap;
- (void)setFaceTimePreviousEnabled:(id)arg1;
- (void)setNameServiceMap:(id)arg1;
- (void)setServiceCallbackMap:(id)arg1;
- (void)unregisterEnabledStatusChangedCallbackForService:(id)arg1;
- (void)unregisterFaceTimeEnabledStatusChangedCallback;
- (void)unregisteriMessageEnabledStatusChangedCallback;

@end