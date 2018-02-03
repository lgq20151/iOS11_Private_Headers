/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTSubscriber : NSObject {
    struct vector<dispatch::block<void (^)(NSDictionary *)>, std::__1::allocator<dispatch::block<void (^)(NSDictionary *)> > >="__begin_"^{block<void (^)(NSDictionary *)> {}  _authCallbacks;
    struct __CTServerConnection { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct dispatch_queue_s {} *x2; struct CTServerState {} *x3; unsigned char x4; unsigned char x5; unsigned int x6; struct _xpc_connection_s {} *x7; unsigned char x8; unsigned char x9; } * _server;
}

@property (nonatomic, readonly, retain) NSData *carrierToken;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)authenticateWithInfo:(id)arg1 handleResult:(id /* block */)arg2;
- (id)carrierToken;
- (void)dealloc;
- (void)handleAuthCallback:(id)arg1;
- (id)init;
- (bool)refreshCarrierToken;

@end
