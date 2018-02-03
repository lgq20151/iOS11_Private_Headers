/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStreamingCVAFilterRendererAnimator : NSObject {
    struct { 
        float simulatedFocalRatio; 
    }  _currentFrame;
    int  _mostRecentEffectStatus;
    BWRamp * _simulatedFocalRatioRamp;
}

@property (getter=isDepthAvailable, nonatomic, readonly) bool depthAvailable;

+ (void)initialize;

- (void)_resetSimulatedFocalRatioRampWithEffectStatus:(int)arg1 forFrontCamera:(bool)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithEffectStatus:(int)arg1;
- (bool)isDepthAvailable;
- (struct { float x1; }*)simulateNextFrameWithEffectStatus:(int)arg1 portraitStability:(float)arg2 forFrontCamera:(bool)arg3;

@end
