/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CATiledLayer : CALayer

@property <CATiledLayerDelegate><CALayerDelegate> *delegate;
@property (getter=isDrawingEnabled) bool drawingEnabled;
@property struct CGColor { }*fillColor;
@property unsigned long long levelsOfDetail;
@property unsigned long long levelsOfDetailBias;
@property double maximumTileScale;
@property struct CGSize { double x1; double x2; } tileSize;

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (double)fadeDuration;
+ (unsigned int)prefetchedTiles;
+ (bool)shouldDrawOnMainThread;

- (bool)_canDisplayConcurrently;
- (void)_colorSpaceDidChange;
- (void)_dealloc;
- (void)_display;
- (bool)canDrawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (void)displayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (struct CGColor { }*)fillColor;
- (void)invalidateContents;
- (bool)isDrawingEnabled;
- (unsigned long long)levelsOfDetail;
- (unsigned long long)levelsOfDetailBias;
- (double)maximumTileScale;
- (void)setContents:(id)arg1;
- (void)setDrawingEnabled:(bool)arg1;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setLevelsOfDetail:(unsigned long long)arg1;
- (void)setLevelsOfDetailBias:(unsigned long long)arg1;
- (void)setMaximumTileScale:(double)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (void)setTileSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldArchiveValueForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })tileSize;

@end
