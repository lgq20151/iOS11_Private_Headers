/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLRTreeIndexQueryIntermediate : NSSQLIntermediate {
    NSSQLEntity * _entity;
    NSExpression * _indexName;
    NSArray * _properties;
    NSArray * _ranges;
}

- (bool)_validateCollection:(id)arg1 context:(id)arg2;
- (bool)_validateExpression:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initForIndexNamed:(id)arg1 onEntity:(id)arg2 properties:(id)arg3 ranges:(id)arg4 inScope:(id)arg5;

@end
