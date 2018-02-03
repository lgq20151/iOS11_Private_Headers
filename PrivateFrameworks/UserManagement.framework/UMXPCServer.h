/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMXPCServer : NSObject <NSXPCListenerDelegate, UMUserSwitchManagement, UMUserSwitchManagement_Private> {
    id /* block */  _bubblePopHandler;
    NSData * _contextData;
    bool  _currentlyBroadcastingWillSwitchToUser;
    bool  _didBroadcastUploadContent;
    bool  _didBroadcastWillSwitchToUser;
    bool  _didRegisterStakeholder;
    bool  _didSendTasks;
    unsigned int  _interruptionRetryCount;
    NSString * _machServiceName;
    NSData * _passcodeData;
    NSDictionary * _personaSpec;
    NSDictionary * _preferencesDict;
    id /* block */  _registrationCompletionHandler;
    id  _stakeholder;
    unsigned long long  _stakeholderType;
    id /* block */  _suspendQuotasCompletionHandler;
    NSMutableArray * _switchBlockingTasks;
    id /* block */  _switchCompletionHandler;
    NSMutableArray * _syncTasks;
    NSString * _unregistrationReason;
    unsigned long long  _unregistrationStatus;
    id /* block */  _uploadContentCompletionHandler;
    id /* block */  _willSwitchCompletionHandler;
    unsigned long long  _willSwitchToUserAddedTaskCount;
    NSXPCConnection * _xpcConnection;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, copy) id /* block */ bubblePopHandler;
@property (nonatomic, retain) NSData *contextData;
@property (nonatomic) bool currentlyBroadcastingWillSwitchToUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didBroadcastUploadContent;
@property (nonatomic) bool didBroadcastWillSwitchToUser;
@property (nonatomic) bool didRegisterStakeholder;
@property (nonatomic) bool didSendTasks;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int interruptionRetryCount;
@property (nonatomic, retain) NSString *machServiceName;
@property (nonatomic, retain) NSData *passcodeData;
@property (nonatomic, retain) NSDictionary *personaSpec;
@property (nonatomic, retain) NSDictionary *preferencesDict;
@property (nonatomic, copy) id /* block */ registrationCompletionHandler;
@property (nonatomic) id stakeholder;
@property (nonatomic) unsigned long long stakeholderType;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ suspendQuotasCompletionHandler;
@property (nonatomic, retain) NSMutableArray *switchBlockingTasks;
@property (nonatomic, copy) id /* block */ switchCompletionHandler;
@property (nonatomic, retain) NSMutableArray *syncTasks;
@property (nonatomic, retain) NSString *unregistrationReason;
@property (nonatomic) unsigned long long unregistrationStatus;
@property (nonatomic, copy) id /* block */ uploadContentCompletionHandler;
@property (nonatomic, copy) id /* block */ willSwitchCompletionHandler;
@property (nonatomic) unsigned long long willSwitchToUserAddedTaskCount;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;
@property (nonatomic, retain) NSXPCListener *xpcListener;

+ (id)sharedServer;

- (void).cxx_destruct;
- (void)_abortIfWeDoNotHaveAStakeholder;
- (void)_abortIfWeDoNotHaveASyncStakeholder;
- (void)_broadcastReadyToSwitchToUser:(id)arg1;
- (void)_broadcastWillSwitchToUser:(id)arg1;
- (int)_pid;
- (void)_registerStakeholder:(id)arg1;
- (void)_resendXPCMessages;
- (void)_sendXPCMessageToServerOfType:(unsigned long long)arg1;
- (void)_sendXPCMessageToServerOfType:(unsigned long long)arg1 backingObject:(id)arg2;
- (id)_server;
- (void)_setUpUMServerXPCConnectionIfNeeded:(id)arg1;
- (void)_setUpXPCConnectionToUMServerIfNeeded;
- (void)_tearDownConnectionToUMServer;
- (void)addTask:(id)arg1;
- (void)bubbleDidPop;
- (id /* block */)bubblePopHandler;
- (id)contextData;
- (bool)currentlyBroadcastingWillSwitchToUser;
- (bool)didBroadcastUploadContent;
- (bool)didBroadcastWillSwitchToUser;
- (bool)didRegisterStakeholder;
- (bool)didSendTasks;
- (id)init;
- (unsigned int)interruptionRetryCount;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)machServiceName;
- (id)passcodeData;
- (id)personaSpec;
- (id)preferencesDict;
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerCriticalUserSwitchStakeHolder:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;
- (id /* block */)registrationCompletionHandler;
- (void)removeTask:(id)arg1;
- (void)resumeQuotas;
- (void)resumeSync;
- (void)setBubblePopHandler:(id /* block */)arg1;
- (void)setContextData:(id)arg1;
- (void)setCurrentlyBroadcastingWillSwitchToUser:(bool)arg1;
- (void)setDidBroadcastUploadContent:(bool)arg1;
- (void)setDidBroadcastWillSwitchToUser:(bool)arg1;
- (void)setDidRegisterStakeholder:(bool)arg1;
- (void)setDidSendTasks:(bool)arg1;
- (void)setInterruptionRetryCount:(unsigned int)arg1;
- (void)setMachServiceName:(id)arg1;
- (void)setPasscodeData:(id)arg1;
- (void)setPersonaSpec:(id)arg1;
- (void)setPreferencesDict:(id)arg1;
- (void)setRegistrationCompletionHandler:(id /* block */)arg1;
- (void)setStakeholder:(id)arg1;
- (void)setStakeholderType:(unsigned long long)arg1;
- (void)setSuspendQuotasCompletionHandler:(id /* block */)arg1;
- (void)setSwitchBlockingTasks:(id)arg1;
- (void)setSwitchCompletionHandler:(id /* block */)arg1;
- (void)setSyncTasks:(id)arg1;
- (void)setUnregistrationReason:(id)arg1;
- (void)setUnregistrationStatus:(unsigned long long)arg1;
- (void)setUploadContentCompletionHandler:(id /* block */)arg1;
- (void)setWillSwitchCompletionHandler:(id /* block */)arg1;
- (void)setWillSwitchToUserAddedTaskCount:(unsigned long long)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (id)stakeholder;
- (unsigned long long)stakeholderType;
- (id /* block */)suspendQuotasCompletionHandler;
- (void)suspendQuotasWithCompletionHandler:(id /* block */)arg1;
- (id)switchBlockingTasks;
- (id /* block */)switchCompletionHandler;
- (void)switchToLoginUserWithCompletionHandler:(id /* block */)arg1;
- (void)switchToLoginUserWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)syncTasks;
- (void)terminateSyncWithCompletionHandler:(id /* block */)arg1;
- (void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;
- (id)unregistrationReason;
- (unsigned long long)unregistrationStatus;
- (id /* block */)uploadContentCompletionHandler;
- (void)uploadContentWithCompletionHandler:(id /* block */)arg1;
- (void)userInteractionIsEnabled;
- (void)userSwitchTaskListDidUpdate;
- (id /* block */)willSwitchCompletionHandler;
- (void)willSwitchToUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)willSwitchToUserAddedTaskCount;
- (id)xpcConnection;
- (id)xpcListener;

@end
