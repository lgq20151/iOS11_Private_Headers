/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncServer : HDSubserver <HDCloudSyncServerInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)remote_createCloudShareWithRecipient:(id)arg1 sampleTypes:(id)arg2 maxSampleAge:(id)arg3 completion:(id /* block */)arg4;
- (id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(id /* block */)arg1;
- (id)remote_fetchCloudDescriptionWithCompletion:(id /* block */)arg1;
- (void)remote_fetchCloudSyncStatusWithCompletion:(id /* block */)arg1;
- (id)remote_forceCloudResetWithCompletion:(id /* block */)arg1;
- (id)remote_forceCloudSyncWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)remote_waitOnHealthCloudSyncWithCompletion:(id /* block */)arg1;
- (id)retmote_fetchCloudSyncProgressWithCompletion:(id /* block */)arg1;

@end
