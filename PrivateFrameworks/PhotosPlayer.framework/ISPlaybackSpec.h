/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPlaybackSpec : NSObject {
    bool  _aggressivelyCachesVideoFrames;
    bool  _allowAudio;
    bool  _allowVitality;
    double  _endVitalityTransitionDuration;
    NSHashTable * _observers;
    double  _playbackPostDuration;
    double  _playbackPreDuration;
    double  _playbackTransitionBlurRadius;
    double  _playbackTransitionCrossfadeDelay;
    double  _playbackTransitionDuration;
    double  _playbackTransitionScale;
    bool  _reversesMoreVideoFramesInMemory;
    double  _settleTransitionDuration;
    bool  _shouldScaleAndBlurForPlayback;
    bool  _shouldSettleAutomatically;
    double  _timeMultiplier;
    struct CGPoint { 
        double x; 
        double y; 
    }  _transitionBlurTimingFunctionControlPoint1;
    struct CGPoint { 
        double x; 
        double y; 
    }  _transitionBlurTimingFunctionControlPoint2;
    struct CGPoint { 
        double x; 
        double y; 
    }  _transitionFadeTimingFunctionControlPoint1;
    struct CGPoint { 
        double x; 
        double y; 
    }  _transitionFadeTimingFunctionControlPoint2;
    struct CGPoint { 
        double x; 
        double y; 
    }  _transitionScaleTimingFunctionControlPoint1;
    struct CGPoint { 
        double x; 
        double y; 
    }  _transitionScaleTimingFunctionControlPoint2;
    bool  _useForcePlayratePlayback;
    bool  _useForceScrubPlayback;
    bool  _useForceTouchInitiatedPlayback;
    bool  _useTransition;
    bool  _useVitalityBuffer;
    double  _vitalityPostDuration;
    double  _vitalityPreDuration;
    double  _vitalityTransitionDuration;
    bool  _wantsCrossfadeLayer;
}

@property (nonatomic) bool aggressivelyCachesVideoFrames;
@property (nonatomic) bool allowAudio;
@property (nonatomic) bool allowVitality;
@property (nonatomic) double endVitalityTransitionDuration;
@property (nonatomic) double playbackPostDuration;
@property (nonatomic) double playbackPreDuration;
@property (nonatomic) double playbackTransitionBlurRadius;
@property (nonatomic) double playbackTransitionCrossfadeDelay;
@property (nonatomic) double playbackTransitionDuration;
@property (nonatomic) double playbackTransitionScale;
@property (nonatomic) bool reversesMoreVideoFramesInMemory;
@property (nonatomic) double settleTransitionDuration;
@property (nonatomic) bool shouldScaleAndBlurForPlayback;
@property (nonatomic) bool shouldSettleAutomatically;
@property (nonatomic) double timeMultiplier;
@property (nonatomic) struct CGPoint { double x1; double x2; } transitionBlurTimingFunctionControlPoint1;
@property (nonatomic) struct CGPoint { double x1; double x2; } transitionBlurTimingFunctionControlPoint2;
@property (nonatomic) struct CGPoint { double x1; double x2; } transitionFadeTimingFunctionControlPoint1;
@property (nonatomic) struct CGPoint { double x1; double x2; } transitionFadeTimingFunctionControlPoint2;
@property (nonatomic) struct CGPoint { double x1; double x2; } transitionScaleTimingFunctionControlPoint1;
@property (nonatomic) struct CGPoint { double x1; double x2; } transitionScaleTimingFunctionControlPoint2;
@property (nonatomic) bool useForcePlayratePlayback;
@property (nonatomic) bool useForceScrubPlayback;
@property (nonatomic) bool useForceTouchInitiatedPlayback;
@property (nonatomic) bool useTransition;
@property (nonatomic) bool useVitalityBuffer;
@property (nonatomic) double vitalityPostDuration;
@property (nonatomic) double vitalityPreDuration;
@property (nonatomic) double vitalityTransitionDuration;
@property (nonatomic) bool wantsCrossfadeLayer;

- (void).cxx_destruct;
- (void)_didChange;
- (bool)aggressivelyCachesVideoFrames;
- (bool)allowAudio;
- (bool)allowVitality;
- (double)endVitalityTransitionDuration;
- (id)init;
- (double)playbackPostDuration;
- (double)playbackPreDuration;
- (double)playbackTransitionBlurRadius;
- (double)playbackTransitionCrossfadeDelay;
- (double)playbackTransitionDuration;
- (double)playbackTransitionScale;
- (void)registerObserver:(id)arg1;
- (bool)reversesMoreVideoFramesInMemory;
- (void)setAggressivelyCachesVideoFrames:(bool)arg1;
- (void)setAllowAudio:(bool)arg1;
- (void)setAllowVitality:(bool)arg1;
- (void)setDefaultValues;
- (void)setEndVitalityTransitionDuration:(double)arg1;
- (void)setHintPlaybackValuesWithAssetOptions:(unsigned long long)arg1;
- (void)setHintPlaybackValuesWithPhotoHasColorAdjustments:(bool)arg1;
- (void)setPlaybackPostDuration:(double)arg1;
- (void)setPlaybackPreDuration:(double)arg1;
- (void)setPlaybackTransitionBlurRadius:(double)arg1;
- (void)setPlaybackTransitionCrossfadeDelay:(double)arg1;
- (void)setPlaybackTransitionDuration:(double)arg1;
- (void)setPlaybackTransitionScale:(double)arg1;
- (void)setReversesMoreVideoFramesInMemory:(bool)arg1;
- (void)setSettleTransitionDuration:(double)arg1;
- (void)setShouldScaleAndBlurForPlayback:(bool)arg1;
- (void)setShouldSettleAutomatically:(bool)arg1;
- (void)setTimeMultiplier:(double)arg1;
- (void)setTransitionBlurTimingFunctionControlPoint1:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTransitionBlurTimingFunctionControlPoint2:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTransitionFadeTimingFunctionControlPoint1:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTransitionFadeTimingFunctionControlPoint2:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTransitionScaleTimingFunctionControlPoint1:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTransitionScaleTimingFunctionControlPoint2:(struct CGPoint { double x1; double x2; })arg1;
- (void)setUseForcePlayratePlayback:(bool)arg1;
- (void)setUseForceScrubPlayback:(bool)arg1;
- (void)setUseForceTouchInitiatedPlayback:(bool)arg1;
- (void)setUseTransition:(bool)arg1;
- (void)setUseVitalityBuffer:(bool)arg1;
- (void)setVitalityPostDuration:(double)arg1;
- (void)setVitalityPreDuration:(double)arg1;
- (void)setVitalityTransitionDuration:(double)arg1;
- (void)setWantsCrossfadeLayer:(bool)arg1;
- (double)settleTransitionDuration;
- (bool)shouldScaleAndBlurForPlayback;
- (bool)shouldSettleAutomatically;
- (double)timeMultiplier;
- (struct CGPoint { double x1; double x2; })transitionBlurTimingFunctionControlPoint1;
- (struct CGPoint { double x1; double x2; })transitionBlurTimingFunctionControlPoint2;
- (struct CGPoint { double x1; double x2; })transitionFadeTimingFunctionControlPoint1;
- (struct CGPoint { double x1; double x2; })transitionFadeTimingFunctionControlPoint2;
- (struct CGPoint { double x1; double x2; })transitionScaleTimingFunctionControlPoint1;
- (struct CGPoint { double x1; double x2; })transitionScaleTimingFunctionControlPoint2;
- (void)unregisterObserver:(id)arg1;
- (bool)useForcePlayratePlayback;
- (bool)useForceScrubPlayback;
- (bool)useForceTouchInitiatedPlayback;
- (bool)useTransition;
- (bool)useVitalityBuffer;
- (double)vitalityPostDuration;
- (double)vitalityPreDuration;
- (double)vitalityTransitionDuration;
- (bool)wantsCrossfadeLayer;

@end
