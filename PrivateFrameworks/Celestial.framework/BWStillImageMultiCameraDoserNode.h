/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageMultiCameraDoserNode : BWNode {
    long long  _currentSettingsID;
    unsigned int * _emittedObjectsCounters;
    bool  _performDosing;
    NSMutableArray * _stashedObjectsByInputIndex;
}

+ (void)initialize;

- (void)_clearCaptureRequestState;
- (void)_configureCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2;
- (void)_emitNodeError:(id)arg1 fromNodeInputIndex:(unsigned long long)arg2;
- (void)_emitSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 fromNodeInputIndex:(unsigned long long)arg2;
- (void)_emitStashedObjectsIfAvailableAfterEmittingFromInputIndex:(unsigned long long)arg1;
- (id)_outputForNodeInputIndex:(unsigned long long)arg1;
- (bool)_shouldStashObjectFromNodeInputIndex:(unsigned long long)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithNumberOfInputs:(unsigned int)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
