/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUPreferences : NSObject {
    bool  _allowSameBuildUpdates;
    bool  _disableAutoDownload;
    bool  _disableAutoSU;
    bool  _disableAvailabilityAlerts;
    bool  _disableBuildNumberComparison;
    bool  _disableFullReplacementFallback;
    bool  _disableUserWiFiOnlyPeriod;
    bool  _forceFullReplacement;
    bool  _scanWeeklyInternally;
    bool  _shouldDelayUpdates;
    bool  _simulateAutoDownload;
    NSNumber * _unmetConstraints;
    NSNumber * _updateDelayInterval;
}

@property (nonatomic, readonly) bool allowSameBuildUpdates;
@property (getter=isAutoDownloadDisabled, nonatomic, readonly) bool disableAutoDownload;
@property (getter=isAutoSUDisabled, nonatomic, readonly) bool disableAutoSU;
@property (nonatomic, readonly) bool disableAvailabilityAlerts;
@property (nonatomic, readonly) bool disableBuildNumberComparison;
@property (nonatomic, readonly) bool disableFullReplacementFallback;
@property (nonatomic, readonly) bool disableUserWiFiOnlyPeriod;
@property (nonatomic, readonly) bool forceFullReplacement;
@property (nonatomic, readonly) bool scanWeeklyInternally;
@property (nonatomic, readonly) bool shouldDelayUpdates;
@property (nonatomic, readonly) bool simulateAutoDownload;
@property (nonatomic, readonly) NSNumber *unmetConstraints;
@property (nonatomic, readonly) NSNumber *updateDelayInterval;

+ (id)sharedInstance;

- (id)_copyNumberPreferenceForKey:(id)arg1;
- (void*)_copyPreferenceForKey:(struct __CFString { }*)arg1 ofType:(unsigned long long)arg2;
- (bool)_getBooleanPreferenceForKey:(id)arg1 withDefaultValue:(bool)arg2;
- (void)_loadPreferences;
- (bool)allowSameBuildUpdates;
- (void)dealloc;
- (bool)disableAvailabilityAlerts;
- (bool)disableBuildNumberComparison;
- (bool)disableFullReplacementFallback;
- (bool)disableUserWiFiOnlyPeriod;
- (bool)forceFullReplacement;
- (id)init;
- (bool)isAutoDownloadDisabled;
- (bool)isAutoSUDisabled;
- (void)reload;
- (bool)scanWeeklyInternally;
- (bool)shouldDelayUpdates;
- (bool)simulateAutoDownload;
- (id)unmetConstraints;
- (id)updateDelayInterval;

@end
