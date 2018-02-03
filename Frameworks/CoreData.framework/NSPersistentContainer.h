/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentContainer : NSObject {
    NSString * _name;
    NSPersistentStoreCoordinator * _storeCoordinator;
    NSArray * _storeDescriptions;
    NSManagedObjectContext * _viewContext;
}

@property (readonly) NSManagedObjectModel *managedObjectModel;
@property (readonly, copy) NSString *name;
@property (readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (copy) NSArray *persistentStoreDescriptions;
@property (readonly) NSManagedObjectContext *viewContext;

+ (id)_newModelForName:(id)arg1;
+ (id)defaultDirectoryURL;
+ (id)persistentContainerWithName:(id)arg1;
+ (id)persistentContainerWithName:(id)arg1 managedObjectModel:(id)arg2;
+ (id)persistentContainerWithPath:(id)arg1;
+ (id)persistentContainerWithPath:(id)arg1 managedObjectModel:(id)arg2;
+ (id)persistentContainerWithPath:(id)arg1 modelNamed:(id)arg2;

- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 managedObjectModel:(id)arg2;
- (bool)load:(id*)arg1;
- (void)loadPersistentStoresWithCompletionHandler:(id /* block */)arg1;
- (id)managedObjectModel;
- (id)name;
- (id)newBackgroundContext;
- (void)performBackgroundTask:(id /* block */)arg1;
- (id)persistentStoreCoordinator;
- (id)persistentStoreDescriptions;
- (void)setPersistentStoreDescriptions:(id)arg1;
- (id)viewContext;

@end
