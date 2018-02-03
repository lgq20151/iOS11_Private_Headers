/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNLocalizedString : NSString {
    NSArray * _arguments;
    NSString * _key;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSArray *arguments;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSString *value;

+ (id)localizedStringForKey:(id)arg1 arguments:(id)arg2 value:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_allowsDirectEncoding;
- (id)_initWithKey:(id)arg1 arguments:(id)arg2 value:(id)arg3;
- (id)arguments;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (unsigned long long)length;
- (id)un_localizedStringArguments;
- (id)un_localizedStringKey;
- (id)un_localizedStringValue;
- (id)value;

@end
