/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMotionAttachmentsNode : BWNode {
    NSDictionary * _optionsDict;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
}

+ (void)initialize;

- (int)_setupSampleBufferProcessor;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithSensorIDDictionaryByPortType:(id)arg1 cameraModuleInfoByPortType:(id)arg2 activePortTypes:(id)arg3 requiredFormat:(id)arg4 motionAttachmentsMode:(int)arg5 motionAttachmentsSource:(int)arg6 motionCallbackThreadPriority:(unsigned int)arg7;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
