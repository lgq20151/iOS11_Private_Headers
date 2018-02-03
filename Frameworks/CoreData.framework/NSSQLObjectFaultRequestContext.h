/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLObjectFaultRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest * _fetchRequest;
    bool  _forConflictAnalysis;
    NSManagedObjectID * _objectID;
}

@property (nonatomic) bool forConflictAnalysis;
@property (nonatomic, readonly) NSManagedObjectID *objectID;

- (id)createFetchRequestContext;
- (void)dealloc;
- (void)executeRequestCore:(id*)arg1;
- (id)fetchRequest;
- (bool)forConflictAnalysis;
- (id)initWithObjectID:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (id)objectID;
- (void)setForConflictAnalysis:(bool)arg1;

@end
