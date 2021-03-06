/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSImagePreviewRowTableViewCell : PTSRowTableViewCell {
    UIView * _darkBackground;
    UIImageView * _imageViewOnDark;
    UIImageView * _imageViewOnLight;
    UIView * _lightBackground;
}

+ (void)_getCellHeight:(double*)arg1 leftFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 rightFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 forImage:(id)arg4 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
+ (double)cellHeightForRow:(id)arg1;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateDisplayedValue;

@end
