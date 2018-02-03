/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSCardItemsController : NSObject <SBSCardItemsControllerRemoteInterface> {
    bool  _connected;
    NSXPCConnection * _connection;
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connectToServerIfNecessary;
- (void)_invalidateConnection;
- (void)_noteConnectionDropped;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)getCardItemsWithHandler:(id /* block */)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)setCardItems:(id)arg1;

@end
