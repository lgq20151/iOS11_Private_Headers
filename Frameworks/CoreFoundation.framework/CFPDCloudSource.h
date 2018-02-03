/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDCloudSource : CFPDContainerSource {
    struct __CFString { } * _configurationPath;
    SYDRemotePreferencesSource * cloudSource;
}

- (void)_writeToDisk:(bool)arg1;
- (struct __CFString { }*)cloudConfigurationPath;
- (id)copyConfigurationFromPath:(struct __CFString { }*)arg1;
- (id)copyPropertyListValidatingPlist:(bool)arg1;
- (id)copyPropertyListWithoutDrainingPendingChangesValidatingPlist:(bool)arg1;
- (struct __CFString { }*)debugDump;
- (bool)enqueueNewKey:(id)arg1 value:(id)arg2 size:(unsigned long long)arg3 encoding:(int)arg4;
- (id)initWithDomain:(struct __CFString { }*)arg1 userName:(struct __CFString { }*)arg2 storeName:(id)arg3 configurationPath:(struct __CFString { }*)arg4 containerPath:(struct __CFString { }*)arg5 shmemIndex:(short)arg6 daemon:(id)arg7;
- (void)registerForChangeNotifications;
- (void)synchronizeWithCloud:(id)arg1 replyHandler:(id /* block */)arg2;
- (int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 currentPlistData:(id)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;

@end
