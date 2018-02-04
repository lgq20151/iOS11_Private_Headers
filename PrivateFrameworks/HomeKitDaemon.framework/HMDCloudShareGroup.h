/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudShareGroup : HMFObject {
    HMDBackingStoreCacheShareGroup * _backingStoreShareGroup;
    HMDCloudCache * _cache;
    HMDCloudGroup * _cloudGroup;
    HMDCloudZone * _cloudZone;
    NSUUID * _identifier;
    NSUUID * _ownerID;
    NSMutableArray * _recordNames;
    CKShare * _share;
}

@property (nonatomic, retain) HMDBackingStoreCacheShareGroup *backingStoreShareGroup;
@property (nonatomic) HMDCloudCache *cache;
@property (nonatomic) HMDCloudGroup *cloudGroup;
@property (nonatomic) HMDCloudZone *cloudZone;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSUUID *ownerID;
@property (nonatomic, readonly) NSUUID *parentIdentifier;
@property (nonatomic, retain) NSMutableArray *recordNames;
@property (nonatomic, readonly) HMDCloudRecord *rootRecord;
@property (nonatomic, readonly) NSString *rootRecordName;
@property (nonatomic, retain) CKShare *share;

+ (void)createShareGroupWithRootRecordName:(id)arg1 owner:(id)arg2 cloudGroup:(id)arg3 completion:(id /* block */)arg4;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_appendToChildren:(id)arg1 forParentIDs:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addCloudRecord:(id)arg1;
- (id)backingStoreShareGroup;
- (id)cache;
- (id)childCloudRecordsWithParentID:(id)arg1;
- (id)cloudGroup;
- (id)cloudRecordWithName:(id)arg1;
- (id)cloudRecordWithObjectID:(id)arg1;
- (id)cloudZone;
- (void)deleteCloudRecord:(id)arg1;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithBackingStoreCacheShareGroup:(id)arg1 cloudGroup:(id)arg2;
- (bool)isRootRecord:(id)arg1;
- (bool)isRootRecordName:(id)arg1;
- (id)ownerID;
- (id)parentIdentifier;
- (id)recordNames;
- (id)rootRecord;
- (id)rootRecordModelObject;
- (id)rootRecordName;
- (id)rootRecordObjectID;
- (void)setBackingStoreShareGroup:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setCloudGroup:(id)arg1;
- (void)setCloudZone:(id)arg1;
- (void)setRecordNames:(id)arg1;
- (void)setShare:(id)arg1;
- (id)share;
- (void)shareOnlyDeleteCloudRecord:(id)arg1;
- (void)shareOnlyUpdateCloudRecord:(id)arg1;
- (id)shortDescription;
- (void)updateCloudRecord:(id)arg1;

@end