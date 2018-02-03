/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPTag : NSObject <NSCopying, NSSecureCoding> {
    int  _color;
    NSString * _label;
}

@property (nonatomic, readonly) int color;
@property (nonatomic, readonly) NSString *label;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 color:(int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTag:(id)arg1;
- (id)label;
- (long long)localizedCompare:(id)arg1;
- (long long)localizedStandardCompare:(id)arg1;

@end
