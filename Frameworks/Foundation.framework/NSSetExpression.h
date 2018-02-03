/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSetExpression : NSExpression {
    NSExpression * _left;
    NSExpression * _right;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)leftExpression;
- (id)predicateFormat;
- (id)rightExpression;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (id)minimalFormInContext:(id)arg1;

@end
