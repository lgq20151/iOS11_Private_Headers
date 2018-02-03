/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebTiledView : UIView {
    bool  _allowsPaintingAndScriptsWhilePanning;
    bool  _didFirstTileLayout;
    bool  _editingTilingModeEnabled;
    int  _inGestureType;
    bool  _layoutTilesInMainThread;
    int  _tilingArea;
    bool  _tilingModeIsLocked;
    WAKWindow * _wakWindow;
}

- (void)_didScroll;
- (void)_screenChanged:(id)arg1;
- (void)_updateForScreen:(id)arg1;
- (unsigned int)adjustedMaxTileCount;
- (bool)allowsPaintingAndScriptsWhilePanning;
- (void)dealloc;
- (void)drawImageIntoTiles:(struct CGImage { }*)arg1;
- (bool)drawsGrid;
- (void)dumpTiles;
- (bool)editingTilingModeEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTilingEnabled;
- (bool)keepsZoomedOutTiles;
- (void)layoutSubviews;
- (bool)layoutTilesInMainThread;
- (void)layoutTilesNow;
- (void)layoutTilesNowForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutTilesNowOnWebThread;
- (void)lockTilingMode;
- (bool)logsTilingChanges;
- (unsigned int)maxTileCount;
- (void)removeAllNonVisibleTiles;
- (void)removeAllTiles;
- (void)removeForegroundTiles;
- (void)setAllowsPaintingAndScriptsWhilePanning:(bool)arg1;
- (void)setDrawsGrid:(bool)arg1;
- (void)setEditingTilingModeEnabled:(bool)arg1;
- (void)setInGesture:(int)arg1;
- (void)setKeepsZoomedOutTiles:(bool)arg1;
- (void)setLayoutTilesInMainThread:(bool)arg1;
- (void)setLogsTilingChanges:(bool)arg1;
- (void)setMaxTileCount:(unsigned int)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsLayout;
- (void)setTileDrawingEnabled:(bool)arg1;
- (void)setTileSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTilesOpaque:(bool)arg1;
- (void)setTilingArea:(int)arg1;
- (void)setTilingEnabled:(bool)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setWAKWindow:(id)arg1;
- (bool)tileDrawingEnabled;
- (struct CGSize { double x1; double x2; })tileSize;
- (bool)tilesOpaque;
- (int)tilingArea;
- (void)unlockTilingMode;
- (void)updateTilingMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (id)wakWindow;
- (void)willMoveToWindow:(id)arg1;

@end
