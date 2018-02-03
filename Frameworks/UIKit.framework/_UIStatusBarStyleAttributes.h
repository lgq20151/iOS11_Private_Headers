/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarStyleAttributes : NSObject <NSCopying, NSSecureCoding> {
    long long  _effectiveLayoutDirection;
    UIFont * _emphasizedFont;
    UIFont * _font;
    UIColor * _imageDimmedTintColor;
    NSArray * _imageNamePrefixes;
    UIColor * _imageTintColor;
    long long  _mode;
    long long  _style;
    UIColor * _textColor;
    UITraitCollection * _traitCollection;
}

@property (nonatomic) long long effectiveLayoutDirection;
@property (nonatomic, copy) UIFont *emphasizedFont;
@property (nonatomic, copy) UIFont *font;
@property (nonatomic, copy) UIColor *imageDimmedTintColor;
@property (nonatomic, copy) NSArray *imageNamePrefixes;
@property (nonatomic, copy) UIColor *imageTintColor;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) long long style;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic, copy) UITraitCollection *traitCollection;

+ (id)overriddenStyleAttributes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)effectiveLayoutDirection;
- (id)emphasizedFont;
- (void)encodeWithCoder:(id)arg1;
- (id)font;
- (id)imageDimmedTintColor;
- (id)imageNamePrefixes;
- (id)imageTintColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatusBar:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)mode;
- (void)setEffectiveLayoutDirection:(long long)arg1;
- (void)setEmphasizedFont:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setImageDimmedTintColor:(id)arg1;
- (void)setImageNamePrefixes:(id)arg1;
- (void)setImageTintColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (long long)style;
- (id)styleAttributesWithOverrides:(id)arg1;
- (id)textColor;
- (id)traitCollection;

@end
