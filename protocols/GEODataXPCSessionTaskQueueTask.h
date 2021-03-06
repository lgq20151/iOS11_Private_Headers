/* made by EzioChiu.
 */

@protocol GEODataXPCSessionTaskQueueTask

@required

- (NSObject<OS_os_activity> *)activity;
- (bool)isCancelled;
- (void)processResult:(int)arg1 xpcReply:(NSObject<OS_xpc_object> *)arg2;
- (NSObject<OS_dispatch_queue> *)sessionIsolation;
- (unsigned int)taskQueue;
- (float)taskQueuePriority;
- (NSObject<OS_xpc_object> *)xpcRequest;

@end
