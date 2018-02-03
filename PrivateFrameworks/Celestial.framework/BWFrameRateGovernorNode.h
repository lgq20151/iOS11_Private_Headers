/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFrameRateGovernorNode : BWNode {
    int  _activeBracketCaptureType;
    int  _activeBracketSequenceRate;
    bool  _dropsStillBracketFramesToMaintainConsistentFrameRate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastEmittedPTS;
    BWMotionDataPreserver * _motionDataPreserver;
    bool  _preservesMotionDataFromDroppedStillBracketFrames;
}

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (bool)dropsStillBracketFramesToMaintainConsistentFrameRate;
- (id)init;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (bool)preservesMotionDataFromDroppedStillBracketFrames;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setDropsStillBracketFramesToMaintainConsistentFrameRate:(bool)arg1;
- (void)setPreservesMotionDataFromDroppedStillBracketFrames:(bool)arg1;

@end
