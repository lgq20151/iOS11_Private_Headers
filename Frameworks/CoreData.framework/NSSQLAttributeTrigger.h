/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLAttributeTrigger : NSObject <NSSQLAttributeExtension> {
    NSSQLAttribute * _attribute;
    NSArray * _destinationAttributes;
    NSSQLEntity * _destinationEntity;
    NSSQLEntity * _entity;
    NSArray * _insertSQLStrings;
    NSMutableArray * _mBulkChangeStrings;
    NSMutableString * _mColumnChangedClause;
    NSMutableString * _mNewMatchingClause;
    NSMutableString * _mOfClause;
    NSMutableString * _mOldMatchingClause;
    NSMutableArray * _mSqlDropStrings;
    NSMutableString * _mToManyDecrementWhenClause;
    NSMutableString * _mToManyIncrementWhenClause;
    NSMutableString * _mToManyInnerFetchWhereClause;
    NSPredicate * _predicate;
    NSString * _predicateString;
    NSSQLRelationship * _relationship;
}

@property (readonly) NSSQLAttribute *attribute;
@property (nonatomic, readonly) NSArray *bulkUpdateSQLStrings;
@property (readonly) NSString *columnChangedClause;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *destinationAttributes;
@property (readonly) NSSQLEntity *destinationEntity;
@property (nonatomic, readonly) NSArray *dropSQLStrings;
@property (readonly) NSSQLEntity *entity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *insertSQLStrings;
@property (readonly) NSString *newMatchingClause;
@property (readonly) NSString *ofClause;
@property (readonly) NSString *oldMatchingClause;
@property (readonly) NSPredicate *predicate;
@property (readonly) NSString *predicateString;
@property (readonly) NSSQLRelationship *relationship;
@property (readonly) Class superclass;
@property (readonly) NSString *toManyDecrementWhenClause;
@property (readonly) NSString *toManyIncrementWhenClause;
@property (readonly) NSString *toManyInnerFetchWhereClause;

- (id)attribute;
- (id)bulkUpdateSQLStrings;
- (id)columnChangedClause;
- (id)createSQLStrings:(id*)arg1;
- (void)dealloc;
- (id)destinationAttributes;
- (id)destinationEntity;
- (id)dropSQLStrings;
- (id)entity;
- (id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3;
- (id)insertSQLStrings;
- (id)inverseOperatorSymbolForOperator:(id)arg1;
- (bool)isEqualToExtension:(id)arg1;
- (bool)isSupportedOperatorType:(unsigned long long)arg1;
- (id)newMatchingClause;
- (id)ofClause;
- (id)oldMatchingClause;
- (bool)parseTriggerPredicateError:(id*)arg1;
- (id)predicate;
- (id)predicateString;
- (id)relationship;
- (id)toManyDecrementWhenClause;
- (id)toManyIncrementWhenClause;
- (id)toManyInnerFetchWhereClause;
- (bool)validate:(id*)arg1;
- (bool)validateComparisonPredicate:(id)arg1 error:(id*)arg2;
- (bool)validatePredicate:(id)arg1 error:(id*)arg2;

@end
