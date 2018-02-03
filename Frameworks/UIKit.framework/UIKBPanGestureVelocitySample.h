/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBPanGestureVelocitySample : NSObject {
    double  dt;
    struct CGPoint { 
        double x; 
        double y; 
    }  end;
    double  force;
    double  majorRadius;
    struct CGPoint { 
        double x; 
        double y; 
    }  start;
}

@property double dt;
@property struct CGPoint { double x1; double x2; } end;
@property double force;
@property double majorRadius;
@property struct CGPoint { double x1; double x2; } start;

- (double)dt;
- (struct CGPoint { double x1; double x2; })end;
- (double)force;
- (double)majorRadius;
- (void)pullValuesFrom:(id)arg1;
- (void)resetValues;
- (void)setDt:(double)arg1;
- (void)setEnd:(struct CGPoint { double x1; double x2; })arg1;
- (void)setForce:(double)arg1;
- (void)setMajorRadius:(double)arg1;
- (void)setStart:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })start;

@end
