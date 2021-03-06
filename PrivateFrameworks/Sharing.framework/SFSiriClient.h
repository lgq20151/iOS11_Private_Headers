/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFSiriClient : NSObject <SVXClientSessionServiceDelegate, VSSpeechSynthesizerDelegate> {
    SFSiriRequest * _currentRequest;
    NSObject<OS_dispatch_source> * _currentTimer;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    unsigned int  _invalidateFlags;
    NSString * _languageCode;
    struct NSMutableArray { Class x1; } * _requests;
    SVXDeviceSetupContext * _siriDeviceSetupContext;
    SVXClientServiceManager * _siriDeviceSetupManager;
    <SVXClientDeviceServicing> * _siriDeviceSetupService;
    id /* block */  _siriDialogHandler;
    SVXClientServiceManager * _siriServiceManager;
    VSSpeechSynthesizer * _speechSynthesizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ siriDialogHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_completeAllRequestsWithError:(id)arg1;
- (void)_completeRequest:(id)arg1 error:(id)arg2;
- (void)_deviceSetupEnd;
- (void)_invalidate;
- (void)_processQueuedRequests;
- (void)_speakText:(id)arg1 flags:(unsigned int)arg2 rate:(double)arg3 delay:(double)arg4 startHandler:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)activate;
- (void)deviceSetupBegin;
- (void)deviceSetupEnd;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (void)sessionService:(id)arg1 didChangeStateFrom:(long long)arg2 to:(long long)arg3;
- (void)sessionService:(id)arg1 didNotStartSoundWithID:(long long)arg2 error:(id)arg3;
- (void)sessionService:(id)arg1 didStartSoundWithID:(long long)arg2;
- (void)sessionService:(id)arg1 didStopSoundWithID:(long long)arg2 error:(id)arg3;
- (void)sessionService:(id)arg1 willChangeStateFrom:(long long)arg2 to:(long long)arg3;
- (void)sessionService:(id)arg1 willPresentFeedbackWithDialogIdentifier:(id)arg2;
- (void)sessionService:(id)arg1 willResignActiveWithOptions:(unsigned long long)arg2 duration:(double)arg3;
- (void)sessionService:(id)arg1 willStartSoundWithID:(long long)arg2;
- (void)sessionServiceDidResignActive:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setSiriDialogHandler:(id /* block */)arg1;
- (id /* block */)siriDialogHandler;
- (void)speakDeviceSetupWelcomePhaseWithCompletion:(id /* block */)arg1;
- (void)speakText:(id)arg1 completion:(id /* block */)arg2;
- (void)speakText:(id)arg1 flags:(unsigned int)arg2 rate:(double)arg3 delay:(double)arg4 startHandler:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)speakText:(id)arg1 rate:(double)arg2 completion:(id /* block */)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 withError2:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 withError:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error2:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 withRequest:(id)arg2 didReceiveTimingInfo2:(id)arg3;
- (void)speechSynthesizer:(id)arg1 withRequest:(id)arg2 didReceiveTimingInfo:(id)arg3;
- (void)startDelayedRequest:(id)arg1;
- (void)stopSpeaking;

@end
