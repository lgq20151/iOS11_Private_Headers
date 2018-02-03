/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcess : NSObject <BKSProcessClientDelegate, BSDescriptionProviding> {
    bool  _bootstrapped;
    NSString * _bundleID;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    BKSProcessClient * _client;
    bool  _connectedToExternalAccessories;
    <BKSProcessDelegate> * _delegate;
    BSProcessHandle * _handle;
    NSString * _jobLabel;
    BKSLaunchdJobSpecification * _jobSpec;
    BKSProcessExitContext * _lastExitContext;
    bool  _nowPlayingWithAudio;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _recordingAudio;
    long long  _taskState;
    long long  _terminationReason;
    long long  _visibility;
    bool  _workspaceLocked;
}

@property (nonatomic, readonly) double backgroundTimeRemaining;
@property (nonatomic) bool connectedToExternalAccessories;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BKSProcessDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) BSProcessHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) BKSProcessExitContext *lastExitContext;
@property (nonatomic) bool nowPlayingWithAudio;
@property (nonatomic) bool recordingAudio;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long taskState;
@property (nonatomic) long long terminationReason;
@property (nonatomic) long long visibility;
@property (nonatomic) bool workspaceLocked;

+ (double)backgroundTimeRemaining;
+ (id)busyExtensionInstances:(id)arg1;
+ (id)currentProcess;

- (void).cxx_destruct;
- (bool)_bootstrapWithError:(out id*)arg1;
- (void)_sendMessageType:(int)arg1 withMessage:(id /* block */)arg2;
- (void)_sendMessageType:(int)arg1 withMessage:(id /* block */)arg2 withReplyHandler:(id /* block */)arg3 waitForReply:(bool)arg4;
- (double)backgroundTimeRemaining;
- (bool)bootstrapWithProcessHandle:(id)arg1 error:(out id*)arg2;
- (bool)bootstrapWithSpecification:(id)arg1 error:(out id*)arg2;
- (void)client:(id)arg1 processDidChangeDebuggingState:(bool)arg2;
- (void)client:(id)arg1 processDidChangeTaskState:(long long)arg2;
- (void)client:(id)arg1 processDidExitWithContext:(id)arg2 completion:(id /* block */)arg3;
- (bool)connectedToExternalAccessories;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)handle;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithPID:(int)arg1 bundlePath:(id)arg2 visibility:(long long)arg3 workspaceLocked:(bool)arg4 queue:(id)arg5;
- (void)invalidate;
- (id)lastExitContext;
- (bool)nowPlayingWithAudio;
- (void)processAssertionExpirationImminentForClient:(id)arg1;
- (bool)recordingAudio;
- (void)setConnectedToExternalAccessories:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNowPlayingWithAudio:(bool)arg1;
- (void)setRecordingAudio:(bool)arg1;
- (void)setTerminationReason:(long long)arg1;
- (void)setVisibility:(long long)arg1;
- (void)setWorkspaceLocked:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)taskState;
- (long long)terminationReason;
- (long long)visibility;
- (bool)workspaceLocked;

@end
