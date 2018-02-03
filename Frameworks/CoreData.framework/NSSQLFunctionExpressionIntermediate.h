/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLFunctionExpressionIntermediate : NSSQLExpressionIntermediate

+ (bool)functionIsAcceptableAsAggregate:(id)arg1;

- (id)_generateArgumentStringForCollection:(id)arg1 inContext:(id)arg2;
- (id)_generateCorrelatedSubqueryStringWithSymbol:(id)arg1 forExpression:(id)arg2 inContext:(id)arg3;
- (id)_generateDistinctStringInContext:(id)arg1;
- (id)_generateLengthStringInContext:(id)arg1;
- (id)_generateMathStringWithSymbol:(id)arg1 inContext:(id)arg2;
- (id)_generateNowStringInContext:(id)arg1;
- (id)_generateRtreeIndexStringInContext:(id)arg1;
- (id)_generateSQLForCountInContext:(id)arg1;
- (id)_generateSelectForAggregateStringWithSymbol:(id)arg1 argument:(id)arg2 inContext:(id)arg3;
- (id)_generateType4SQLForSymbol:(id)arg1 inContext:(id)arg2;
- (id)_generateUncorrelatedSubqueryStringWithSymbol:(id)arg1 forAttribute:(id)arg2 inContext:(id)arg3;
- (id)generateSQLStringInContext:(id)arg1;
- (id)generateType1SQLString:(id)arg1 inContext:(id)arg2;
- (id)generateType2SQLString:(id)arg1 inContext:(id)arg2;
- (id)generateType3SQLString:(id)arg1 keypathOnly:(bool)arg2 inContext:(id)arg3;
- (bool)isFunctionScoped;

@end
