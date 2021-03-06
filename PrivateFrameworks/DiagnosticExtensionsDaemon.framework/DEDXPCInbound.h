/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDXPCInbound : NSObject <DEDXPCProtocol> {
    DEDController * _delegate;
    NSObject<OS_os_log> * _log;
}

@property (readonly, copy) NSString *debugDescription;
@property DEDController *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;
- (void)cancelSession:(id)arg1;
- (void)commitSession:(id)arg1;
- (id)delegate;
- (void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;
- (void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;
- (void)didCancelSession:(id)arg1;
- (void)didCommitSession:(id)arg1;
- (void)didDiscoverDevices:(id)arg1;
- (void)didStartBugSessionWithInfo:(id)arg1;
- (void)discoverAllAvailableDevices;
- (void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;
- (void)getSessionStatusWithSession:(id)arg1;
- (void)gotDeviceUpdate:(id)arg1;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;
- (id)initWithDelegate:(id)arg1;
- (void)listAvailableExtensionsForSession:(id)arg1;
- (id)log;
- (void)ping;
- (void)pingSession:(id)arg1;
- (void)pong;
- (void)pongSession:(id)arg1;
- (void)promptPINForDevice:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLog:(id)arg1;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)startPairSetupForDevice:(id)arg1;
- (void)stopDeviceDiscovery;
- (void)successPINForDevice:(id)arg1;
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
- (void)tryPIN:(id)arg1 forDevice:(id)arg2;
- (void)uploadProgress:(unsigned long long)arg1 total:(long long)arg2 session:(id)arg3;

@end
