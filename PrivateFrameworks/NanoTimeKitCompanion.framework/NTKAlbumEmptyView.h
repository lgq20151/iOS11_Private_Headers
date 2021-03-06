/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAlbumEmptyView : UIView {
    UILabel * _bodyLabel;
    NSString * _bodyLabelText;
    UILabel * _headerLabel;
    UIImageView * _iconImageView;
}

@property (nonatomic, retain) NSString *bodyLabelText;

- (void).cxx_destruct;
- (id)bodyLabelText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBodyLabelText:(id)arg1;

@end
