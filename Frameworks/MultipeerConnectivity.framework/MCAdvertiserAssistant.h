/* made by EzioChiu
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCAdvertiserAssistant : NSObject <MCNearbyServiceAdvertiserDelegate, UIAlertViewDelegate> {
    MCNearbyServiceAdvertiser * _advertiser;
    MCAlertController * _alertController;
    NSString * _appName;
    <MCAdvertiserAssistantDelegate> * _delegate;
    NSDictionary * _discoveryInfo;
    NSBundle * _frameworkBundle;
    id /* block */  _invitationHandlerForPresentedAlert;
    NSMutableArray * _invitationsBuffer;
    bool  _isAdvertising;
    MCPeerID * _myPeerID;
    NSString * _serviceType;
    MCSession * _session;
    bool  _wasAdvertising;
}

@property (nonatomic, retain) MCNearbyServiceAdvertiser *advertiser;
@property (nonatomic, retain) MCAlertController *alertController;
@property (nonatomic, readonly, copy) NSString *appName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MCAdvertiserAssistantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *discoveryInfo;
@property (nonatomic, retain) NSBundle *frameworkBundle;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invitationHandlerForPresentedAlert;
@property (nonatomic, retain) NSMutableArray *invitationsBuffer;
@property (nonatomic) bool isAdvertising;
@property (nonatomic, copy) MCPeerID *myPeerID;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, retain) MCSession *session;
@property (readonly) Class superclass;
@property (nonatomic) bool wasAdvertising;

- (id)advertiser;
- (void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(id /* block */)arg4;
- (id)alertController;
- (id)appName;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)discoveryInfo;
- (id)frameworkBundle;
- (void)handleUserInvitationDecision:(bool)arg1;
- (id)init;
- (id)initWithServiceType:(id)arg1 discoveryInfo:(id)arg2 session:(id)arg3;
- (id /* block */)invitationHandlerForPresentedAlert;
- (id)invitationsBuffer;
- (bool)isAdvertising;
- (id)myPeerID;
- (void)presentNextInvitation;
- (id)serviceType;
- (id)session;
- (void)setAdvertiser:(id)arg1;
- (void)setAlertController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryInfo:(id)arg1;
- (void)setFrameworkBundle:(id)arg1;
- (void)setInvitationHandlerForPresentedAlert:(id /* block */)arg1;
- (void)setInvitationsBuffer:(id)arg1;
- (void)setIsAdvertising:(bool)arg1;
- (void)setMyPeerID:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setWasAdvertising:(bool)arg1;
- (void)start;
- (void)stop;
- (bool)wasAdvertising;

@end