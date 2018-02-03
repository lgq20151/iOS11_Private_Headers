/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISVariable : NSObject <NSCoding> {
    NSISEngine * _crossIndexEngine;
    NSMutableSet * _crossIndexSet;
    <NSISVariableDelegate> * _delegate;
    unsigned int  _ident;
}

@property <NSISVariableDelegate> *delegate;
@property (readonly) bool shouldBeMinimized;
@property (readonly) int valueRestriction;

+ (id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3;
+ (id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3;
+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3;
+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(bool)arg3 valueIsUserObservable:(bool)arg4;

- (double)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)markedConstraint;
- (bool)markedConstraintIsEligibleForIntegralizationAdjustment;
- (void)setDelegate:(id)arg1;
- (bool)shouldBeIntegral;
- (bool)shouldBeMinimized;
- (bool)valueIsUserVisible;
- (int)valueRestriction;

@end
