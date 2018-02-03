/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageDualPhotoFacePropagatorNode : BWNode {
    long long  _currentSettingsID;
    float  _teleBaseZoomFactor;
    struct opaqueCMSampleBuffer { } * _teleBuffer;
    BWNodeError * _teleError;
    BWNodeInput * _teleInput;
    BWNodeOutput * _teleOutput;
    struct opaqueCMSampleBuffer { } * _wideBuffer;
    BWNodeError * _wideError;
    BWNodeInput * _wideInput;
    BWNodeOutput * _wideOutput;
}

+ (void)initialize;

- (void)_clearCaptureRequestState;
- (void)_configureCaptureRequestStateWithStillImageSettings:(id)arg1;
- (void)_emitBuffersAndErrorsToOutputs;
- (void)_processWideAndTeleInput;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithTeleBaseZoomFactor:(float)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
