/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray * _comparisonPredicateScopedItem;
    NSExpression * _effectiveLeftExpression;
    NSExpression * _effectiveRightExpression;
}

- (long long)_cfStringOptionsFromPredicateOptions:(unsigned long long)arg1;
- (id)_entityDestinationIfKeyOfSomeSort:(id)arg1;
- (id)_generateSQLBeginsWithStringInContext:(id)arg1;
- (id)_generateSQLBetweenStringInContext:(id)arg1;
- (id)_generateSQLBoundByStringInContext:(id)arg1;
- (id)_generateSQLContainmentStringInContext:(id)arg1;
- (id)_generateSQLEndsWithStringInContext:(id)arg1;
- (id)_generateSQLForConst:(id)arg1 inAttribute:(id)arg2 expression:(id)arg3 inContext:(id)arg4;
- (id)_generateSQLForConst:(id)arg1 inManyToMany:(id)arg2 expression:(id)arg3 inContext:(id)arg4;
- (id)_generateSQLForConst:(id)arg1 inToMany:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLForConstKeyArray:(id)arg1 targetEntity:(id)arg2 reboundFrom:(id)arg3 inContext:(id)arg4;
- (id)_generateSQLForMatchingOperator:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForString:(id)arg1 expressionPath:(id)arg2 wildStart:(bool)arg3 wildEnd:(bool)arg4 allowToMany:(bool)arg5 inContext:(id)arg6;
- (id)_generateSQLForWildSubStringForGlob:(id)arg1 wildStart:(bool)arg2 wildEnd:(bool)arg3;
- (id)_generateSQLSubstringWildStart:(bool)arg1 wildEnd:(bool)arg2 inContext:(id)arg3;
- (id)_generateSQLType1InContext:(id)arg1;
- (id)_generateSQLType2InContext:(id)arg1;
- (id)_generateSQLType3InContext:(id)arg1;
- (bool)_isNilExpression:(id)arg1;
- (id)_lastScopedItem;
- (id)_prefetchSourceOfUnidirectionalVirtualInverse:(id)arg1;
- (id)_sqlTokenForPredicateOperator:(unsigned long long)arg1 inContext:(id)arg2;
- (id)_upperBoundSearchStringForString:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2;
- (bool)isWhereScoped;

@end
