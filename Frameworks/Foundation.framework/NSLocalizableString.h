/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLocalizableString : NSString {
    NSString * _developmentLanguageString;
    NSString * _stringsFileKey;
}

@property (readonly, copy) NSString *developmentLanguageString;
@property (readonly, copy) NSString *stringsFileKey;

+ (id)localizableStringWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2;

- (id)awakeAfterUsingCoder:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)developmentLanguageString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2;
- (unsigned long long)length;
- (void)setDevelopmentLanguageString:(id)arg1;
- (void)setStringsFileKey:(id)arg1;
- (id)stringsFileKey;

@end
