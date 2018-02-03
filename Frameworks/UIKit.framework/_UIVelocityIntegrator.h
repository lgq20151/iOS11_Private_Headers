/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIVelocityIntegrator : NSObject {
    id /* block */  _didResetHysteresisOnThetaDiffHandler;
    bool  _hasMemoizedVelocity;
    double  _hysteresisTimeInterval;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _memoizedVelocity;
    double  _minimumRequiredMovement;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _offset;
    double  _resetHysteresisOnSampleThetaDiff;
    NSMutableArray * _samples;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _totalTranslation;
}

@property (nonatomic, copy) id /* block */ didResetHysteresisOnThetaDiffHandler;
@property (nonatomic) bool hasMemoizedVelocity;
@property (nonatomic) double hysteresisTimeInterval;
@property (nonatomic) struct CGVector { double x1; double x2; } memoizedVelocity;
@property (nonatomic) double minimumRequiredMovement;
@property (nonatomic) struct CGVector { double x1; double x2; } offset;
@property (nonatomic) double resetHysteresisOnSampleThetaDiff;
@property (nonatomic, retain) NSMutableArray *samples;
@property (nonatomic) struct CGVector { double x1; double x2; } totalTranslation;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } velocity;

- (void).cxx_destruct;
- (struct CGVector { double x1; double x2; })_computedVelocity;
- (long long)_sampleCount;
- (void)addSample:(struct CGPoint { double x1; double x2; })arg1;
- (id /* block */)didResetHysteresisOnThetaDiffHandler;
- (bool)hasMemoizedVelocity;
- (bool)hasVelocity;
- (double)hysteresisTimeInterval;
- (id)init;
- (struct CGVector { double x1; double x2; })memoizedVelocity;
- (double)minimumRequiredMovement;
- (struct CGVector { double x1; double x2; })offset;
- (void)reset;
- (double)resetHysteresisOnSampleThetaDiff;
- (id)samples;
- (void)setDidResetHysteresisOnThetaDiffHandler:(id /* block */)arg1;
- (void)setHasMemoizedVelocity:(bool)arg1;
- (void)setHysteresisTimeInterval:(double)arg1;
- (void)setMemoizedVelocity:(struct CGVector { double x1; double x2; })arg1;
- (void)setMinimumRequiredMovement:(double)arg1;
- (void)setOffset:(struct CGVector { double x1; double x2; })arg1;
- (void)setResetHysteresisOnSampleThetaDiff:(double)arg1;
- (void)setSamples:(id)arg1;
- (void)setTotalTranslation:(struct CGVector { double x1; double x2; })arg1;
- (struct CGVector { double x1; double x2; })totalTranslation;
- (struct CGVector { double x1; double x2; })velocity;

@end
