/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface _RWIRelayConnectionToApplication : NSObject {
    NSObject<OS_xpc_object> * _connection;
    <_RWIRelayConnectionToApplicationDelegate> * _delegate;
    NSString * _tag;
}

@property (nonatomic, readonly) bool available;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (nonatomic) <_RWIRelayConnectionToApplicationDelegate> *delegate;
@property (nonatomic, copy) NSString *tag;

- (void).cxx_destruct;
- (id)_deserializeMessage:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (bool)available;
- (void)close;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)initWithConnection:(id)arg1;
- (void)sendMessage:(id)arg1 userInfo:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setTag:(id)arg1;
- (id)tag;

@end