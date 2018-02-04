/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKPath : NSObject {
    struct PolylinePathway { 
        int (**_vptr$PolylinePathway)(); 
        int pointCount; 
        struct Vec3 {} *points; 
        float radius; 
        bool cyclic; 
        float segmentLength; 
        float segmentProjection; 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } local; 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } chosen; 
        struct Vec3 { 
            float x; 
            float y; 
            float z; 
        } segmentNormal; 
        float *lengths; 
        struct Vec3 {} *normals; 
        float totalPathLength; 
    }  _pathway;
}

@property (getter=isCyclical, nonatomic) bool cyclical;
@property (readonly) unsigned long long numPoints;
@property (nonatomic) float radius;

+ (id)pathWithFloat3Points:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(bool)arg4;
+ (id)pathWithGraphNodes:(id)arg1 radius:(float)arg2;
+ (id)pathWithPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(bool)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_cyclical;
- (void)float2AtIndex:(unsigned long long)arg1;
- (void)float3AtIndex:(unsigned long long)arg1;
- (id)initWithFloat3Points:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(bool)arg4;
- (id)initWithGraphNodes:(id)arg1 radius:(float)arg2;
- (id)initWithPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(bool)arg4;
- (bool)isCyclical;
- (unsigned long long)numPoints;
- (struct PolylinePathway { int (**x1)(); int x2; struct Vec3 {} *x3; float x4; bool x5; float x6; float x7; struct Vec3 { float x_8_1_1; float x_8_1_2; float x_8_1_3; } x8; struct Vec3 { float x_9_1_1; float x_9_1_2; float x_9_1_3; } x9; struct Vec3 { float x_10_1_1; float x_10_1_2; float x_10_1_3; } x10; float *x11; struct Vec3 {} *x12; float x13; }*)pathway;
- (void)pointAtIndex:(unsigned long long)arg1;
- (float)radius;
- (void)setCyclical:(bool)arg1;
- (void)setRadius:(float)arg1;
- (void)set_cyclical:(bool)arg1;

@end