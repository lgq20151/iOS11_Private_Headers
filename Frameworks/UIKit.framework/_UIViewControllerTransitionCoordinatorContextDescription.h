/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewControllerTransitionCoordinatorContextDescription : NSObject <NSSecureCoding> {
    bool  _animated;
    bool  _cancelled;
    long long  _completionCurve;
    double  _completionVelocity;
    long long  _fromOrientation;
    bool  _interactive;
    double  _percentComplete;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _targetTransform;
    long long  _toOrientation;
    double  _transitionDuration;
}

@property (getter=isAnimated, nonatomic) bool animated;
@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic) long long completionCurve;
@property (nonatomic) double completionVelocity;
@property (nonatomic) long long fromOrientation;
@property (getter=isInteractive, nonatomic) bool interactive;
@property (nonatomic) double percentComplete;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } targetTransform;
@property (nonatomic) long long toOrientation;
@property (nonatomic) double transitionDuration;

+ (id)descriptionForTransitionCoordinatorContext:(id)arg1;
+ (bool)supportsSecureCoding;

- (long long)completionCurve;
- (double)completionVelocity;
- (void)encodeWithCoder:(id)arg1;
- (long long)fromOrientation;
- (id)initWithCoder:(id)arg1;
- (bool)isAnimated;
- (bool)isCancelled;
- (bool)isInteractive;
- (double)percentComplete;
- (void)setAnimated:(bool)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setCompletionCurve:(long long)arg1;
- (void)setCompletionVelocity:(double)arg1;
- (void)setFromOrientation:(long long)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setPercentComplete:(double)arg1;
- (void)setTargetTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setToOrientation:(long long)arg1;
- (void)setTransitionDuration:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })targetTransform;
- (long long)toOrientation;
- (double)transitionDuration;

@end
