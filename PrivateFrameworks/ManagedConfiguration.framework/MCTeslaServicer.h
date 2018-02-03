/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCTeslaServicer : NSObject {
    id /* block */  _callback;
    NSXPCConnection * _connection;
    bool  _isBusy;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) bool isBusy;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)connection;
- (id)connectionError;
- (void)dealloc;
- (void)fetchConfigurationWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (bool)isBusy;
- (void)provisionallyEnrollWithNonce:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)requestDidFailWithError:(id)arg1;
- (void)setCallback:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setIsBusy:(bool)arg1;
- (void)unenrollWithCompletionBlock:(id /* block */)arg1;

@end
