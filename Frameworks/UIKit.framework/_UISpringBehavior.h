/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISpringBehavior : UIDynamicBehavior {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    UIAttachmentBehavior * _bottomLeft;
    UIAttachmentBehavior * _bottomRight;
    double  _damping;
    double  _frequency;
    UIAttachmentBehavior * _topLeft;
    UIAttachmentBehavior * _topRight;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic) double damping;
@property (nonatomic) double frequency;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (double)damping;
- (double)frequency;
- (id)init;
- (id)initWithItem:(id)arg1 anchorPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDamping:(double)arg1;
- (void)setFrequency:(double)arg1;

@end
