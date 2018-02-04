/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageTransformAffine : NUImageTransform {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transformInv;
}

@property (readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)inverseTransform;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGeometryTransformAffine:(id)arg1;
- (void)nu_updateDigest:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (struct CGPoint { double x1; double x2; })transformPoint:(struct CGPoint { double x1; double x2; })arg1;

@end