/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMRemoteURLConnectionMockScheduler : NSObject {
    NSObject<OS_xpc_object> * _connection;
}

- (bool)_connect;
- (id)init;
- (void)scheduleMockResponse:(id)arg1;
- (void)scheduleMockResponse:(id)arg1 forURL:(id)arg2;

@end
