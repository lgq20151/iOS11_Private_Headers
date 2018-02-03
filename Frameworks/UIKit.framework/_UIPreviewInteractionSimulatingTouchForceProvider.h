/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewInteractionSimulatingTouchForceProvider : NSObject <_UIPreviewInteractionTouchForceProviding> {
    bool  _active;
    <UICoordinateSpace> * _coordinateSpace;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _targetTouchForce;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double touchForce;

- (void).cxx_destruct;
- (void)cancelInteraction;
- (id)initWithTouchForce:(double)arg1 location:(struct CGPoint { double x1; double x2; })arg2 coordinateSpace:(id)arg3;
- (bool)isActive;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (void)setActive:(bool)arg1;
- (double)touchForce;

@end
