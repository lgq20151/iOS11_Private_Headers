/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWAttachedMediaSplitNode : BWFanOutNode {
    NSMutableDictionary * _attachedMediaFormatDescriptions;
    NSArray * _attachedMediaKeys;
    bool  _emitsNodeErrorsForMissingAttachedMedia;
    int  _numOutputs;
}

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (bool)emitsNodeErrorsForMissingAttachedMedia;
- (id)initWithAttachedMediaKeys:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setEmitsNodeErrorsForMissingAttachedMedia:(bool)arg1;

@end
