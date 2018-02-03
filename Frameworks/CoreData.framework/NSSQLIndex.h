/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLIndex : NSObject {
    NSMutableArray * _createStrings;
    NSMutableArray * _dropStrings;
    NSFetchIndexDescription * _indexDescription;
    NSSQLEntity * _sqlEntity;
    NSMutableArray * _updateStrings;
}

@property (readonly, retain) NSFetchIndexDescription *indexDescription;
@property (readonly, retain) NSSQLEntity *sqlEntity;

- (id)bulkUpdateStatementsForStore:(id)arg1;
- (id)createStatementsForStore:(id)arg1;
- (void)dealloc;
- (id)dropStatementsForStore:(id)arg1;
- (id)indexDescription;
- (id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)sqlEntity;

@end
