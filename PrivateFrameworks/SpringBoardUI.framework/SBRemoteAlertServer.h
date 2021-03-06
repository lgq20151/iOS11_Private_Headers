/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBRemoteAlertServer : FBSystemServiceFacility <SBRemoteAlertControllerDelegate> {
    NSObject<OS_dispatch_queue> * _queue;
    Class  _remoteAlertControllerClass;
    NSMutableDictionary * _tokenPortToClientsMap;
    NSMutableDictionary * _tokenPortToControllerMap;
    NSMutableDictionary * _tokenPortToToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_queue_addControllerWithDefinition:(id)arg1 token:(id)arg2 context:(id)arg3 forClient:(id)arg4;
- (void)_queue_notifyClients:(id)arg1 remoteAlertForToken:(id)arg2 didInvalidateWithReason:(long long)arg3 underlyingError:(id)arg4;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 clientAuthenticator:(id)arg3;
- (id)initWithRemoteAlertControllerClass:(Class)arg1;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (id)prerequisiteMilestones;
- (void)queue_remoteAlertController:(id)arg1 didInvalidateWithReason:(long long)arg2 underlyingError:(id)arg3;
- (void)queue_remoteAlertControllerDidChangeActivationState:(id)arg1;

@end
