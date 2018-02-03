/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UILinearForceLevelClassifier : _UIForceLevelClassifier <UIDebuggingInformationObserver> {
    bool  _anyForceObservations;
    long long  _impulseObservationState;
    double  _impulseSmoothingFactor;
    double  _lastForceForImpulse;
    double  _lastTimestampForImpulse;
    double  _revealThreshold;
    double  _smoothedForce;
    double  _smoothedImpulse;
    double  _smoothingFactor;
    double  _standardThreshold;
    double  _strongThreshold;
}

@property (nonatomic, readonly) double currentImpulse;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double impulseSmoothingFactor;
@property (nonatomic) double revealThreshold;
@property (nonatomic) double smoothingFactor;
@property (nonatomic) double standardThreshold;
@property (nonatomic) double strongThreshold;
@property (readonly) Class superclass;

- (double)_calculateProgressOfTouchForceValue:(double)arg1 toForceLevel:(long long)arg2 minimumRequiredForceLevel:(long long)arg3;
- (long long)_forceLevelForTouchForceValue:(double)arg1;
- (double)_instantaneousImpulseForTouchForceValue:(double)arg1 atTimestamp:(double)arg2;
- (double)_thresholdForForceLevel:(long long)arg1;
- (void)_updateForceWithTouchForceValue:(double)arg1 atTimestamp:(double)arg2;
- (void)_updateImpulseWithTouchForceValue:(double)arg1 atTimestamp:(double)arg2;
- (double)currentImpulse;
- (void)dealloc;
- (void)debuggingPropertyForKey:(id)arg1 changedToValue:(id)arg2;
- (double)impulseSmoothingFactor;
- (id)init;
- (void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)reset;
- (double)revealThreshold;
- (void)setImpulseSmoothingFactor:(double)arg1;
- (void)setRevealThreshold:(double)arg1;
- (void)setSmoothingFactor:(double)arg1;
- (void)setStandardThreshold:(double)arg1;
- (void)setStrongThreshold:(double)arg1;
- (double)smoothingFactor;
- (double)standardThreshold;
- (double)strongThreshold;
- (void)touchForceMultiplierDidChange;
- (id)transformerFromTouchForceMessageToProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2;

@end
