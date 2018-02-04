/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUMutableBrushStroke : NUBrushStroke

@property (nonatomic) float opacity;
@property (nonatomic) long long pressureMode;
@property (nonatomic) float radius;
@property (nonatomic) float softness;

- (void)appendPoint:(struct { float x1; float x2; float x3; })arg1;
- (void)applyTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRadius:(float)arg1 softness:(float)arg2 opacity:(float)arg3 pressureMode:(long long)arg4;
- (id)points;

@end