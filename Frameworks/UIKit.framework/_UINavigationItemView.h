/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationItemView : UIView {
    bool  __isFadingInFromCustomAlpha;
    UIView * _bottomCrossView;
    bool  _customFontSet;
    bool  _isCrossFading;
    UINavigationItem * _item;
    UILabel * _label;
    struct CGSize { 
        double width; 
        double height; 
    }  _titleSize;
    UIView * _topCrossView;
}

@property (setter=_setFadingInFromCustomAlpha:, nonatomic) bool _isFadingInFromCustomAlpha;

- (void).cxx_destruct;
- (void)_adjustLabelTrackingIfNecessary;
- (void)_cleanUpCrossView;
- (void)_crossFadeHiddingButton:(bool)arg1;
- (id)_currentTextColorForBarStyle:(long long)arg1;
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })_currentTextShadowOffsetForBarStyle:(long long)arg1;
- (id)_defaultFont;
- (bool)_isFadingInFromCustomAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelFrame;
- (void)_prepareCrossViewsForNewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_resetTitleSize;
- (void)_setFadingInFromCustomAlpha:(bool)arg1;
- (void)_setFont:(id)arg1;
- (void)_setLineBreakMode:(long long)arg1;
- (struct CGSize { double x1; double x2; })_titleSize;
- (double)_titleYAdjustmentCustomization;
- (void)_updateLabel;
- (void)_updateLabelColor;
- (void)_updateLabelContents;
- (bool)_useSilverLookForBarStyle:(long long)arg1;
- (id)description;
- (id)font;
- (id)initWithNavigationItem:(id)arg1;
- (void)layoutSubviews;
- (id)navigationItem;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitleAutoresizesToFit:(bool)arg1;
- (id)title;
- (bool)titleAutoresizesToFit;
- (void)traitCollectionDidChange:(id)arg1;

@end
