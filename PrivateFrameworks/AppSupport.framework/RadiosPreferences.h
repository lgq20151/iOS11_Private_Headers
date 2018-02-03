/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface RadiosPreferences : NSObject {
    int  _applySkipCount;
    bool  _cachedAirplaneMode;
    <RadiosPreferencesDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _isCachedAirplaneModeValid;
    struct __SCPreferences { } * _prefs;
    bool  notifyForExternalChangeOnly;
    NSObject<OS_os_log> * radios_prefs_log;
}

@property (nonatomic) bool airplaneMode;
@property (nonatomic) <RadiosPreferencesDelegate> *delegate;
@property (nonatomic) bool notifyForExternalChangeOnly;

+ (bool)shouldMirrorAirplaneMode;

- (bool)airplaneMode;
- (void)dealloc;
- (id)delegate;
- (void*)getValueForKey:(id)arg1;
- (void*)getValueWithLockForKey:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)initializeSCPrefs:(id)arg1;
- (bool)notifyForExternalChangeOnly;
- (void)notifyTarget:(unsigned int)arg1;
- (void)refresh;
- (oneway void)release;
- (void)setAirplaneMode:(bool)arg1;
- (void)setAirplaneModeWithoutMirroring:(bool)arg1;
- (void)setCallback:(int (*)arg1 withContext:(struct { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setNotifyForExternalChangeOnly:(bool)arg1;
- (void)setTelephonyState:(bool)arg1 fromBundleID:(id)arg2;
- (void)setValue:(void*)arg1 forKey:(id)arg2;
- (void)synchronize;
- (bool)telephonyStateWithBundleIdentifierOut:(id*)arg1;

@end