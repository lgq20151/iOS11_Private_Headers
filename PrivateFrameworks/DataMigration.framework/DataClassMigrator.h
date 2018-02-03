/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@interface DataClassMigrator : NSObject {
    NSDictionary * _context;
    bool  _didUpgrade;
}

@property (nonatomic, retain) NSDictionary *context;
@property (nonatomic, readonly) bool didMigrateBackupFromDifferentDevice;
@property (nonatomic, readonly) bool didRestoreFromBackup;
@property (nonatomic, readonly) bool didRestoreFromCloudBackup;
@property (nonatomic) bool didUpgrade;
@property (nonatomic, readonly) bool shouldPreserveSettingsAfterRestore;
@property (nonatomic, readonly) bool wasPasscodeSetInBackup;

+ (id)dataClassMigratorForBundleAtPath:(id)arg1;

- (void).cxx_destruct;
- (id)context;
- (id)dataClassName;
- (bool)didMigrateBackupFromDifferentDevice;
- (bool)didRestoreFromBackup;
- (bool)didRestoreFromCloudBackup;
- (bool)didUpgrade;
- (float)estimatedDuration;
- (float)migrationProgress;
- (bool)performMigration;
- (void)setContext:(id)arg1;
- (void)setDidUpgrade:(bool)arg1;
- (bool)shouldPreserveSettingsAfterRestore;
- (bool)wasPasscodeSetInBackup;

@end
