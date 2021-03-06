/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartPieElementProperties : TSCH3DChartBasicElementProperties {
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__first_; 
        } __end_cap_; 
    }  mExplode;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__first_; 
        } __end_cap_; 
    }  mPercentOfTotal;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__first_; 
        } __end_cap_; 
    }  mRotation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)anyHasExplosion;
- (bool)applyElementTransform:(struct ObjectTransforms { struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_1_2_1; struct Transform {} **x_1_2_2; struct Transform {} **x_1_2_3; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_4_3_1; } x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_1_2_1; struct Transform {} **x_1_2_2; struct Transform {} **x_1_2_3; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_4_3_1; } x_1_2_4; } x_2_1_1; unsigned long long x_2_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x_3_2_1; } x_2_1_3; } x2; }*)arg1 series:(id)arg2 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor { id x1; }*)arg4;
- (struct GeometryResource { int x1; /* Warning: unhandled struct encoding: '{ObjcSharedPtr<TSCH3DResource>=@}{GeometryArrays=IIII}{ObjcSharedPtr<TSCH3DGeometry>=@}}' */ struct ObjcSharedPtr<TSCH3DResource> { id x_2_1_1; struct GeometryArrays { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; } x_2_1_2; struct ObjcSharedPtr<TSCH3DGeometry> { id x_3_2_1; } x_2_1_3; } x2; })boundsGeometryForSeries:(id)arg1 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)elementTransformDepthFromPropertyAccessor:(const struct ChartScenePropertyAccessor { id x1; }*)arg1;
- (float)explosionAtElementIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (float)explosionAtElementIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1 propertyAccessor:(const struct ChartScenePropertyAccessor { id x1; }*)arg2;
- (long long)flatIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (float)percentOfTotalAtElementIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (void)reset;
- (float)rotationAtElementIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (void)setExplosion:(float)arg1 atElementIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (void)setPercentOfTotal:(float)arg1 atElementIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (void)setRotation:(float)arg1 atElementIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (void)updateLabels;
- (void)updateValues;

@end
