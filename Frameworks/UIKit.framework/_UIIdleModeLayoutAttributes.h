/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIIdleModeLayoutAttributes : NSObject {
    double  _alphaOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _centerOffset;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    bool  _wantsDimmingOverlay;
}

@property (nonatomic) double alphaOffset;
@property (nonatomic) struct CGPoint { double x1; double x2; } centerOffset;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic) bool wantsDimmingOverlay;

- (double)alphaOffset;
- (struct CGPoint { double x1; double x2; })centerOffset;
- (id)init;
- (void)setAlphaOffset:(double)arg1;
- (void)setCenterOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setWantsDimmingOverlay:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (bool)wantsDimmingOverlay;

@end
