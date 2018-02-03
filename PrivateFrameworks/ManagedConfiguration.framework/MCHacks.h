/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCHacks : NSObject

+ (id)sharedHacks;

- (void)_applyHeuristicsToEffectiveUserSettings:(id)arg1;
- (bool)_applyHeuristicsToRestrictions:(id)arg1 forProfile:(id)arg2 outError:(id*)arg3;
- (void)_applyImpliedSettingsToSettingsDictionary:(id)arg1 currentSettings:(id)arg2 restrictions:(id)arg3;
- (void)_applyMandatorySettingsToEffectiveUserSettings:(id)arg1;
- (void)_applyServerSideChangesWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 oldEffectiveUserSettings:(id)arg3 newEffectiveUserSettings:(id)arg4;
- (id)_deviceSpecificDefaultSettings;
- (id)_permittedAutoLockNumbers;
- (id)_permittedGracePeriodNumbers;
- (id)_selectLargestNumberFromSortedArray:(id)arg1 equalToOrLessThanNumber:(id)arg2;
- (void)_sendChangeNotificationsBasedOnDefaultsAdditionByDomain:(id)arg1;
- (void)_sendChangeNotificationsBasedOnDefaultsRemovalByDomain:(id)arg1;
- (void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)arg1;
- (bool)isGreenTea;
- (bool)isSetupBuddyDone;
- (id)profileTrustEvaluators;
- (id)quantizedAutoLockInSeconds:(id)arg1;
- (id)quantizedGracePeriodInSeconds:(id)arg1;
- (bool)sanitizedProfileSignerCertificateChainIsAllowedToInstallUnsupportedPayload:(id)arg1;
- (bool)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)arg1;

@end
