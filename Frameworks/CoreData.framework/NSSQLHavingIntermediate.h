/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLHavingIntermediate : NSSQLIntermediate {
    NSSQLWhereIntermediate * _whereClause;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;
- (bool)isHavingScoped;

@end
