/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIGlintyShapeView : UIView {
    UIColor * _fillColor;
    UIBezierPath * _path;
    UIColor * _strokeColor;
}

@property (nonatomic, readonly) UIColor *fillColor;
@property (nonatomic, readonly) UIBezierPath *path;
@property (nonatomic, readonly) CAShapeLayer *shapeLayer;
@property (nonatomic, readonly) UIColor *strokeColor;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)path;
- (void)setFillColor:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)shapeLayer;
- (id)strokeColor;

@end
