/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateAddElement : CAStateElement {
    id  _beforeObject;
    NSString * _keyPath;
    id  _object;
}

@property (nonatomic, retain) id beforeObject;
@property (nonatomic, copy) NSString *keyPath;
@property (nonatomic, retain) id object;

+ (bool)supportsSecureCoding;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (void)apply:(id)arg1;
- (id)beforeObject;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)foreachLayer:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPath;
- (bool)matches:(id)arg1;
- (id)object;
- (void)setBeforeObject:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setObject:(id)arg1;

@end
