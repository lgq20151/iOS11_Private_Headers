/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {
    NSXPCConnection * _connection;
    bool  _hasConfiguredRemoteAccountStore;
    bool  _notificationsEnabled;
    NSString * _spoofedBundleID;
    bool  _xpcConnectionHasBeenInvalidated;
}

@property (nonatomic) bool notificationsEnabled;
@property (nonatomic, copy) NSString *spoofedBundleID;

- (void).cxx_destruct;
- (void)_configureConnection;
- (void)_configureRemoteAccountStoreIfNecessary;
- (id)_connection;
- (void)connect;
- (void)disconnect;
- (id)initWithXPCConnection:(id)arg1;
- (bool)notificationsEnabled;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setSpoofedBundleID:(id)arg1;
- (id)spoofedBundleID;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
