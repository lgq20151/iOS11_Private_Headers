/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAExecutive : NSObject <NSXPCListenerDelegate, PHPhotoLibraryAvailabilityObserver> {
    NSObject<OS_xpc_object> * _backgroundAnalysisActivity;
    bool  _backgroundAnalysisActivityTriggered;
    NSObject<OS_dispatch_source> * _backgroundAnalysisMonitorTimer;
    NSMutableSet * _clients;
    long long  _countOfCoordinatorsRunningBackgroundAnalysis;
    NSObject<OS_dispatch_queue> * _executiveStateQueue;
    bool  _isPhotoAnalysisAgent;
    NSMutableDictionary * _managersByLibraryPath;
    PHAPhotoLibraryList * _photoLibraryList;
    PHASleepWakeMonitor * _sleepWakeMonitor;
    unsigned char  _state;
}

@property (retain) NSObject<OS_xpc_object> *backgroundAnalysisActivity;
@property (retain) NSObject<OS_dispatch_source> *backgroundAnalysisMonitorTimer;
@property (retain) NSMutableSet *clients;
@property long long countOfCoordinatorsRunningBackgroundAnalysis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSObject<OS_dispatch_queue> *executiveStateQueue;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *managersByLibraryPath;
@property (retain) PHAPhotoLibraryList *photoLibraryList;
@property (retain) PHASleepWakeMonitor *sleepWakeMonitor;
@property unsigned char state;
@property (readonly) Class superclass;

+ (void)registerEmptyBackgroundActivity;

- (void).cxx_destruct;
- (void)_backgroundActivityDidBegin;
- (void)_cleanupAfterBackgroundActivityFinishedForDefer:(bool)arg1 skipActivityStateCheck:(bool)arg2 message:(id)arg3;
- (void)_dispatchAsyncToQueue:(id)arg1 withTransactionBlock:(id /* block */)arg2;
- (void)_installBackgroundAnalysisMonitor;
- (void)_localeDidChangeNotification:(id)arg1;
- (bool)_photoAnalysisEnabled;
- (void)_registerBackgroundActivity;
- (void)_stopAllBackgroundAnalysisWithCompletion:(id /* block */)arg1 queue:(id)arg2;
- (id)_urlForSystemPhotoLibrary;
- (id)backgroundAnalysisActivity;
- (id)backgroundAnalysisMonitorTimer;
- (void)checkQuiescenceForManager:(id)arg1;
- (id)clientInfoForManager:(id)arg1;
- (id)clients;
- (long long)countOfCoordinatorsRunningBackgroundAnalysis;
- (void)dealloc;
- (void)dispatchAsyncToExecutiveStateQueue:(id /* block */)arg1;
- (void)dumpAnalysisStatusWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)dumpStatusToLog;
- (id)executiveStateQueue;
- (bool)hasConnectedClientsForManager:(id)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)managerForPhotoLibraryURL:(id)arg1;
- (id)managersByLibraryPath;
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;
- (id)photoLibraryList;
- (void)removeClientHandler:(id)arg1;
- (void)setBackgroundAnalysisActivity:(id)arg1;
- (void)setBackgroundAnalysisMonitorTimer:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setCountOfCoordinatorsRunningBackgroundAnalysis:(long long)arg1;
- (void)setExecutiveStateQueue:(id)arg1;
- (void)setManagersByLibraryPath:(id)arg1;
- (void)setPhotoLibraryList:(id)arg1;
- (void)setSleepWakeMonitor:(id)arg1;
- (void)setState:(unsigned char)arg1;
- (void)shutdown;
- (id)sleepWakeMonitor;
- (void)startup;
- (unsigned char)state;
- (id)statusAsDictionary;
- (void)stopBackgroundActivityForManager:(id)arg1;
- (void)terminateManagerForPhotoLibraryURL:(id)arg1;
- (void)terminateManagerIfQuiescentAndNoConnectedClients:(id)arg1;
- (void)triggerBackgroundActivity;

@end
