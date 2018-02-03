/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIToolbarVisualProviderLegacyIOS : _UIToolbarVisualProvider {
    NSString * _backdropViewLayerGroupName;
    UIView * _barBackgroundView;
    UIView * _customBackgroundView;
}

@property (nonatomic, retain) _UIBarBackground *_barBackground;
@property (getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:, nonatomic, retain) NSString *backdropViewLayerGroupName;

- (void).cxx_destruct;
- (id)_backdropViewLayerGroupName;
- (id)_barBackground;
- (void)_createBarBackground;
- (void)_createViewsForItems:(id)arg1;
- (id)_currentCustomBackground;
- (id)_currentCustomBackgroundRespectOversize_legacy:(bool*)arg1;
- (double)_edgeMarginForBorderedItem:(bool)arg1 isText:(bool)arg2;
- (id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(bool)arg3 actuallyRepositionButtons:(bool)arg4;
- (id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id*)arg2 withHitRects:(id*)arg3 buttonIndexes:(id*)arg4 textButtonIndexes:(id*)arg5;
- (void)_setBackdropViewLayerGroupName:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundFrame;
- (id)currentBackgroundView;
- (void)customViewChangedForButtonItem:(id)arg1;
- (struct CGSize { double x1; double x2; })defaultSizeForOrientation:(long long)arg1;
- (void)drawBackgroundViewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)positionToolbarButtonsAndResetFontScaleAdjustment:(bool)arg1;
- (void)setCustomBackgroundView:(id)arg1;
- (void)set_barBackground:(id)arg1;
- (bool)toolbarIsSmall;
- (void)updateBarBackground;
- (void)updateBarBackgroundSize;
- (void)updateBarForStyle:(long long)arg1;
- (void)updateItemsForNewFrame:(id)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(bool)arg3;

@end