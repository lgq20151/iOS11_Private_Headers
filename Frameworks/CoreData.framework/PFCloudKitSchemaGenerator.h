/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitSchemaGenerator : NSObject {
    NSString * _configurationName;
    NSPersistentStoreCoordinator * _coordinator;
    NSManagedObjectContext * _managedObjectContext;
    NSCloudKitMirroringDelegateOptions * _mirroringOptions;
    NSManagedObjectModel * _model;
    NSPersistentStore * _store;
    CKRecordZone * _zone;
}

@property (nonatomic, readonly) NSString *configurationName;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *coordinator;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringOptions;
@property (nonatomic, readonly) NSManagedObjectModel *model;
@property (nonatomic, readonly) NSPersistentStore *store;
@property (nonatomic, readonly) CKRecordZone *zone;

+ (id)representativeValueFor:(id)arg1;

- (void).cxx_destruct;
- (id)configurationName;
- (id)coordinator;
- (void)dealloc;
- (id)init;
- (id)initWithObservedStore:(id)arg1 zone:(id)arg2 mirroringOptions:(id)arg3;
- (id)managedObjectContext;
- (id)mirroringOptions;
- (id)model;
- (id)newRepresentativeRecords;
- (void)populateRelationshipsOnObject:(id)arg1 withCache:(id)arg2;
- (void)populateValuesOnObject:(id)arg1;
- (id)representativeObjectForEntity:(id)arg1 withManagedObjectContext:(id)arg2 cache:(id)arg3 populate:(bool)arg4;
- (id)store;
- (id)zone;

@end
