/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeConnection : NSObject <BWNodeOutputConsumer> {
    BWNodeInput * _input;
    BWNodeOutput * _output;
    BWPipelineStage * _pipelineStage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) BWNodeInput *input;
@property (readonly) BWNodeOutput *output;
@property (readonly) BWPipelineStage *pipelineStage;
@property (readonly) Class superclass;

+ (id)_inputAndRequirementsDebugArrayStartingFromInput:(id)arg1 forAttachedMediaKey:(id)arg2 finalAttachedMediaKeyOut:(id*)arg3;
+ (id)_requirementsArrayStartingFromInput:(id)arg1 forAttachedMediaKey:(id)arg2 finalAttachedMediaKeyOut:(id*)arg3;
+ (void)initialize;

- (bool)_resolveCommonVideoBufferFormatForAttachedMediaKey:(id)arg1;
- (bool)attach;
- (void)consumeMessage:(id)arg1 fromOutput:(id)arg2;
- (void)dealloc;
- (bool)detach;
- (id)initWithOutput:(id)arg1 input:(id)arg2 pipelineStage:(id)arg3;
- (id)input;
- (id)output;
- (id)pipelineStage;
- (bool)resolveCommonBufferFormat;

@end
