/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDragBadge : UIView {
    UIImageView * _imageView;
    long long  _itemCount;
    UILabel * _label;
    long long  _style;
}

@property (nonatomic, readonly) UIImageView *_imageView;
@property (nonatomic, readonly) UILabel *_label;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } anchorPointForAlignment;
@property (nonatomic) long long itemCount;
@property (nonatomic) long long style;

- (id)_imageView;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_label;
- (void)_updateForStyle;
- (void)_updateLabelTextFromItemCount;
- (struct CGPoint { double x1; double x2; })anchorPointForAlignment;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)itemCount;
- (void)layoutSubviews;
- (void)setItemCount:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
