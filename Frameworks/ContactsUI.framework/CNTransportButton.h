/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNTransportButton : UIButton {
    UIColor * _glyphColor;
    UIImage * _image;
    bool  _showBackgroundPlatter;
    long long  _transportType;
}

@property (nonatomic, retain) UIColor *glyphColor;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool showBackgroundPlatter;
@property (nonatomic) long long transportType;

+ (id)transportButton;
+ (id)transportButtonWithType:(long long)arg1;

- (void).cxx_destruct;
- (void)_updateImageWithType:(long long)arg1;
- (id)glyphColor;
- (id)image;
- (id)imageNameForType:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setGlyphColor:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setShowBackgroundPlatter:(bool)arg1;
- (void)setTransportType:(long long)arg1;
- (bool)showBackgroundPlatter;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (long long)transportType;

@end
