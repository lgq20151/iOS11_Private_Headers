/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPaymentMethod : NSObject <INCacheableContainer, INPaymentMethodExport, NSCopying, NSSecureCoding> {
    INImage * _icon;
    NSString * _identificationHint;
    NSString * _name;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INImage *icon;
@property (nonatomic, readonly, copy) NSString *identificationHint;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) INImage *image;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long type;

+ (id)applePayPaymentMethod;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)identificationHint;
- (id)identifier;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 image:(id)arg3;
- (id)initWithType:(long long)arg1 name:(id)arg2 identificationHint:(id)arg3 icon:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)title;
- (long long)type;

@end
