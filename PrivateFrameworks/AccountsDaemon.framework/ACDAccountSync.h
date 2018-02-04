/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAccountSync : NSObject {
    int  _circleToken;
    bool  _duchessEnabled;
    bool  _enabled;
    int  _keychainToken;
    ACAccountStore * _store;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSTimer * _timer;
}

+ (id)accountSyncPropertiesForAccount:(id)arg1;
+ (id)accountSyncSupportedTypes;
+ (id)accountSyncUnsupportedTypes;
+ (id)duchessHostnames;
+ (id)sharedAccountSyncServer;

- (void).cxx_destruct;
- (void)accountChanges:(id)arg1;
- (id)accountPropertiesFromDictionary:(id)arg1 forType:(id)arg2;
- (bool)checkCircleState;
- (void)createAccounts:(id)arg1;
- (void)createKeychainItems:(id)arg1;
- (void)dealloc;
- (void)deleteAccounts:(id)arg1;
- (bool)detectDuchess;
- (void)devices;
- (void)fixLDAP;
- (void)fixSMTP;
- (id)getAccountsOfType:(id)arg1;
- (id)getiOSVersion;
- (id)init;
- (bool)isDataclassActionRequired:(id)arg1;
- (bool)isMigrated;
- (void)kvsChanges:(id)arg1;
- (id)ldapAccounts;
- (id)localAccounts;
- (id)localHostnameAccounts;
- (bool)locallyMigrated;
- (void)markMigrated;
- (bool)migrate;
- (void)postNotificationFor:(id)arg1;
- (id)primaryiCloudAccount;
- (id)processAdds;
- (id)processDeletes;
- (id)processHostnameAdds;
- (id)processHostnameDeletes;
- (void)queueSync;
- (void)registerForNotifications;
- (id)remoteAccounts;
- (id)remoteHostnameAccounts;
- (void)scheduleSync;
- (void)setiOSVersion;
- (void)setupAccountSync;
- (id)smtpAccounts;
- (bool)supportedType:(id)arg1;
- (void)sync;
- (bool)unsupportedType:(id)arg1;
- (void)waitForBuddy;

@end