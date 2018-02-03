/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSTruePredicate : NSPredicate

+ (bool)_allowsEvaluation;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)defaultInstance;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicateFormat;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
