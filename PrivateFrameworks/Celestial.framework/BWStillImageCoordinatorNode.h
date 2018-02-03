/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageCoordinatorNode : BWNode <BWFigVideoCaptureStreamStillImageCaptureDelegate, BWStillImageProcessingStatusDelegate> {
    bool  _active;
    bool  _alwaysRequestsPreBracketedEV0;
    BWFigVideoCaptureDevice * _captureDevice;
    unsigned long long  _captureFlags;
    int  _captureRequestCount;
    int  _captureType;
    int  _clientExpectedImagesOrErrorsForRequest;
    int  _clientReceivedImagesOrErrorsForRequest;
    FigCaptureStillImageSettings * _currentRequestedStillImageCaptureSettings;
    NSArray * _currentResolvedPhotoManifest;
    BWStillImageCaptureSettings * _currentResolvedStillImageCaptureSettings;
    BWNodeInput * _defaultInput;
    BWNodeOutput * _defaultOutput;
    BWNodeOutput * _defaultTelephotoOutput;
    unsigned int  _firedDelegateCallbackFlags;
    BWNodeOutput * _hdrOutput;
    bool  _hdrSupported;
    BWNodeInput * _infraredInput;
    BWNodeOutput * _infraredOutput;
    NSDictionary * _inputIndexToPortType;
    bool  _oisSupported;
    NSDictionary * _portTypeToInput;
    int  _prepareRequestCount;
    NSMutableDictionary * _receivedImagesOrErrorsForRequestByPortType;
    bool  _receivedQuadraHighResError;
    NSMutableArray * _requestQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _requestQueueLock;
    BWNodeOutput * _sisOutput;
    bool  _sisSupported;
    FigStateMachine * _stateMachine;
    <BWStillImageCaptureStatusDelegate> * _stillImageCaptureStatusDelegate;
    NSObject<OS_dispatch_group> * _stillImageDispatchGroup;
    NSObject<OS_dispatch_queue> * _stillImageDispatchQueue;
    bool  _stillImageGraphSupportsMultipleInflightCaptures;
    BWNodeInput * _telephotoInput;
    bool  _usesHDRPreBracketFrameForErrorRecovery;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) BWNodeOutput *defaultOutput;
@property (nonatomic, readonly) BWNodeOutput *defaultTelephotoOutput;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BWNodeOutput *hdrOutput;
@property (nonatomic, readonly) BWNodeOutput *infraredOutput;
@property (nonatomic, readonly) BWNodeOutput *sisOutput;
@property (nonatomic) <BWStillImageCaptureStatusDelegate> *stillImageCaptureStatusDelegate;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_addExifOrientationToSampleBufferMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_beginCapture;
- (void)_beginInitiatingCapture;
- (void)_beginPreparingCapture;
- (void)_beginResolvingCapture;
- (int)_captureTypeForSettings:(id)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; unsigned int x15; float x16; unsigned char x17; double x18; int x19; int x20; int x21; float x22; float x23; int x24; int x25; unsigned char x26; int x27; float x28; float x29; int x30; int x31; int x32; int x33; long long x34; }*)arg2 captureFlags:(unsigned long long*)arg3;
- (id)_clientBracketSettingsWithCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; unsigned int x15; float x16; unsigned char x17; double x18; int x19; int x20; int x21; float x22; float x23; int x24; int x25; unsigned char x26; int x27; float x28; float x29; int x30; int x31; int x32; int x33; long long x34; }*)arg1 stillImageSettings:(id)arg2;
- (void)_completeRequestWithStatus:(int)arg1;
- (void)_configureCurrentCaptureRequestStateForFigCaptureStillImageSettings;
- (void)_didCaptureStillImage;
- (void)_didResolveReferenceFrameBracketedCaptureSequenceNumber:(id)arg1;
- (void)_didResolveStillImagePTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 isPreBracketedEV0:(bool)arg2;
- (int)_enqueueRequestWithSettings:(id)arg1 serviceRequestsIfNecessary:(bool)arg2;
- (void)_flushStillImageRequestWithError:(int)arg1;
- (id)_initWithCaptureDevice:(id)arg1 inputPortTypes:(id)arg2 hdrSupported:(bool)arg3 sisSupported:(bool)arg4 oisSupported:(bool)arg5 shareOutputForSingleStillSISAndOIS:(bool)arg6 shareOutputsForSingleStillsAndHDR:(bool)arg7 allStateTransitionsHandler:(id /* block */)arg8;
- (id)_outputForMultiframeStereoFusionCaptureWithNodeInput:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 metadataDictionary:(id)arg3;
- (id)_outputForNodeInput:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 metadataDictionary:(id)arg3;
- (id)_resolvePhotoManifest;
- (void)_serviceNextRequest;
- (void)_setupStateMachineWithAllStateTransitionsHandler:(id /* block */)arg1;
- (id)_stateMachine;
- (id)_stillImageDispatchQueue;
- (void)_unpackNextRequest;
- (void)_willBeginCapture;
- (void)_willCaptureStillImage;
- (bool)alwaysRequestsPreBracketedEV0;
- (int)captureStillImageNowWithSettings:(id)arg1;
- (void)captureStream:(id)arg1 didCapturePreBracketedEV0ImageWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)captureStream:(id)arg1 didCompleteStillImageCaptureWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 referenceFrameBracketedCaptureSequenceNumber:(id)arg3;
- (void)captureStream:(id)arg1 stillImageCaptureError:(int)arg2;
- (void)captureStreamWillBeginStillImageCapture:(id)arg1;
- (void)clientReceivedPayloadForSettings:(id)arg1 status:(int)arg2 clientIsMidStillImageGraph:(bool)arg3;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (id)defaultOutput;
- (id)defaultTelephotoOutput;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)hdrOutput;
- (id)infraredOutput;
- (id)initWithCaptureDevice:(id)arg1 inputPortTypes:(id)arg2 hdrSupported:(bool)arg3 sisSupported:(bool)arg4 oisSupported:(bool)arg5 shareOutputForSingleStillSISAndOIS:(bool)arg6 shareOutputsForSingleStillsAndHDR:(bool)arg7;
- (int)initiateStillImageCaptureNowWithSettings:(id)arg1;
- (id)inputForPortType:(id)arg1;
- (void)node:(id)arg1 didSelectReferenceFrameBracketedCaptureSequenceNumber:(id)arg2 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)nodeDidCaptureStillImage:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (int)prepareStillImageCaptureNowWithSettings:(id)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAlwaysRequestsPreBracketedEV0:(bool)arg1;
- (void)setStillImageCaptureStatusDelegate:(id)arg1;
- (void)setStillImageGraphSupportsMultipleInflightCaptures:(bool)arg1;
- (void)setUsesHDRPreBracketFrameForErrorRecovery:(bool)arg1;
- (id)sisOutput;
- (id)stillImageCaptureStatusDelegate;
- (bool)stillImageGraphSupportsMultipleInflightCaptures;
- (bool)usesHDRPreBracketFrameForErrorRecovery;
- (void)willStopGraph:(bool)arg1;
- (int)worstCaseMaxBracketedCaptureBufferCountForPreparedSettings:(id)arg1;

@end
