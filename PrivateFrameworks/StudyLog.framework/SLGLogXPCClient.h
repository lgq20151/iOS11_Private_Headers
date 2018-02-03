/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
 */

@interface SLGLogXPCClient : NSObject <SLGLogClientProtocol> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (void)queryServer:(id /* block */)arg1 errorHandler:(id /* block */)arg2;

@end
