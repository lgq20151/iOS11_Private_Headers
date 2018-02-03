/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsPlistSource : CFPrefsSource {
    bool  _avoidsDaemonCache;
    bool  _checkedInvalidHome;
    bool  _disableBackup;
    bool  _isByHost;
    bool  _lastWriteFailed;
    /* Warning: Unrecognized filer type: '^' using 'void*' */ void* _locallySetDict;
    bool  _observing;
    bool  _readonly;
    bool  _restrictedAccess;
    NSObject<OS_dispatch_group> * _synchGroup;
    bool  _volatile;
    char * accessPath;
    struct __CFString { } * container;
    struct __CFString { } * domainIdentifier;
    struct __CFString { } * userIdentifier;
}

- (void)_goReadOnlyOrVolatileAfterTryingToWriteKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void)_sharedCleanup;
- (void)addPIDImpersonationIfNecessary:(id)arg1;
- (void)alreadylocked_clearCache;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (long long)alreadylocked_generationCount;
- (bool)alreadylocked_requestNewData;
- (void)alreadylocked_setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 from:(id)arg4;
- (void)alreadylocked_updateObservingRemoteChanges;
- (bool)attachAccessTokenToMessage:(id)arg1 accessType:(int)arg2;
- (struct __CFString { }*)container;
- (void*)copyValueForKey:(struct __CFString { }*)arg1;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (id)createSynchronizeMessage;
- (void)dealloc;
- (struct __CFString { }*)domainIdentifier;
- (long long)generationCount;
- (void)goReadOnlyAfterTryingToWriteKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void)goVolatileAfterTryingToWriteKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (bool)handleErrorReply:(id)arg1 fromMessageSettingKey:(struct __CFString { }*)arg2 toValue:(void*)arg3 retryCount:(int)arg4 retryContinuation:(id /* block */)arg5;
- (bool)handleErrorReply:(id)arg1 retryCount:(int)arg2 retryContinuation:(id /* block */)arg3;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(bool*)arg5;
- (id)initWithDomain:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(bool)arg3 containerPath:(struct __CFString { }*)arg4 containingPreferences:(id)arg5;
- (bool)isByHost;
- (bool)isVolatile;
- (void)requestPlistValidation;
- (void)sendFullyPreparedMessage:(id)arg1 toConnection:(id)arg2 settingValue:(void*)arg3 forKey:(struct __CFString { }*)arg4 retryCount:(int)arg5;
- (long long)sendMessageSettingValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)sendRequestNewDataMessage:(id)arg1 toConnection:(id)arg2 retryCount:(int)arg3 error:(bool*)arg4;
- (void)setAccessRestricted:(bool)arg1;
- (void)setBackupDisabled:(bool)arg1;
- (void)setContainer:(struct __CFString { }*)arg1;
- (void)setDaemonCacheEnabled:(bool)arg1;
- (void)setDomainIdentifier:(struct __CFString { }*)arg1;
- (void)setUserIdentifier:(struct __CFString { }*)arg1;
- (bool)synchronize;
- (struct __CFString { }*)userIdentifier;
- (bool)volatilizeIfInvalidHomeDir;

@end
