/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityMigrationManager : NSObject {
    NSManagedObjectModel * _destinationModel;
    NSString * _localPeerID;
    PFUbiquityLocation * _rootLocation;
    NSManagedObjectModel * _sourceModel;
}

@property (readonly) NSManagedObjectModel *destinationModel;
@property (readonly) PFUbiquityLocation *rootLocation;
@property (readonly) NSManagedObjectModel *sourceModel;

- (void)dealloc;
- (id)destinationModel;
- (id)initWithDestinationModel:(id)arg1 sourceModel:(id)arg2 ubiquityRootLocation:(id)arg3 localPeerID:(id)arg4;
- (id)initWithDestinationModel:(id)arg1 storeName:(id)arg2 previousModelVersionHash:(id)arg3 ubiquityRootLocation:(id)arg4 localPeerID:(id)arg5;
- (bool)migrateTransactionLogs:(bool)arg1 andBaselineIfNecessaryForStoreName:(id)arg2 peerID:(id)arg3 error:(id*)arg4;
- (id)rootLocation;
- (id)sourceModel;

@end
