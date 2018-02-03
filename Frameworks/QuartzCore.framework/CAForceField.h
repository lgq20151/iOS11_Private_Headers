/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAForceField : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _enabled;
    CAValueFunction * _function;
    CALayer * _layer;
    NSString * _name;
}

@property (getter=isEnabled) bool enabled;
@property (retain) CAValueFunction *function;
@property (retain) CALayer *layer;
@property (copy) NSString *name;

+ (void)CAMLParserStartElement:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)forceField;
+ (bool)supportsSecureCoding;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)function;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)layer;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (void)setEnabled:(bool)arg1;
- (void)setFunction:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end