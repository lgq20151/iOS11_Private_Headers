/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPresenceEvent : HMDEvent <HMDTriggerEventProtocol, HMFDumpState, HMFLogging, HMFMessageReceiver, NSSecureCoding> {
    HMPresenceEventActivation * _activation;
    bool  _currentStatus;
    HMDEventTriggerExecutionSession * _executionSession;
    NSString * _presenceType;
    NSMutableArray * _userUUIDs;
    NSMutableDictionary * _users;
}

@property (nonatomic, readonly) HMPresenceEventActivation *activation;
@property (nonatomic, readonly) unsigned long long activationGranularity;
@property (nonatomic) bool currentStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) HMDEventTriggerExecutionSession *executionSession;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) NSString *presenceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *userUUIDs;
@property (nonatomic, readonly) NSMutableDictionary *users;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_activate:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_addUser:(id)arg1;
- (void)_evaluatePresenceEventForHomePresenceUpdate:(id)arg1;
- (void)_handleHomePresenceUpdate:(id)arg1;
- (void)_handleUpdateRequest:(id)arg1;
- (void)_registerForMessages;
- (void)_removeAllUsers;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)_updatePresenceType:(id)arg1 payload:(id)arg2;
- (void)_updateUsers:(id)arg1 payload:(id)arg2 home:(id)arg3;
- (id)activation;
- (unsigned long long)activationGranularity;
- (bool)compatibleWithUser:(id)arg1;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 delegate:(id)arg4;
- (id)createClientPayload;
- (id)createDaemonPayload;
- (id)createPayload;
- (id)createPresenceEventPayload:(bool)arg1;
- (bool)currentStatus;
- (void)dealloc;
- (id)description;
- (void)didEndExecutionSession:(id)arg1;
- (id)emptyModelObject;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithHomePresence:(id)arg1;
- (bool)evaluateWithHomePresenceUpdate:(id)arg1;
- (bool)evaluateWithUserPresence:(id)arg1;
- (id)executionSession;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 home:(id)arg2;
- (id)metricData;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)presenceMetricData;
- (id)presenceType;
- (id)presenceTypeForClient;
- (bool)removeUser:(id)arg1;
- (void)setCurrentStatus:(bool)arg1;
- (void)setExecutionSession:(id)arg1;
- (void)setPresenceType:(id)arg1;
- (id)thisUser;
- (id)userUUIDs;
- (id)users;

@end