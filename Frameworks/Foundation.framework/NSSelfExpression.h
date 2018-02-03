/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSelfExpression : NSExpression

+ (bool)_allowsEvaluation;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)defaultInstance;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)_initPrivate;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicateFormat;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
