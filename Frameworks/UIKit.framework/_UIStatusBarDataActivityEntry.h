/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarDataActivityEntry : _UIStatusBarDataEntry {
    NSString * _displayId;
    long long  _type;
}

@property (nonatomic, copy) NSString *displayId;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayId;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDisplayId:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
