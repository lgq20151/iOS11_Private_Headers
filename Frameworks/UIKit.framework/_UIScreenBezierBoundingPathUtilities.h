/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScreenBezierBoundingPathUtilities : _UIScreenBoundingPathUtilities {
    NSData * _bitmapData;
    struct _UIScreenBoundingPathBitmapInfo { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long skipRegionY; 
        unsigned long long skipRegionHeight; 
    }  _bitmapInfo;
    long long  _type;
}

+ (bool)isScreenSupported:(id)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_inscribedRectInBoundingPathByInsettingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onEdges:(unsigned long long)arg2 inCoordinateSpace:(id)arg3 withOptions:(unsigned long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_largestInscribedRectInBoundingPathWithCenter:(struct CGPoint { double x1; double x2; })arg1 aspectRatio:(double)arg2 inCoordinateSpace:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_largestInscribedRectWithPortraitPixelRectInScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withPortraitAspectRatio:(double)arg2;
- (void)_loadBezierPathsForScreen:(id)arg1 type:(long long)arg2;
- (void)_loadBitmapForScreen:(id)arg1 type:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectByHorizontallyInsettingPortraitPixelRectInScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromEdges:(unsigned long long)arg2 performCompleteTest:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectByVerticallyInsettingPortraitPixelRectInScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromEdges:(unsigned long long)arg2 performCompleteTest:(bool)arg3;
- (void)_validateLoadedBitmapDataSize;
- (id)initWithScreen:(id)arg1;

@end
