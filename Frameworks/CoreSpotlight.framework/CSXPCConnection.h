/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSXPCConnection : NSObject {
    NSObject<OS_xpc_object> * _connection;
    bool  _listener;
    NSString * _machServiceName;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic, readonly) bool listener;
@property (nonatomic, readonly) NSString *machServiceName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)appIdentifierFromTeamAppTuple:(id)arg1;
+ (id)copyNSStringArrayFromXPCArray:(id)arg1;
+ (id)copyNSStringForKey:(const char *)arg1 fromXPCDictionary:(id)arg2;
+ (id)copyNSStringSetFromXPCArray:(id)arg1;
+ (id)dataWrapperForKey:(const char *)arg1 sizeKey:(const char *)arg2 fromXPCDictionary:(id)arg3;
+ (bool)dictionary:(id)arg1 setSharedMemory:(void*)arg2 forKey:(const char *)arg3 size:(unsigned long long)arg4 forSizeKey:(const char *)arg5;
+ (void)dictionary:(id)arg1 setStringArray:(id)arg2 forKey:(const char *)arg3;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_handleMessage:(id)arg1 type:(struct _xpc_type_s { }*)arg2 connection:(id)arg3;
- (void)_lostClientConnection:(id)arg1 error:(id)arg2;
- (bool)allowClientConnection:(id)arg1;
- (id)connection;
- (bool)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (void)handleError:(id)arg1;
- (bool)handleMessage:(id)arg1 type:(struct _xpc_type_s { }*)arg2 connection:(id)arg3;
- (void)handleReply:(id)arg1;
- (id)initListenerWithMachServiceName:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (bool)listener;
- (bool)lostClientConnection:(id)arg1 error:(id)arg2;
- (id)machServiceName;
- (id)queue;
- (void)sendMessageAsync:(id)arg1;
- (void)sendMessageAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)startListener;

@end
