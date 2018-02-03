/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACSystemConfigManager : NSObject {
    int  _applySkipCount;
    NSObject<OS_dispatch_queue> * _preferencesQueue;
    struct __SCPreferences { } * _preferencesSession;
    NSObject<OS_dispatch_queue> * _timerQueue;
    NSObject<OS_dispatch_source> * _timerSource;
}

+ (id)_livingInstance;
+ (unsigned long long)_timeoutInterval;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_createSCPreferencesSession;
- (void)_destroySCPreferencesSession;
- (void*)_getValueForKey:(id)arg1;
- (void)_handleSCPreferencesSessionNotification:(unsigned int)arg1;
- (void)_keepAlive;
- (void)_setValue:(void*)arg1 forKey:(id)arg2;
- (void)_tearDown;
- (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
- (long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setAccountsWithAccountTypeIdentifier:(id)arg1 exist:(bool)arg2;
- (void)setCountOfAccounts:(long long)arg1 withAccountTypeIdentifier:(id)arg2;

@end
