/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncOwnerIdentifier : NSObject {
    NSUUID * _databaseIdentifier;
    NSString * _deviceIdentifier;
    NSString * _ownerDifferentiator;
    NSString * _ownerIdentifierString;
}

@property (nonatomic, readonly) NSString *string;

+ (id)_databaseUUIDForProfile:(id)arg1 error:(id*)arg2;
+ (void)ownerIdentifierForSyncContainer:(id)arg1 profile:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)initWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3;
- (id)string;

@end