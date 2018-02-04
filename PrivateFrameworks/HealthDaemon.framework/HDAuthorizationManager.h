/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAuthorizationManager : NSObject <HDDiagnosticObject> {
    NSMutableDictionary * _activeObjectPromptSessionsBySessionIdentifier;
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSMutableDictionary * _openAppCompletionHandlersByBundleID;
    NSMutableDictionary * _pendingObjectAuthorizationRequestsByBundleIdentifier;
    NSMutableArray * _pendingRequestGroups;
    HDProfile * _profile;
    _HDAuthorizationRequestGroup * _promptingRequestGroup;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _remoteAuthorizationRecordsByBundleID;
    NSMutableDictionary * _requestGroupsByBundleIdentifier;
    double  _requestSessionTimeout;
    bool  _suppressAuthorizationPrompt;
}

@property (nonatomic, retain) NSMutableDictionary *activeObjectPromptSessionsBySessionIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *pendingObjectAuthorizationRequestsByBundleIdentifier;
@property (nonatomic, retain) NSMutableArray *pendingRequestGroups;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) _HDAuthorizationRequestGroup *promptingRequestGroup;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *requestGroupsByBundleIdentifier;
@property (nonatomic) double requestSessionTimeout;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressAuthorizationPrompt;

- (void).cxx_destruct;
- (bool)_needsAuthorizationForRequestGroup:(id)arg1 overwriteAuthorizationStatus:(bool)arg2 error:(id*)arg3;
- (void)_performNanoSyncImmediatelyWithReason:(id)arg1;
- (id)_queue_activePromptSessionForBundleIdentifier:(id)arg1;
- (void)_queue_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_cancelAuthorizationRequestsWithIdentifiers:(id)arg1;
- (void)_queue_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)_queue_enqueueAuthorizationRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 writeTypes:(id)arg3 readTypes:(id)arg4 authorizationNeededHandler:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)_queue_finishRequestGroup:(id)arg1 error:(id)arg2;
- (void)_queue_handleNextAuthorizationRequestGroup;
- (void)_queue_resetAllAuthorizationRecordsWithCompletion:(id /* block */)arg1;
- (bool)_queue_resetAuthorizationRecordsForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (void)_queue_setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)activeObjectPromptSessionsBySessionIdentifier;
- (void)applicationsUninstalledNotification:(id)arg1;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelAuthorizationRequestsWithIdentifiers:(id)arg1;
- (id)completionQueue;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (id)enqueueAuthorizationRequestForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 authorizationNeededHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)enqueueObjectAuthorizationRequestForBundleIdentifier:(id)arg1 samples:(id)arg2 promptIfNeeded:(bool)arg3 authorizationNeededHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)handleAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)handleObjectAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)initWithProfile:(id)arg1;
- (void)openAppForAuthorization:(id)arg1 sessionIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)pendingObjectAuthorizationRequestsByBundleIdentifier;
- (id)pendingRequestGroups;
- (id)profile;
- (id)promptingRequestGroup;
- (id)queue;
- (id)requestGroupsByBundleIdentifier;
- (void)requestRemoteAuthorizationForRequestRecord:(id)arg1 requestSentHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (double)requestSessionTimeout;
- (void)resetAllAuthorizationRecordsWithCompletion:(id /* block */)arg1;
- (void)setActiveObjectPromptSessionsBySessionIdentifier:(id)arg1;
- (void)setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setCompletionQueue:(id)arg1;
- (void)setPendingObjectAuthorizationRequestsByBundleIdentifier:(id)arg1;
- (void)setPendingRequestGroups:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setPromptingRequestGroup:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequestGroupsByBundleIdentifier:(id)arg1;
- (void)setRequestSessionTimeout:(double)arg1;
- (void)setSuppressAuthorizationPrompt:(bool)arg1;
- (bool)suppressAuthorizationPrompt;

@end