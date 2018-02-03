/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSExpression : NSObject <NSCopying, NSSecureCoding> {
    struct _expressionFlags { 
        unsigned int _evaluationBlocked : 1; 
        unsigned int _reservedExpressionFlags : 31; 
    }  _expressionFlags;
    unsigned long long  _expressionType;
    unsigned int  reserved;
}

@property (readonly, copy) NSArray *arguments;
@property (readonly, retain) id collection;
@property (readonly, retain) id constantValue;
@property (readonly, copy) id /* block */ expressionBlock;
@property (readonly) unsigned long long expressionType;
@property (readonly, copy) NSExpression *falseExpression;
@property (readonly, copy) NSString *function;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSExpression *leftExpression;
@property (readonly, copy) NSExpression *operand;
@property (readonly, copy) NSPredicate *predicate;
@property (readonly, copy) NSExpression *rightExpression;
@property (readonly, copy) NSExpression *trueExpression;
@property (readonly, copy) NSString *variable;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_newKeyPathExpressionForString:(id)arg1;
+ (id)expressionForAggregate:(id)arg1;
+ (id)expressionForAnyKey;
+ (id)expressionForBlock:(id /* block */)arg1 arguments:(id)arg2;
+ (id)expressionForConditional:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3;
+ (id)expressionForConstantValue:(id)arg1;
+ (id)expressionForEvaluatedObject;
+ (id)expressionForFunction:(id)arg1 arguments:(id)arg2;
+ (id)expressionForFunction:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3;
+ (id)expressionForIntersectSet:(id)arg1 with:(id)arg2;
+ (id)expressionForKeyPath:(id)arg1;
+ (id)expressionForMinusSet:(id)arg1 with:(id)arg2;
+ (id)expressionForSubquery:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3;
+ (id)expressionForSymbolicString:(id)arg1;
+ (id)expressionForTernaryWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3;
+ (id)expressionForUnionSet:(id)arg1 with:(id)arg2;
+ (id)expressionForVariable:(id)arg1;
+ (id)expressionForVariableNameAssignment:(id)arg1 expression:(id)arg2;
+ (id)expressionWithFormat:(id)arg1;
+ (id)expressionWithFormat:(id)arg1 argumentArray:(id)arg2;
+ (id)expressionWithFormat:(id)arg1 arguments:(char *)arg2;
+ (bool)supportsSecureCoding;

- (bool)_allowsEvaluation;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (bool)_shouldUseParensWithDescription;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (id)arguments;
- (id)collection;
- (id)constantValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)expressionBlock;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)falseExpression;
- (id)function;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpressionType:(unsigned long long)arg1;
- (id)keyPath;
- (id)leftExpression;
- (id)operand;
- (id)predicate;
- (id)predicateFormat;
- (id)rightExpression;
- (SEL)selector;
- (id)subexpression;
- (id)trueExpression;
- (id)variable;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (id)minimalFormInContext:(id)arg1;

@end
