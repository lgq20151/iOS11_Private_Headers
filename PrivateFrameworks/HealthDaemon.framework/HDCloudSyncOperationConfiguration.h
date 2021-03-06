/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncOperationConfiguration : NSObject {
    CKContainer * _container;
    CKOperationGroup * _operationGroup;
    unsigned long long  _options;
    NSString * _ownerIdentifier;
    CKDatabase * _privateDatabase;
    HDProfile * _profile;
    long long  _reason;
    NSString * _syncContainerPrefix;
}

@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKOperationGroup *operationGroup;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSString *ownerIdentifier;
@property (nonatomic, readonly) CKDatabase *privateDatabase;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly, copy) NSString *syncContainerPrefix;

- (void).cxx_destruct;
- (id)container;
- (id)initWithCKContainer:(id)arg1 operationGroup:(id)arg2 syncContainerPrefix:(id)arg3 ownerIdentifier:(id)arg4 profile:(id)arg5 options:(unsigned long long)arg6 reason:(long long)arg7;
- (id)operationGroup;
- (unsigned long long)options;
- (id)ownerIdentifier;
- (id)privateDatabase;
- (id)profile;
- (long long)reason;
- (id)syncContainerPrefix;

@end
