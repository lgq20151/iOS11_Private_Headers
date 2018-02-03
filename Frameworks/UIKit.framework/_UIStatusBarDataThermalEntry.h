/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarDataThermalEntry : _UIStatusBarDataEntry {
    long long  _color;
    bool  _sunlightMode;
}

@property (nonatomic) long long color;
@property (nonatomic) bool sunlightMode;

- (id)_ui_descriptionBuilder;
- (long long)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setColor:(long long)arg1;
- (void)setSunlightMode:(bool)arg1;
- (bool)sunlightMode;

@end
