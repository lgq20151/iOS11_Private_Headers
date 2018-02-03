/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMeshTransform : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    void * _impl;
    unsigned long long  _normalization;
    long long  _subdivisionSteps;
}

@property (readonly, copy) NSString *depthNormalization;
@property (readonly) unsigned long long faceCount;
@property (readonly) int subdivisionSteps;
@property (readonly) unsigned long long vertexCount;

+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;
+ (void)CAMLParserStartElement:(id)arg1;
+ (id)meshTransformWithVertexCount:(unsigned long long)arg1 vertices:(const struct CAMeshVertex { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CAPoint3D { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; }*)arg2 faceCount:(unsigned long long)arg3 faces:(const struct CAMeshFace { unsigned int x1[4]; float x2[4]; }*)arg4 depthNormalization:(id)arg5;
+ (bool)supportsSecureCoding;

- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; }*)arg4;
- (bool)_constructWithData:(id)arg1;
- (id)_data;
- (id)_init;
- (id)_initWithMeshTransform:(id)arg1;
- (id)_subdivideToDepth:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)depthNormalization;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CAMeshFace { unsigned int x1[4]; float x2[4]; })faceAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithVertexCount:(unsigned long long)arg1 vertices:(const struct CAMeshVertex { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CAPoint3D { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; }*)arg2 faceCount:(unsigned long long)arg3 faces:(const struct CAMeshFace { unsigned int x1[4]; float x2[4]; }*)arg4 depthNormalization:(id)arg5;
- (id)meshTransformForLayer:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)subdivisionSteps;
- (struct CAMeshVertex { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CAPoint3D { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })vertexAtIndex:(unsigned long long)arg1;
- (unsigned long long)vertexCount;

@end
