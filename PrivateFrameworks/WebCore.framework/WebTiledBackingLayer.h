/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebTiledBackingLayer : CALayer {
    struct unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController> > { 
        struct __compressed_pair<WebCore::TileController *, std::__1::default_delete<WebCore::TileController> > { 
            struct TileController {} *__first_; 
        } __ptr_; 
    }  _tileController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)actionForKey:(id)arg1;
- (double)contentsScale;
- (struct TileController { int (**x1)(); struct PlatformCALayer {} *x2; float x3; float x4; struct unique_ptr<WebCore::TileCoverageMap, std::__1::default_delete<WebCore::TileCoverageMap> > { struct __compressed_pair<WebCore::TileCoverageMap *, std::__1::default_delete<WebCore::TileCoverageMap> > { struct TileCoverageMap {} *x_1_2_1; } x_5_1_1; } x5; struct unique_ptr<WebCore::TileGrid, std::__1::default_delete<WebCore::TileGrid> > { struct __compressed_pair<WebCore::TileGrid *, std::__1::default_delete<WebCore::TileGrid> > { struct TileGrid {} *x_1_2_1; } x_6_1_1; } x6; struct unique_ptr<WebCore::TileGrid, std::__1::default_delete<WebCore::TileGrid> > { struct __compressed_pair<WebCore::TileGrid *, std::__1::default_delete<WebCore::TileGrid> > { struct TileGrid {} *x_1_2_1; } x_7_1_1; } x7; struct FloatRect { struct FloatPoint { float x_1_2_1; float x_1_2_2; } x_8_1_1; struct FloatSize { float x_2_2_1; float x_2_2_2; } x_8_1_2; } x8; struct optional<WebCore::FloatRect> { bool x_9_1_1; union constexpr_storage_t<WebCore::FloatRect> { unsigned char x_2_2_1; struct FloatRect { struct FloatPoint { float x_1_4_1; float x_1_4_2; } x_2_3_1; struct FloatSize { float x_2_4_1; float x_2_4_2; } x_2_3_2; } x_2_2_2; } x_9_1_2; } x9; }*)createTileController:(struct PlatformCALayer { int (**x1)(); unsigned int x2; int x3; unsigned long long x4; struct RetainPtr<CALayer> { void *x_5_1_1; } x5; struct PlatformCALayerClient {} *x6; }*)arg1;
- (void)dealloc;
- (bool)drawsAsynchronously;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (void)invalidate;
- (bool)isOpaque;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsScale:(double)arg1;
- (void)setDrawsAsynchronously:(bool)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOpaque:(bool)arg1;
- (void)setSupportsSubpixelAntialiasedText:(bool)arg1;
- (void)setWantsDeepColorBackingStore:(bool)arg1;
- (bool)supportsSubpixelAntialiasedText;
- (struct TiledBacking { int (**x1)(); }*)tiledBacking;
- (bool)wantsDeepColorBackingStore;

@end
