/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSDModifyClient : _LSDClient <_LSDModifyProtocol>

- (bool)canRegisterWithOptions:(unsigned int)arg1;
- (bool)clientHasMIEntitlement:(id)arg1;
- (void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)rebuildApplicationDatabasesForSystem:(bool)arg1 internal:(bool)arg2 user:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)registerContainerURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerExtensionPoint:(id)arg1 withInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)registerItemInfo:(id)arg1 alias:(id)arg2 diskImageAlias:(id)arg3 bundleURL:(id)arg4 installationPlist:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)removeHandlerForContentType:(id)arg1 roles:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)removeHandlerForURLScheme:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resetServerStoreWithCompletionHandler:(id /* block */)arg1;
- (void)setDatabaseIsSeeded:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setHandler:(id)arg1 version:(unsigned long long)arg2 forURLScheme:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setHandler:(id)arg1 version:(unsigned long long)arg2 roles:(unsigned int)arg3 forContentType:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setHandlerOptions:(unsigned int)arg1 forContentType:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)synchronizeWithMobileInstallation;
- (void)uninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)unregisterBundleUnit:(unsigned int)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)unregisterExtensionPoint:(id)arg1 withVersion:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateContainerUnit:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 placeholderMetadata:(id)arg4 sendNotification:(int)arg5 completionHandler:(id /* block */)arg6;
- (void)willHandleInvocation:(id)arg1 isReply:(bool)arg2;

@end
