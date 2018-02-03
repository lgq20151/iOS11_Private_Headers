/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScreenRectangularBoundingPathUtilities : _UIScreenBoundingPathUtilities

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_inscribedRectInBoundingPathByInsettingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onEdges:(unsigned long long)arg2 inCoordinateSpace:(id)arg3 withOptions:(unsigned long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_largestInscribedRectInBoundingPathWithCenter:(struct CGPoint { double x1; double x2; })arg1 aspectRatio:(double)arg2 inCoordinateSpace:(id)arg3;
- (void)_loadBezierPathsForScreen:(id)arg1;
- (id)initWithScreen:(id)arg1;

@end
