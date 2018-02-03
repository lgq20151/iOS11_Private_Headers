/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActivityGroupActivityCell : UICollectionViewCell {
    UIImageView * _highlightedImageView;
    UIImageView * _imageView;
    _UIActivityGroupActivityCellTitleLabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *highlightedImageView;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) _UIActivityGroupActivityCellTitleLabel *titleLabel;

+ (struct CGSize { double x1; double x2; })preferredSizeForSheetWidth:(double)arg1 sizeCategory:(id)arg2 titleLabelText:(id)arg3 screenScale:(double)arg4;

- (void).cxx_destruct;
- (id)draggingView;
- (id)highlightedImageView;
- (id)imageView;
- (void)initHighlightedImageViewIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedImageView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateHighlightedImageViewIfNeeded;

@end
