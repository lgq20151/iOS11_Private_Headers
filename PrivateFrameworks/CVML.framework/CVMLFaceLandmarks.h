/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLFaceLandmarks : NSObject {
    struct _Geometry2D_rect2D_ { 
        struct _Geometry2D_point2D_ { 
            float x; 
            float y; 
        } origin; 
        struct _Geometry2D_size2D_ { 
            float height; 
            float width; 
        } size; 
    }  _alignedBBox;
    bool  _is3DLandmarks;
    unsigned long long  _pointCount;
    NSData * _pointsData;
    NSMutableDictionary * _regions;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _userFacingBBox;
}

@property struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; } alignedBBox;
@property bool is3DLandmarks;
@property unsigned long long pointCount;
@property (retain) NSData *pointsData;
@property (retain) NSMutableDictionary *regions;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } userFacingBBox;

- (void).cxx_destruct;
- (struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })alignedBBox;
- (void*)createPointArray:(const int*)arg1 count:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithData:(id)arg1 pointCount:(unsigned long long)arg2 is3D:(bool)arg3 userFacingBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 alignedBBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })arg5;
- (bool)is3DLandmarks;
- (bool)isUserFacingBBoxEquivalentToAlignedBBox;
- (unsigned long long)pointCount;
- (id)pointsData;
- (id)regionForName:(id)arg1;
- (id)regions;
- (void)setAlignedBBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIs3DLandmarks:(bool)arg1;
- (void)setPointCount:(unsigned long long)arg1;
- (void)setPointsData:(id)arg1;
- (void)setRegions:(id)arg1;
- (void)setUserFacingBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })userFacingBBox;

@end