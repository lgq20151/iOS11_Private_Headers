/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderer : NSObject {
    long long  _assetIdiom;
    NSString * _cacheKey;
    struct CGContext { } * _cachingContext;
    id /* block */  _cachingContextCompletion;
    int  _colorCount;
    bool  _colorDetectMode;
    long long  _contentColorFormat;
    struct CGContext { } * _ctx;
    bool  _disableInternalCaching;
    long long  _forceColorFormat;
    bool  _opaque;
    long long  _renderFlags;
    UIImage * _renderedImage;
    double  _scale;
    UIColor * _singleColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) long long assetIdiom;
@property (nonatomic, retain) NSString *cacheKey;
@property (nonatomic) bool colorDetectMode;
@property (nonatomic, readonly) long long contentColorFormat;
@property (nonatomic, readonly) struct CGContext { }*context;
@property (nonatomic, readonly) NSData *contextData;
@property (nonatomic) bool disableInternalCaching;
@property (nonatomic, readonly) bool opaque;
@property (nonatomic, readonly) long long renderFlags;
@property (nonatomic, readonly) UIImage *renderedImage;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) UIColor *singleColor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (void)clearInternalCaches;
+ (struct CGContext { }*)imageContextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 colorFormat:(long long)arg3 opaque:(bool)arg4 invert:(bool)arg5;
+ (id)rendererWithContext:(struct CGContext { }*)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 withScale:(double)arg3 opaque:(bool)arg4 renderFlags:(long long)arg5 assetIdiom:(long long)arg6;

- (void)_addDetectedColor:(struct CGColor { }*)arg1;
- (void)_completeCacheImageWithTraitsIfNecessary:(id)arg1;
- (struct CGPath { }*)_deleteGlyphPaths;
- (void)_drawKeyImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withStyle:(id)arg3 force1xImages:(bool)arg4 flipHorizontally:(bool)arg5;
- (bool)_drawKeyString:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withStyle:(id)arg3;
- (void)_drawLinearGradient:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)_drawSingleSymbol:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withStyle:(id)arg3;
- (void)_renderVariantsFromKeyContents:(id)arg1 withTraits:(id)arg2;
- (struct CGPath { }*)_thickShiftGlyphPath;
- (struct CGPath { }*)_thinShiftGlyphPath;
- (void)addPathForFlickGeometry:(id)arg1;
- (void)addPathForFlickPopupGeometries:(id)arg1;
- (void)addPathForRenderGeometry:(id)arg1;
- (void)addPathForSplitGeometry:(id)arg1;
- (void)addPathForTraits:(id)arg1 displayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)addRoundRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 radius:(double)arg2 corners:(unsigned long long)arg3;
- (long long)assetIdiom;
- (id)cacheKey;
- (bool)colorDetectMode;
- (long long)contentColorFormat;
- (struct CGContext { }*)context;
- (id)contextData;
- (void)dealloc;
- (id)description;
- (void)detectColorsForEffect:(id)arg1;
- (void)detectColorsForGradient:(id)arg1;
- (void)detectColorsForNamedColor:(id)arg1;
- (bool)disableInternalCaching;
- (void)drawPath:(struct CGPath { }*)arg1 weight:(double)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 color:(struct CGColor { }*)arg4 fill:(bool)arg5;
- (void)drawShiftPath:(bool)arg1 weight:(double)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 color:(struct CGColor { }*)arg4;
- (void)ensureContext;
- (void)forceColorFormat:(long long)arg1;
- (id)initWithContext:(struct CGContext { }*)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 withScale:(double)arg3 opaque:(bool)arg4 renderFlags:(long long)arg5 assetIdiom:(long long)arg6;
- (bool)loadCachedImageForHashString:(id)arg1;
- (bool)opaque;
- (id)pathForConcaveCornerWithGeometry:(id)arg1;
- (id)pathForFlickGeometry:(id)arg1;
- (id)pathForFlickPopupGeometries:(id)arg1;
- (id)pathForFlickWidth:(double)arg1 height:(double)arg2 handleLength:(double)arg3 keyMiddle:(struct CGPoint { double x1; double x2; })arg4 angle:(double)arg5;
- (id)pathForRenderGeometry:(id)arg1;
- (id)pathForSplitGeometry:(id)arg1;
- (void)renderBackgroundTraits:(id)arg1;
- (void)renderBackgroundTraits:(id)arg1 allowCaching:(bool)arg2;
- (void)renderDivotEffect:(id)arg1 withTraits:(id)arg2;
- (void)renderEdgeEffect:(id)arg1 withTraits:(id)arg2;
- (long long)renderFlags;
- (void)renderKeyContents:(id)arg1 withTraits:(id)arg2;
- (unsigned long long)renderKeyImageContents:(id)arg1 withTraits:(id)arg2 status:(unsigned long long)arg3;
- (bool)renderKeyPathContents:(id)arg1 withTraits:(id)arg2;
- (unsigned long long)renderKeyStringContents:(id)arg1 withTraits:(id)arg2 status:(unsigned long long)arg3;
- (void)renderNullEffect:(id)arg1 withTraits:(id)arg2;
- (void)renderShadowEffect:(id)arg1 withTraits:(id)arg2;
- (id)renderedImage;
- (double)scale;
- (void)setCacheKey:(id)arg1;
- (void)setColorDetectMode:(bool)arg1;
- (void)setDisableInternalCaching:(bool)arg1;
- (id)singleColor;
- (struct CGSize { double x1; double x2; })size;

@end
