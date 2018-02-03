/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TISmartPunctuationOptions : NSObject <NSCopying, NSSecureCoding> {
    NSString * _apostrophe;
    NSString * _leftDoubleQuote;
    NSString * _leftSingleQuote;
    NSLocale * _locale;
    NSString * _rightDoubleQuote;
    NSString * _rightSingleQuote;
}

@property (nonatomic, copy) NSString *apostrophe;
@property (nonatomic, copy) NSString *leftDoubleQuote;
@property (nonatomic, copy) NSString *leftSingleQuote;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, copy) NSString *rightDoubleQuote;
@property (nonatomic, copy) NSString *rightSingleQuote;

+ (id)smartPunctuationOptionsForLocale:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_generateDataFromLocale;
- (id)apostrophe;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)leftDoubleQuote;
- (id)leftSingleQuote;
- (id)locale;
- (id)rightDoubleQuote;
- (id)rightSingleQuote;
- (void)setApostrophe:(id)arg1;
- (void)setLeftDoubleQuote:(id)arg1;
- (void)setLeftSingleQuote:(id)arg1;
- (void)setRightDoubleQuote:(id)arg1;
- (void)setRightSingleQuote:(id)arg1;

@end
