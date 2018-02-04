/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAssistantCommand : SAHACommand <AFServiceCommand, HMFLogging> {
    HMDAssistantCommandHelper * _assistantCommandHelper;
    bool  _completionHandlerCalled;
    NSString * _currentHomeName;
    NSUUID * _currentHomeUUID;
    HMDAssistantGather * _gather;
    HMDHome * _home;
    NSArray * _homeKitObjects;
    HMDHomeManager * _homeManager;
    long long  _numberOfHomes;
    NSString * _primaryHomeName;
    NSUUID * _primaryHomeUUID;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _startTime;
}

@property (nonatomic, retain) HMDAssistantCommandHelper *assistantCommandHelper;
@property (nonatomic) bool completionHandlerCalled;
@property (nonatomic, retain) NSString *currentHomeName;
@property (nonatomic, retain) NSUUID *currentHomeUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMDAssistantGather *gather;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDHome *home;
@property (nonatomic, retain) NSArray *homeKitObjects;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic) long long numberOfHomes;
@property (nonatomic, retain) NSString *primaryHomeName;
@property (nonatomic, retain) NSUUID *primaryHomeUUID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long startTime;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_logEvent:(id)arg1;
- (id)actionSetFromObject:(id)arg1;
- (void)addActivationCharacteristicsIfNeeded:(id)arg1 forCharacteristic:(id)arg2;
- (id)addStatusCharacteristicsIfNeeded:(id)arg1;
- (id)adjustGetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4;
- (id)adjustSetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4;
- (id)assistantCommandHelper;
- (id)compareCurrentValue:(id)arg1 newValue:(id)arg2 withMetadata:(id)arg3;
- (id)compareForBoundary:(id)arg1 withMetadata:(id)arg2;
- (bool)completionHandlerCalled;
- (id)convertValue:(id)arg1 fromUnits:(id)arg2 toUnits:(id)arg3;
- (id)currentHomeName;
- (id)currentHomeUUID;
- (id)entityFromActionSet:(id)arg1;
- (void)executeActionSet:(id)arg1 action:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)filterObjects:(id)arg1 byAttribute:(id)arg2 forActionType:(id)arg3;
- (id)filterObjects:(id)arg1 byCharacteristicType:(id)arg2;
- (id)filterObjects:(id)arg1 forCharacteristicTypes:(id)arg2;
- (id)filterObjects:(id)arg1 forCharacteristics:(id)arg2;
- (id)filterObjects:(id)arg1 forGroup:(id)arg2;
- (id)filterObjects:(id)arg1 forRoom:(id)arg2 andZone:(id)arg3;
- (id)gather;
- (id)getLocaleUnits:(id)arg1;
- (id)getReportingUnits:(id)arg1 hapCharacteristicType:(id)arg2 attribute:(id)arg3;
- (id)getValueOfType:(id)arg1 action:(id)arg2;
- (id)getoverridingHomeUUIDFromName:(id)arg1;
- (void)handleCommandWithCompletionHandler:(id /* block */)arg1;
- (void)handleGetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleGetColor:(id)arg1 forObjects:(id)arg2 serviceType:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleGetMetadataActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)handleReadWriteResponses:(id)arg1 error:(id)arg2 forAction:(id)arg3 inServiceType:(id)arg4 results:(id)arg5 forObjects:(id)arg6;
- (void)handleSetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleSetColor:(id)arg1 forObjects:(id)arg2 service:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleUpdateActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)home;
- (id)homeKitObjects;
- (id)homeManager;
- (bool)isAttributeValue:(id)arg1 equalTo:(id)arg2;
- (long long)numberOfHomes;
- (id)objectsWithIdentifierList:(id)arg1;
- (id)objectsWithSearchFilter:(id)arg1 inHome:(id)arg2;
- (id)parseColorEncoding:(id)arg1;
- (void)performWithGather:(id)arg1 queue:(id)arg2 msgDispatcher:(id)arg3 completion:(id /* block */)arg4;
- (bool)populateColorResult:(id)arg1 serviceType:(id)arg2 service:(id)arg3 action:(id)arg4 responses:(id)arg5 forObjects:(id)arg6;
- (bool)populateResult:(id)arg1 fromResponse:(id)arg2 responses:(id)arg3 forAction:(id)arg4 serviceType:(id)arg5 forObjects:(id)arg6;
- (bool)populateResult:(id)arg1 withObject:(id)arg2 serviceType:(id)arg3 action:(id)arg4;
- (bool)populateResult:(id)arg1 withService:(id)arg2 serviceType:(id)arg3 characteristic:(id)arg4 resultAttribute:(id)arg5 action:(id)arg6;
- (bool)populateResultWithEntity:(id)arg1 action:(id)arg2 entity:(id)arg3;
- (id)primaryHomeName;
- (id)primaryHomeUUID;
- (id)queue;
- (id)readRequestsForCharacteristic:(id)arg1;
- (void)reportOutcome:(id)arg1 results:(id)arg2 handler:(id /* block */)arg3;
- (void)reportResults:(id)arg1 handler:(id /* block */)arg2;
- (void)reportUnlockRequired:(id /* block */)arg1;
- (void)returnResults:(id)arg1 serviceType:(id)arg2 forAction:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)serviceFromObject:(id)arg1;
- (void)setAssistantCommandHelper:(id)arg1;
- (void)setCompletionHandlerCalled:(bool)arg1;
- (void)setCurrentHomeName:(id)arg1;
- (void)setCurrentHomeUUID:(id)arg1;
- (void)setGather:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeKitObjects:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setNumberOfHomes:(long long)arg1;
- (void)setPrimaryHomeName:(id)arg1;
- (void)setPrimaryHomeUUID:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (id)setValue:(id)arg1 format:(id)arg2 units:(id)arg3;
- (unsigned long long)startTime;
- (id)updateValue:(id)arg1 forAction:(id)arg2;
- (id)updateValueToBoundary:(id)arg1 valueType:(id)arg2 fudgeMinimum:(bool)arg3 metadata:(id)arg4;

@end