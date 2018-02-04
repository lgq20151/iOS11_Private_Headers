/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleFaceTileImageRequestResult : NSObject {
    id  _assetObjectID;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceRect;
    UIImage * _image;
    bool  _isDegraded;
    bool  _isVeryLowQuality;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalImageSize;
    id  _originalObjectID;
    struct PXFaceTileImageParams { 
        struct CGSize { 
            double width; 
            double height; 
        } targetSize; 
        unsigned long long cropFactor; 
        bool round; 
        bool cropBounded; 
        bool acceptsVeryLowQuality; 
        bool wantsNonVisibleFaceCompletion; 
    }  _params;
}

@property (nonatomic, retain) id assetObjectID;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceRect;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) bool isDegraded;
@property (nonatomic) bool isVeryLowQuality;
@property (nonatomic) struct CGSize { double x1; double x2; } originalImageSize;
@property (nonatomic, retain) id originalObjectID;
@property (nonatomic) struct PXFaceTileImageParams { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; unsigned long long x2; bool x3; bool x4; bool x5; bool x6; } params;

- (void).cxx_destruct;
- (id)assetObjectID;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRect;
- (id)image;
- (id)initWithImage:(id)arg1 faceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isDegraded:(bool)arg3;
- (bool)isDegraded;
- (bool)isVeryLowQuality;
- (struct CGSize { double x1; double x2; })originalImageSize;
- (id)originalObjectID;
- (struct PXFaceTileImageParams { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; unsigned long long x2; bool x3; bool x4; bool x5; bool x6; })params;
- (void)setAssetObjectID:(id)arg1;
- (void)setIsVeryLowQuality:(bool)arg1;
- (void)setOriginalImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOriginalObjectID:(id)arg1;
- (void)setParams:(struct PXFaceTileImageParams { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; unsigned long long x2; bool x3; bool x4; bool x5; bool x6; })arg1;

@end