/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKEmbossedInkColorButton : UIButton <PKInkColorButton> {
    UIColor * _color;
    UIImageView * _colorImageView;
    UIImageView * _embossImageView;
    bool  _isCompact;
    bool  _isUsedOnDarkBackground;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UIImageView *colorImageView;
@property (nonatomic, retain) UIImageView *embossImageView;
@property (nonatomic) bool isCompact;
@property (nonatomic) bool isUsedOnDarkBackground;

+ (id)buttonWithColor:(id)arg1 isCompact:(bool)arg2;
+ (id)colorFillImageIsCompact:(bool)arg1;
+ (id)embossOverlayImageForColor:(id)arg1 selected:(bool)arg2 isCompact:(bool)arg3;
+ (bool)isColorBlack:(id)arg1;
+ (bool)isColorWhite:(id)arg1;

- (void).cxx_destruct;
- (id)color;
- (id)colorImageView;
- (id)embossImageView;
- (id)initWithColor:(id)arg1 isCompact:(bool)arg2;
- (bool)isCompact;
- (bool)isUsedOnDarkBackground;
- (void)layoutSubviews;
- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setColor:(id)arg1;
- (void)setColorImageView:(id)arg1;
- (void)setEmbossImageView:(id)arg1;
- (void)setIsCompact:(bool)arg1;
- (void)setIsUsedOnDarkBackground:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
