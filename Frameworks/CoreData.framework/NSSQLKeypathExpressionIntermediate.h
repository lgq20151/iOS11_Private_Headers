/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate {
    bool  _substitutePK;
}

@property (nonatomic) bool substitutePK;

- (id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForProperty:(id)arg1 startEntity:(id)arg2 startAlias:(id)arg3 keypath:(id)arg4 inContext:(id)arg5;
- (id)_propertyDescriptionForKeypath:(id)arg1 startingAtEntity:(id)arg2 allowToMany:(bool)arg3 lastKeyVisited:(id*)arg4 inContext:(id)arg5;
- (id)_propertyDescriptionsForKeypath:(id)arg1 rootedAtEntity:(id)arg2 allowToMany:(bool)arg3 lastKeyVisited:(id*)arg4 inContext:(id)arg5;
- (id)generateSQLStringInContext:(id)arg1;
- (void)setSubstitutePK:(bool)arg1;
- (bool)substitutePK;

@end
