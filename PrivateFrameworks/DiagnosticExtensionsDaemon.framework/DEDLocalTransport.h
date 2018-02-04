/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDLocalTransport : NSObject <DEDClientProtocol, DEDWorkerProtocol> {
    <DEDClientProtocol> * _clientDelegate;
    NSObject<OS_os_log> * _log;
    <DEDWorkerProtocol> * _workerDelegate;
}

@property <DEDClientProtocol> *clientDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;
@property <DEDWorkerProtocol> *workerDelegate;

- (void).cxx_destruct;
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;
- (void)cancelSession:(id)arg1;
- (id)clientDelegate;
- (void)commitSession:(id)arg1;
- (id)description;
- (void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;
- (void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;
- (void)didCancelSession:(id)arg1;
- (void)didCommitSession:(id)arg1;
- (void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;
- (void)getSessionStatusWithSession:(id)arg1;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;
- (id)initWithClientDelegate:(id)arg1;
- (id)initWithWorkerDelegate:(id)arg1;
- (void)listAvailableExtensionsForSession:(id)arg1;
- (id)log;
- (void)pingSession:(id)arg1;
- (void)pongSession:(id)arg1;
- (void)setClientDelegate:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setWorkerDelegate:(id)arg1;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
- (long long)transportType;
- (void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 session:(id)arg3;
- (id)workerDelegate;

@end