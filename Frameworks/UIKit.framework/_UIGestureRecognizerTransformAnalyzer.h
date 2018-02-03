/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIGestureRecognizerTransformAnalyzer : NSObject {
    long long  _dominantComponent;
    double  _lowPassRotationDelta;
    double  _lowPassScaleDelta;
    double  _lowPassTranslationMagnitudeDelta;
    double  _pinchingWeight;
    double  _rotationWeight;
    double  _translationWeight;
}

@property (nonatomic, readonly) long long dominantComponent;
@property (nonatomic) double pinchingWeight;
@property (nonatomic) double rotationWeight;
@property (nonatomic) double translationWeight;

- (void)analyzeTouches:(id)arg1;
- (long long)dominantComponent;
- (id)init;
- (double)pinchingWeight;
- (void)reset;
- (double)rotationWeight;
- (void)setPinchingWeight:(double)arg1;
- (void)setRotationWeight:(double)arg1;
- (void)setTranslationWeight:(double)arg1;
- (double)translationWeight;

@end
