/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewPresentationPlatterView : UIView {
    _UIPreviewPresentationEffectView * _contentClipView;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentClippingSize;
    _UIPreviewPresentationEffectView * _contentEffectView;
    UIView * _contentShadowView;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    UIView * _contentTransformView;
    UIView * _contentView;
    bool  _dropShadowEnabled;
}

@property (nonatomic) double blurRadius;
@property (nonatomic, retain) _UIPreviewPresentationEffectView *contentClipView;
@property (nonatomic) struct CGSize { double x1; double x2; } contentClippingSize;
@property (nonatomic, retain) _UIPreviewPresentationEffectView *contentEffectView;
@property (nonatomic, retain) UIView *contentShadowView;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) UIView *contentTransformView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) double cornerRadius;
@property (getter=isDropShadowEnabled, nonatomic) bool dropShadowEnabled;

- (void).cxx_destruct;
- (bool)_shouldEnclosedScrollViewFlashIndicators:(id)arg1;
- (double)blurRadius;
- (id)contentClipView;
- (struct CGSize { double x1; double x2; })contentClippingSize;
- (id)contentEffectView;
- (id)contentShadowView;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentTransformView;
- (id)contentView;
- (double)cornerRadius;
- (id)initWithContentView:(id)arg1;
- (bool)isDropShadowEnabled;
- (void)layoutSubviews;
- (void)setBlurRadius:(double)arg1;
- (void)setContentClipView:(id)arg1;
- (void)setContentClippingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentEffectView:(id)arg1;
- (void)setContentShadowView:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentTransformView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDropShadowEnabled:(bool)arg1;

@end
