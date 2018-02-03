/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarBezierView : UIView <_UIStatusBarDisplayable> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentRectInsets;
    UIBezierPath * _bezierPath;
    UIColor * _fillColor;
    UIColor * _strokeColor;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentRectInsets;
@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic, retain) UIBezierPath *bezierPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) UIColor *fillColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CAShapeLayer *shapeLayer;
@property (nonatomic, copy) UIColor *strokeColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsCrossfade;

+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)bezierPath;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBezierPath:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)shapeLayer;
- (id)strokeColor;

@end
