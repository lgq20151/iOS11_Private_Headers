/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDQuickSwitchController : NSObject <IDSServiceDelegate, PSYSyncCoordinatorDelegate> {
    IDSService * _quickSwitchIDSService;
    PSYSyncCoordinator * _syncCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSService *quickSwitchIDSService;
@property (readonly) Class superclass;
@property (nonatomic, retain) PSYSyncCoordinator *syncCoordinator;

+ (id)sharedInstance;

- (void)_cleanUpTemporaryFiles;
- (void)_compressFileAtPath:(id)arg1 toPath:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_decompressFileAtPath:(id)arg1 toPath:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)_defaultPairedDevice;
- (void)_deleteFileAtPath:(id)arg1;
- (long long)_getCurrentDBVersion;
- (id)_getDowngradedDBPath;
- (unsigned long long)_getFileSizeAtPath:(id)arg1;
- (id)_getTempDBPath;
- (id)_getTempRecentsPath;
- (id)_getTruncatedDBPath;
- (id)_getZippedDBPath;
- (id)_getZippedRecentsPath;
- (void)_handleDBVersionResponse:(id)arg1;
- (void)_handleIncomingDB:(id)arg1;
- (void)_handleIncomingRecents:(id)arg1;
- (void)_handleQuickSwitchCompleted:(id)arg1;
- (void)_handleQuickSwitchInitiateRequest;
- (void)_handleRecentsRequest;
- (void)_initiateQuickSwitch;
- (bool)_isPairedDeviceInProxyMode;
- (void)_notifyPSYDataSent;
- (void)_notifyPSYWithResult:(bool)arg1;
- (void)_quickSwitchCompleted:(bool)arg1;
- (void)_sendDBVersionResponse:(long long)arg1;
- (bool)_sendIDSFile:(id)arg1 withCommand:(long long)arg2;
- (bool)_sendIDSMessage:(id)arg1;
- (void)_sendQuickSwitchCompletedWithResult:(bool)arg1;
- (void)_sendRecentsRequest;
- (bool)_sendZippedFileAtPath:(id)arg1 withCommand:(long long)arg2;
- (bool)_supportsQuickSwitchWithPairedDevice;
- (bool)_truncateDBToPath:(id)arg1;
- (void)dealloc;
- (void)dummyMethod;
- (id)init;
- (id)quickSwitchIDSService;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)setQuickSwitchIDSService:(id)arg1;
- (void)setSyncCoordinator:(id)arg1;
- (id)syncCoordinator;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;

@end