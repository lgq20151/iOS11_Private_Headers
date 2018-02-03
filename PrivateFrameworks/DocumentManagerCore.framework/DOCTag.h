/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

@interface DOCTag : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    long long  _itemCount;
    long long  _labelIndex;
    NSNumber * _sidebarPinned;
    NSNumber * _sidebarVisible;
    long long  _type;
}

@property (nonatomic, readonly) UIColor *displayColor;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) long long itemCount;
@property (nonatomic, readonly) long long labelIndex;
@property (nonatomic, readonly) NSNumber *sidebarPinned;
@property (nonatomic, readonly) NSNumber *sidebarVisible;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;
+ (id)tagColorWithLabelIndex:(long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayColor;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)iCloudTagAttributes;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 labelIndex:(long long)arg2 type:(long long)arg3;
- (id)initWithDisplayName:(id)arg1 labelIndex:(long long)arg2 type:(long long)arg3 itemCount:(long long)arg4 sidebarVisible:(id)arg5 sidebarPinned:(id)arg6;
- (id)initWithICloudTagAttributes:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTag:(id)arg1;
- (long long)itemCount;
- (long long)labelIndex;
- (void)mergeWithTag:(id)arg1 options:(long long)arg2;
- (id)sidebarPinned;
- (id)sidebarVisible;
- (long long)type;

@end
