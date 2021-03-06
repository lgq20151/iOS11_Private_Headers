/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISUIActivityImageConfiguration : NSObject <NSSecureCoding> {
    UIImage * _image;
    NSString * _imageCreationBundleIdentifier;
    bool  _isSettingsVariant;
}

@property (nonatomic) bool isSettingsVariant;

+ (id)configurationWithDefaultImage;
+ (id)configurationWithImageSpecifiedByBundleIdentifier:(id)arg1;
+ (id)configurationWithImageSpecifiedBySpecificImage:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 imageCreationBundleIdentifier:(id)arg2 isSettingsVariant:(bool)arg3;
- (bool)isSettingsVariant;
- (id)loadedActivityImage;
- (void)setIsSettingsVariant:(bool)arg1;

@end
