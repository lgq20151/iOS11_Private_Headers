/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSInstaller : NSObject <LSInstallationServiceProtocol> {
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *databaseQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) NSXPCConnection *xpcConnection;

- (void)_doinstallApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)_douninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)_postProcessingForApp:(id)arg1 notification:(int)arg2;
- (void)_preflightAppDeletion:(id)arg1;
- (id)databaseQueue;
- (void)dealloc;
- (bool)dispatchRegistration:(id)arg1;
- (int)getNotificationTypeForOperation:(unsigned long long)arg1;
- (void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (id)installPackage:(id)arg1 withIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)registerBundle:(id)arg1 withOptions:(id)arg2;
- (void)sendCallbackDeliveryComplete;
- (void)sendCallbackWithDictionary:(id)arg1;
- (void)setDatabaseQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)uninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (id)uninstallBundle:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (bool)unregisterBundle:(id)arg1 placeholderOnly:(bool)arg2 notification:(int*)arg3;
- (bool)validateEntitlementsForInstall:(bool)arg1 options:(id)arg2 error:(id*)arg3;
- (id)xpcConnection;

@end
