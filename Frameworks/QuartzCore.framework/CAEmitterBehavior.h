/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAEmitterBehavior : NSObject <NSSecureCoding> {
    void * _attr;
    void * _cache;
    unsigned int  _flags;
    NSString * _name;
    unsigned int  _type;
}

@property (getter=isEnabled) bool enabled;
@property (copy) NSString *name;
@property (readonly) NSString *type;

+ (void)CAMLParserStartElement:(id)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)behaviorTypes;
+ (id)behaviorWithType:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1;
- (bool)isEnabled;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (void)setEnabled:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)type;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end
