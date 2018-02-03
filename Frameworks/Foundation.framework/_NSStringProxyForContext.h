/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSStringProxyForContext : NSString {
    NSFormatter * _formatter;
    <NSCopying><NSSecureCoding><NSObject> * _item;
    NSString * _string;
}

@property (copy) NSFormatter *formatter;
@property (copy) id item;
@property (copy) NSString *string;

- (id)_dynamicContextEvaluation:(id)arg1 patternString:(id)arg2;
- (void)_retainFormatter:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)formatter;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)item;
- (unsigned long long)length;
- (void)setFormatter:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;

@end
