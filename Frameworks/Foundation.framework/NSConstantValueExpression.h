/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConstantValueExpression : NSExpression {
    id  constantValue;
}

+ (bool)supportsSecureCoding;

- (id)constantValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionValueWithObject:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicateFormat;

@end
