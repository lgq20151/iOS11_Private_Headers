/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAppMonitor.framework/NanoAppMonitor
 */

@interface NanoAppSyncService : NSObject <IDSServiceDelegate> {
    IDSService * _idsService;
    bool  _nonWakingMessage;
    NSMutableDictionary * _outstandingRequests;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSService *idsService;
@property bool nonWakingMessage;
@property (nonatomic, retain) NSMutableDictionary *outstandingRequests;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_queue_getCompletionHandlerForOutstandingRequest:(id)arg1;
- (void)_queue_removeCompletionHandlerForOutstandingRequest:(id)arg1;
- (void)_queue_setCompletionHandler:(id /* block */)arg1 forOutstandingRequst:(id)arg2;
- (id)idsService;
- (id)init;
- (bool)nonWakingMessage;
- (id)outstandingRequests;
- (id)queue;
- (void)sendRecentlyUsedApps:(id)arg1 completion:(id /* block */)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)setIdsService:(id)arg1;
- (void)setNonWakingMessage:(bool)arg1;
- (void)setOutstandingRequests:(id)arg1;
- (void)setQueue:(id)arg1;

@end