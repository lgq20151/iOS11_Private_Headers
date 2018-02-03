/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISwappableImageView : UIImageView {
    UIImage * _alternateImage;
    long long  _barButtonItemStyle;
    bool  _bezel;
    int  _bezelStyle;
    UIImage * _image;
    bool  _showAlternate;
    bool  _updateImage;
}

- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2 barStyle:(long long)arg3 barButtonItemStyle:(long long)arg4 tintColor:(id)arg5 bezel:(bool)arg6;
- (void)setBezelStyleForBarStyle:(long long)arg1 tintColor:(id)arg2;
- (void)setBezelStyleForBarStyle:(long long)arg1 tintColor:(id)arg2 iconTintColor:(id)arg3 iconTintColorDidChange:(bool)arg4;
- (void)setImage:(id)arg1;
- (void)showAlternateImage:(bool)arg1;
- (void)updateImageIfNeeded;
- (void)updateImageIfNeededWithTintColor:(id)arg1;

@end
