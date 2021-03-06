/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSImagePreviewCell : UITableViewCell {
    UIView * _darkBackground;
    UILabel * _imageNameLabel;
    UIImageView * _imageViewOnDark;
    UIImageView * _imageViewOnLight;
    UIView * _lightBackground;
    UIImage * _previewImage;
}

@property (nonatomic, retain) NSString *imageName;
@property (nonatomic, retain) UIImage *previewImage;

+ (void)_getLeftFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 rightFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forImage:(id)arg3 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (double)heightForImage:(id)arg1;

- (void).cxx_destruct;
- (id)imageName;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)previewImage;
- (void)setImageName:(id)arg1;
- (void)setPreviewImage:(id)arg1;

@end
