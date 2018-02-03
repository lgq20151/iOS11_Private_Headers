/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAnimatedImage : UIImage {
    double  _duration;
    NSArray * _images;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(bool)arg9;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectInPixels;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentStretchInPixels;
- (id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12;
- (void)_flipImageOrientationHorizontally;
- (id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2;
- (id)_imageWithStylePresets:(id)arg1 withTintColor:(id)arg2;
- (id)_initWithOtherImage:(id)arg1;
- (bool)_isResizable;
- (bool)_isTiledWhenStretchedToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_selectedTabBarItemImageWithTintColor:(id)arg1 metrics:(long long)arg2 style:(long long)arg3 forScreenScale:(double)arg4;
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setAlwaysStretches:(bool)arg1;
- (struct CGSize { double x1; double x2; })_sizeWithHairlineThickening:(bool)arg1 renderingEffects:(unsigned long long)arg2 forTraitCollection:(id)arg3;
- (id)_unselectedTabBarItemImageWithTintColor:(id)arg1 metrics:(long long)arg2 style:(long long)arg3 forScreenScale:(double)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })capInsets;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)images;
- (id)initWithCoder:(id)arg1;
- (id)initWithImages:(id)arg1 duration:(double)arg2;
- (bool)isEqual:(id)arg1;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 resizingMode:(long long)arg2;
- (long long)resizingMode;

@end
