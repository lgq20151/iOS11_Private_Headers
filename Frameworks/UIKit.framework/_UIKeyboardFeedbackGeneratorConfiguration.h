/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKeyboardFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {
    double  _fastTypingTime;
    double  _fastTypingVolumeMultiplier;
    NSDictionary * _feedbacks;
    double  _slowTypingTime;
}

@property (nonatomic) double fastTypingTime;
@property (nonatomic) double fastTypingVolumeMultiplier;
@property (nonatomic, retain) NSDictionary *feedbacks;
@property (nonatomic) double slowTypingTime;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (bool)_hasMutableFeedbackKeyPaths;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)defaultEnabled;
- (double)fastTypingTime;
- (double)fastTypingVolumeMultiplier;
- (id)feedbackKeyPaths;
- (id)feedbacks;
- (bool)isEqual:(id)arg1;
- (long long)requiredSupportLevel;
- (void)setFastTypingTime:(double)arg1;
- (void)setFastTypingVolumeMultiplier:(double)arg1;
- (void)setFeedbacks:(id)arg1;
- (void)setSlowTypingTime:(double)arg1;
- (double)slowTypingTime;

@end