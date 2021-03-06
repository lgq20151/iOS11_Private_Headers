/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryCommunications.framework/AccessoryCommunications
 */

@interface ACCCommunicationsCenter : NSObject <ACCCommunicationsXPCClientProtocol> {
    NSMutableDictionary * _cachedCommStatus;
    <ACCCommunicationsCenterCallControlsDelegate> * _callControlsDelegate;
    <ACCCommunicationsCenterCallStateDelegate> * _callStateDelegate;
    <ACCCommunicationsCenterCommunicationsDelegate> * _communicationsDelegate;
    <ACCCommunicationsCenterListUpdatesDelegate> * _listUpdatesDelegate;
    <ACCCommunicationsXPCServerProtocol> * _remoteObject;
    NSXPCConnection * _serverConnection;
    NSSet * _subscriberList;
}

@property (retain) NSMutableDictionary *cachedCommStatus;
@property (nonatomic) <ACCCommunicationsCenterCallControlsDelegate> *callControlsDelegate;
@property (nonatomic) <ACCCommunicationsCenterCallStateDelegate> *callStateDelegate;
@property (nonatomic) <ACCCommunicationsCenterCommunicationsDelegate> *communicationsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <ACCCommunicationsCenterListUpdatesDelegate> *listUpdatesDelegate;
@property (nonatomic, retain) <ACCCommunicationsXPCServerProtocol> *remoteObject;
@property (nonatomic, retain) NSXPCConnection *serverConnection;
@property (nonatomic, retain) NSSet *subscriberList;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acceptCallWithAction:(int)arg1 callUUID:(id)arg2;
- (id)cachedCommStatus;
- (id)callControlsDelegate;
- (id)callStateDelegate;
- (void)callStateDidChange:(id)arg1;
- (void)commStatusDidChange:(id)arg1;
- (id)communicationsDelegate;
- (void)connectToServer;
- (void)dealloc;
- (void)endAllCalls;
- (void)endCallWithAction:(int)arg1 callUUID:(id)arg2;
- (id)init;
- (id)initWithCallStateDelegate:(id)arg1 andCommunicationsDelegate:(id)arg2 andCallControlsDelegate:(id)arg3 andListUpdatesDelegate:(id)arg4;
- (void)initiateCallToDestination:(id)arg1 withService:(int)arg2 addressBookID:(id)arg3;
- (void)initiateCallToVoicemail;
- (void)initiateRedial;
- (id)listUpdatesDelegate;
- (void)mergeCalls;
- (id)remoteObject;
- (void)sendDTMF:(int)arg1 forCallWithUUID:(id)arg2;
- (id)serverConnection;
- (void)setCachedCommStatus:(id)arg1;
- (void)setCallControlsDelegate:(id)arg1;
- (void)setCallStateDelegate:(id)arg1;
- (void)setCommunicationsDelegate:(id)arg1;
- (void)setListUpdatesDelegate:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)setSubscriberList:(id)arg1;
- (id)subscriberList;
- (void)swapCalls;
- (void)triggerCallStateUpdates;
- (void)triggerCommunicationsUpdate;
- (void)updateHoldStatus:(bool)arg1 forCallWithUUID:(id)arg2;
- (void)updateMuteStatus:(bool)arg1;
- (void)updateSubscriberList:(id)arg1 withReply:(id /* block */)arg2;

@end
