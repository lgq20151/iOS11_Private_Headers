/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateElement : NSObject <NSCopying, NSSecureCoding> {
    CAStateElement * _source;
    CALayer * _target;
}

@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, retain) CAStateElement *source;
@property (nonatomic) CALayer *target;

+ (void)CAMLParserStartElement:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (void)apply:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)foreachLayer:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPath;
- (bool)matches:(id)arg1;
- (id)save;
- (void)setSource:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)source;
- (id)target;
- (id)targetName;

@end
