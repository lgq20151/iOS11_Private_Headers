/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISelectionFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration {
    double  _fastAudioVolume;
    double  _fastHapticVolume;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _feedback;
    double  _maxSpeed;
    double  _minimumInterval;
    double  _slowAudioVolume;
    double  _slowHapticVolume;
}

@property (nonatomic) double fastAudioVolume;
@property (nonatomic) double fastHapticVolume;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback;
@property (nonatomic) double maxSpeed;
@property (nonatomic) double minimumInterval;
@property (nonatomic) double slowAudioVolume;
@property (nonatomic) double slowHapticVolume;

+ (id)defaultConfiguration;
+ (id)lightConfiguration;
+ (id)pickerConfiguration;
+ (id)strongConfiguration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)fastAudioVolume;
- (double)fastHapticVolume;
- (id)feedback;
- (id)feedbackKeyPaths;
- (bool)isEqual:(id)arg1;
- (double)maxSpeed;
- (double)minimumInterval;
- (void)setFastAudioVolume:(double)arg1;
- (void)setFastHapticVolume:(double)arg1;
- (void)setFeedback:(id)arg1;
- (void)setMaxSpeed:(double)arg1;
- (void)setMinimumInterval:(double)arg1;
- (void)setSlowAudioVolume:(double)arg1;
- (void)setSlowHapticVolume:(double)arg1;
- (double)slowAudioVolume;
- (double)slowHapticVolume;

@end
