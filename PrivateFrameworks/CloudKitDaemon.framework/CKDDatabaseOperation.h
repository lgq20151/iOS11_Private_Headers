/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDatabaseOperation : CKDOperation {
    long long  _databaseScope;
}

@property (nonatomic) long long databaseScope;

- (id)CKStatusReportProperties;
- (id)activityCreate;
- (long long)databaseScope;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setDatabaseScope:(long long)arg1;
- (void)setPCSData:(id)arg1 forFetchedRecordID:(id)arg2;
- (void)setPCSData:(id)arg1 forFetchedShareID:(id)arg2;
- (void)setPCSData:(id)arg1 forFetchedZoneID:(id)arg2;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 operationConfigurationBlock:(id /* block */)arg4;

@end
