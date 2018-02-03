/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSVariableAssignmentExpression : NSExpression {
    NSVariableExpression * _assignmentVariable;
    NSExpression * _subexpression;
}

+ (bool)supportsSecureCoding;

- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (id)assignmentVariable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (unsigned long long)hash;
- (id)initWithAssignmentExpression:(id)arg1 expression:(id)arg2;
- (id)initWithAssignmentVariable:(id)arg1 expression:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicateFormat;
- (id)subexpression;
- (id)variable;

@end
