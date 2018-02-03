/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccountMigrationLock : CPExclusiveLock

+ (id)_currentSystemVersion;
+ (id)createAccountMigrationLock;
+ (bool)migrationFinished;
+ (void)signalMigrationFinished;
+ (void)writeMigrationVersionPref;

@end