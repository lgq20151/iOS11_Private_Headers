/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsSource : NSObject {
    _CFXPreferences * _containingPreferences;
    struct __CFDictionary { } * _dict;
    long long  _generationCount;
    bool  _isSearchList;
    struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } * _lock;
    struct __CFArray { } * _observers;
    union { 
        struct _CFPrefsShmemEntry { 
            int owner; 
            unsigned int generation; 
        } entry; 
        unsigned long long value; 
    }  lastKnownShmemState;
    /* Warning: Unrecognized filer type: '^' using 'void*' */ void* shmemEntry;
}

- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;
- (void)addPreferencesObserver:(id)arg1;
- (void)alreadylocked_addPreferencesObserver:(id)arg1;
- (void)alreadylocked_clearCache;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (long long)alreadylocked_generationCount;
- (void)alreadylocked_removePreferencesObserver:(id)arg1;
- (bool)alreadylocked_requestNewData;
- (void)alreadylocked_setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 from:(id)arg4;
- (void)alreadylocked_updateObservingRemoteChanges;
- (struct __CFString { }*)container;
- (struct __CFDictionary { }*)copyDictionary;
- (struct __CFArray { }*)copyKeyList;
- (struct __CFString { }*)copyOSLogDescription;
- (void*)copyValueForKey:(struct __CFString { }*)arg1;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (void)dealloc;
- (id)description;
- (struct __CFString { }*)domainIdentifier;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)arg1;
- (long long)generationCount;
- (void)handleRemoteChangeNotificationForDomainIdentifier:(struct __CFString { }*)arg1;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(bool*)arg5;
- (id)initWithContainingPreferences:(id)arg1;
- (bool)isByHost;
- (bool)isVolatile;
- (void)lock;
- (void)lockObservers;
- (bool)managed;
- (void)mergeIntoDictionary:(struct __CFDictionary { }*)arg1 sourceDictionary:(struct __CFDictionary { }*)arg2;
- (void)removeAllValues_from:(id)arg1;
- (void)removePreferencesObserver:(id)arg1;
- (void)replaceAllValuesWithValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 from:(id)arg4;
- (void)setAccessRestricted:(bool)arg1;
- (void)setConfigurationPath:(struct __CFString { }*)arg1;
- (void)setDaemonCacheEnabled:(bool)arg1;
- (void)setStoreName:(struct __CFString { }*)arg1;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2 from:(id)arg3;
- (void)setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 from:(id)arg4;
- (void)setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long long)arg3 removeValuesForKeys:(const struct __CFString {}**)arg4 count:(long long)arg5 from:(id)arg6;
- (bool)synchronize;
- (void)unlock;
- (void)unlockObservers;
- (struct __CFString { }*)userIdentifier;

@end
