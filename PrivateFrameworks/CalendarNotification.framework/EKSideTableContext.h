/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface EKSideTableContext : NSManagedObjectContext {
    NSString * _path;
}

+ (id)sideTableContext;
+ (id)sideTableContextWithPath:(id)arg1;

- (void).cxx_destruct;
- (id)_alarmsMatchingPredicate:(id)arg1;
- (id)_managedObjectModel;
- (id)_pathForPersistentStore;
- (id)_persistentStoreCoordinator;
- (bool)_removeSqliteFiles;
- (id)_settingForKey:(id)arg1;
- (id)_urlForPersistentStore;
- (id)alarmsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)delayedProximityAlarms;
- (void)deleteAllAlarms;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)insertNewAlarm;
- (id)nextAlarmFireTime;
- (bool)refiringAlarmAlreadyExists:(int)arg1;
- (id)refiringAlarms;
- (id)rootDirectory;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)settingForKey:(id)arg1;

@end
