/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutAnchor : NSObject <NSCoding, NSCopying> {
    long long  _attr;
    id  _cachedReferenceItems;
    NSString * _name;
    id  _referenceItem;
    id  _reserved;
    unsigned int  _reserved3;
    unsigned int  _type;
    NSISVariable * _variable;
}

+ (id)_anchorForItem:(id)arg1 attribute:(long long)arg2;
+ (id)anchorNamed:(id)arg1 inItem:(id)arg2;
+ (id)anchorNamed:(id)arg1 inItem:(id)arg2 symbolicAttribute:(long long)arg3;
+ (id)anchorWithItem:(id)arg1 attribute:(long long)arg2;
+ (id)anchorWithName:(id)arg1 forReferenceView:(id)arg2;
+ (id)anchorWithName:(id)arg1 forReferenceView:(id)arg2 symbolicAttribute:(long long)arg3;
+ (id)layoutAnchorWithItem:(id)arg1 attribute:(long long)arg2;
+ (id)layoutAnchorWithName:(id)arg1 forReferenceView:(id)arg2;

- (void)_accumulateReferenceLayoutItemsIntoTable:(id)arg1;
- (long long)_anchorType;
- (id)_anchorVariable;
- (int)_anchorVariableRestriction;
- (id)_constituentAnchors;
- (long long)_constraintAttribute;
- (id)_constraintItem;
- (id)_dependentVariables;
- (id)_equationDescriptionInParent;
- (id)_equationDescriptionLegendEntries;
- (id)_expressionForValueInItem:(id)arg1;
- (id)_expressionInContext:(/* Warning: unhandled struct encoding: '{?=q@}' */ struct { long long x1; id x2; })arg1;
- (id)_expressionInDefaultContext;
- (bool)_isReferencedByConstraint:(id)arg1;
- (id)_nearestAncestorLayoutItem;
- (long long)_proxiedAttribute;
- (id)_proxiedItem;
- (id)_referenceItem;
- (id)_referenceView;
- (id)_referencedLayoutItems;
- (id)_referencingConstraints;
- (double)_valueInEngine:(id)arg1;
- (id)_variableName;
- (id)anchorWithName:(id)arg1;
- (id)anchorWithName:(id)arg1 referenceItem:(id)arg2 symbolicAttribute:(long long)arg3;
- (id)constraintEqualToAnchor:(id)arg1;
- (id)constraintEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)constraintsAffectingLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)equationDescription;
- (bool)hasAmbiguousLayout;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndependentVariableName:(id)arg1 item:(id)arg2 symbolicAttribute:(long long)arg3;
- (id)initWithItem:(id)arg1 attribute:(long long)arg2;
- (id)initWithName:(id)arg1 referenceItem:(id)arg2 symbolicAttribute:(long long)arg3;
- (bool)isCompatibleWithAnchor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)item;
- (id)name;
- (bool)nsli_lowerIntoExpression:(id)arg1 withCoefficient:(double)arg2 forConstraint:(id)arg3;
- (id)observableValueInItem:(id)arg1;
- (id)ruleEqualToAnchor:(id)arg1;
- (id)ruleEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)ruleEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4;
- (id)ruleEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 priority:(float)arg4 identifier:(id)arg5;
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1;
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4;
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 priority:(float)arg4 identifier:(id)arg5;
- (id)ruleLessThanOrEqualToAnchor:(id)arg1;
- (id)ruleLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;
- (id)ruleLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4;
- (id)ruleLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 priority:(float)arg4 identifier:(id)arg5;
- (id)rulesAffectingLayout;
- (bool)validateOtherAttribute:(long long)arg1;
- (double)valueInItem:(id)arg1;

@end
