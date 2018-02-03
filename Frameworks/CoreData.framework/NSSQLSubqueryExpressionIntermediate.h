/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate {
    NSSQLFetchIntermediate * _fetchIntermediate;
    NSSQLEntity * _governingEntityForVariable;
    bool  _hasTrailingFunction;
    bool  _isCount;
    NSMutableArray * _keypathsToPromote;
    bool  _onlyTrailIsCount;
    NSString * _selectEntityAlias;
    NSMutableString * _selectFromCorrelationTarget;
    NSSQLEntity * _selectFromEntity;
    bool  _subqueryHasTruePredicate;
    NSString * _targetAlias;
    NSSQLColumn * _targetColumn;
    NSExpression * _trailingKeypath;
    bool  _useDistinct;
    NSString * _variableAlias;
    NSSQLColumn * _variableColumn;
    NSExpression * _variableExpression;
}

- (void)_createCollectionJoinsForFetchInContext:(id)arg1;
- (void)_createSelectClauseInFetchWithContext:(id)arg1;
- (id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (bool)_isKeypathScopedToSubquery:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (void)_setVariableColumn:(id)arg1;
- (bool)canDoDirectJoinGivenPredicate:(id)arg1;
- (void)dealloc;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)initWithExpression:(id)arg1 trailingKeypath:(id)arg2 inScope:(id)arg3;
- (bool)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (void)selectDistinct;

@end
