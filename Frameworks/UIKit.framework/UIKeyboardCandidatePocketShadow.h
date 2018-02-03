/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidatePocketShadow : UICollectionReusableView {
    bool  _drawsShadow;
    bool  _shadowFadesToBottom;
    bool  _showsInDarkBackground;
}

@property (nonatomic) bool drawsShadow;
@property (nonatomic) bool shadowFadesToBottom;
@property (nonatomic) bool showsInDarkBackground;

+ (id)leftShadowImage;
+ (double)widthWithShadow:(bool)arg1;

- (void)applyLayoutAttributes:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawsShadow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDrawsShadow:(bool)arg1;
- (void)setShadowFadesToBottom:(bool)arg1;
- (void)setShowsInDarkBackground:(bool)arg1;
- (bool)shadowFadesToBottom;
- (bool)showsInDarkBackground;

@end
