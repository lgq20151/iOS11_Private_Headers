/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMigrationContext : NSObject {
    NSMutableDictionary * _byDestinationAssociationTable;
    NSMutableDictionary * _byMappingByDestinationAssociationTable;
    NSMutableDictionary * _byMappingBySourceAssociationTable;
    NSMutableDictionary * _bySourceAssociationTable;
    NSEntityMapping * _currentMapping;
    NSPropertyMapping * _currentPropertyMapping;
    unsigned long long  _currentStep;
    NSMigrationManager * _migrationManager;
}

@property (retain) NSEntityMapping *currentEntityMapping;
@property unsigned long long currentMigrationStep;
@property (retain) NSPropertyMapping *currentPropertyMapping;

- (void)_createAssociationsByDestination:(id)arg1 fromSource:(id)arg2 forEntityMapping:(id)arg3;
- (void)_createAssociationsBySource:(id)arg1 withDestination:(id)arg2 forEntityMapping:(id)arg3;
- (void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3;
- (void)clearAssociationTables;
- (id)currentEntityMapping;
- (unsigned long long)currentMigrationStep;
- (id)currentPropertyMapping;
- (void)dealloc;
- (id)destinationInstancesForEntityMapping:(id)arg1 sourceInstance:(id)arg2;
- (id)initWithMigrationManager:(id)arg1;
- (void)setCurrentEntityMapping:(id)arg1;
- (void)setCurrentMigrationStep:(unsigned long long)arg1;
- (void)setCurrentPropertyMapping:(id)arg1;
- (id)sourceInstancesForEntityMapping:(id)arg1 destinationInstance:(id)arg2;

@end
