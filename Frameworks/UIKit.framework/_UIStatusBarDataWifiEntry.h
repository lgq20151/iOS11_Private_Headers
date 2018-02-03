/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarDataWifiEntry : _UIStatusBarDataNetworkEntry {
    long long  _type;
}

@property (nonatomic) long long type;

- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
