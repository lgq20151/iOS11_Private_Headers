/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSmartQuoteOptions : NSObject <NSCopying, NSSecureCoding> {
    NSString * _apostrophe;
    NSString * _leftDoubleQuote;
    NSString * _leftSingleQuote;
    NSString * _rightDoubleQuote;
    NSString * _rightSingleQuote;
}

@property (readonly, copy) NSString *apostrophe;
@property (readonly, copy) NSString *leftDoubleQuote;
@property (readonly, copy) NSString *leftSingleQuote;
@property (readonly, copy) NSString *rightDoubleQuote;
@property (readonly, copy) NSString *rightSingleQuote;

+ (id)smartQuoteOptionsForLocale:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)apostrophe;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeftSingleQuote:(id)arg1 rightSingleQuote:(id)arg2 apostrophe:(id)arg3 leftDoubleQuote:(id)arg4 rightDoubleQuote:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)leftDoubleQuote;
- (id)leftSingleQuote;
- (id)rightDoubleQuote;
- (id)rightSingleQuote;

@end
