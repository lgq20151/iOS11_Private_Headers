/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBThemedView : UIView <UIKBCacheableView> {
    bool  _active;
    CALayer * _background;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cacheInsets;
    CALayer * _leftBorder;
    bool  _lightKeyboard;
    CALayer * _rightBorder;
    bool  _showsLeftBorder;
    bool  _showsRightBorder;
    bool  _showsTopAndBottomBorders;
    int  _style;
    bool  _usePersistentCaching;
}

@property (nonatomic) bool active;
@property (nonatomic, readonly) bool cacheDeferable;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cacheInsets;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) double cachedWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool keepNonPersistent;
@property (nonatomic) bool showsLeftBorder;
@property (nonatomic) bool showsRightBorder;
@property (nonatomic) bool showsTopAndBottomBorders;
@property (nonatomic) int style;
@property (readonly) Class superclass;
@property (nonatomic) bool usePersistentCaching;

- (bool)_canDrawContent;
- (bool)_hasInsets;
- (void)_populateLayer:(id)arg1 withContents:(id)arg2;
- (void)_setRenderConfig:(id)arg1;
- (bool)active;
- (id)borderFilterTypeForCurrentStyle;
- (bool)cacheDeferable;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cacheInsets;
- (id)cacheKey;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (double)cachedWidth;
- (void)didMoveToWindow;
- (void)displayLayer:(id)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(int)arg2;
- (bool)keepNonPersistent;
- (void)layoutSubviews;
- (void)setActive:(bool)arg1;
- (void)setCacheInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShowsLeftBorder:(bool)arg1;
- (void)setShowsRightBorder:(bool)arg1;
- (void)setShowsTopAndBottomBorders:(bool)arg1;
- (void)setStyle:(int)arg1;
- (void)setUsePersistentCaching:(bool)arg1;
- (bool)showsLeftBorder;
- (bool)showsRightBorder;
- (bool)showsTopAndBottomBorders;
- (int)style;
- (id)traitsForCurrentStyle;
- (bool)usePersistentCaching;

@end
