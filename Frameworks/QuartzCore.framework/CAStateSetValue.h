/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateSetValue : CAStateElement {
    NSString * _keyPath;
    id  _value;
}

@property (nonatomic, copy) NSString *keyPath;
@property (nonatomic, retain) id value;

+ (bool)supportsSecureCoding;

- (id)CAMLTypeForKey:(id)arg1;
- (void)apply:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)foreachLayer:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPath;
- (bool)matches:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
