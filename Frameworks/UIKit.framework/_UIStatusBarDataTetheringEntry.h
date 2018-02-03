/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarDataTetheringEntry : _UIStatusBarDataEntry {
    long long  _connectionCount;
}

@property (nonatomic) long long connectionCount;

- (id)_ui_descriptionBuilder;
- (long long)connectionCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setConnectionCount:(long long)arg1;

@end
