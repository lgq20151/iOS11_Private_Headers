/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKUtilities : NSObject {
    bool  _useDeprecatedApi;
}

@property (nonatomic) bool useDeprecatedApi;

+ (id)im_AKSecurityLevelKey;
+ (id)sharedInstance;

- (bool)CKPartialError:(id)arg1 hasErrorCode:(id)arg2;
- (bool)CKPartialError:(id)arg1 onlyHasErrorCodes:(id)arg2;
- (bool)CKPartialErrorOnlyHasQuotaExceededError:(id)arg1;
- (bool)_accountInfoWithCompletionHandler:(id /* block */)arg1;
- (id)_accountManager;
- (id)_accountStore;
- (id)_authenticationController;
- (bool)_checkEligibilityWithAccountInfo:(id)arg1;
- (void)_checkEligibilityWithLoggedInAccountWithCompletion:(id /* block */)arg1;
- (id)_createAccountError:(id)arg1;
- (id)_errorsFromPartialError:(id)arg1;
- (void)_fetchPrimaryAccountWithCompletion:(id /* block */)arg1;
- (bool)_isCKErrorPartialFailure:(id)arg1;
- (bool)_isLogDumpingEnabled;
- (long long)_mininimumServerBagClientValue;
- (id)_personIdFromAccount:(id)arg1;
- (void)_resetKeepMessagesSettingandBroadcastToAllDevices;
- (bool)_serverAllowsCacheDelete;
- (bool)_shouldPresentDebugCloudKitPopUP;
- (id)_truthContainer;
- (id)_truthDatabase;
- (bool)acceptableErrorCodeWhileDeleting:(id)arg1;
- (void)account:(id)arg1 fetchCloudKitAccountStatusWithCompletion:(id /* block */)arg2;
- (id)accountDSID:(id)arg1;
- (bool)accountIsVerifiedForMOCAndSafeForCacheDelete;
- (id)accountWithDSID:(id)arg1;
- (void)broadcastInstantStateChangeNotification;
- (bool)cacheDeleteEnabled;
- (void)checkiCloudQuota:(id /* block */)arg1;
- (bool)cloudKitSyncingEnabled;
- (bool)deviceConditionsAllowPeriodicSync;
- (bool)errorIndicatesDeviceConditionsDontAllowSync:(id)arg1;
- (bool)errorIndicatesIdentityWasLost:(id)arg1;
- (bool)errorIndicatesZoneNotCreated:(id)arg1;
- (id)extractRecordIDsDeletedFromCKPartialError:(id)arg1;
- (id)extractServerRecordFromCKServerErrorRecordChanged:(id)arg1;
- (void)fetchCloudKitAccountStatusWithCompletion:(id /* block */)arg1;
- (void)fetchSecurityLevelForAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchiCloudAccountPersonID:(id /* block */)arg1;
- (id)init;
- (void)isEligibleForTruthZoneWithCompletionDeprecated:(id /* block */)arg1;
- (void)isFirstSyncWithCompletion:(id /* block */)arg1;
- (bool)isRecoverableCloudKitError:(id)arg1 withRetryInterval:(id*)arg2;
- (id)lastDeviceBackUpDate;
- (void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2;
- (unsigned long long)messageDatabaseSize;
- (id)newfilteredArrayRemovingCKRecordDupes:(id)arg1;
- (id)newfilteredArrayRemovingCKRecordIDDupes:(id)arg1;
- (void)presentCloudKitDebugUIWithString:(id)arg1 internalOnly:(bool)arg2;
- (void)primaryAccountHasiCloudBackupEnabledWithCompletion:(id /* block */)arg1;
- (id)recordNameForMessageWithGUID:(id)arg1 usingSalt:(id)arg2;
- (bool)securityLevelIsEligibleForTruthZone:(unsigned long long)arg1;
- (void)setCloudKitSyncingEnabled:(bool)arg1;
- (void)setUseDeprecatedApi:(bool)arg1;
- (void)setiCloudSettingsSwitchEnabled:(bool)arg1;
- (bool)shouldForceArchivedMessagesSync;
- (bool)shouldUseDevContainer;
- (bool)useDeprecatedApi;

@end
