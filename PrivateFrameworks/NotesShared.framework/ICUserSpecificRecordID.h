/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICUserSpecificRecordID : NSObject {
    long long  _databaseScope;
    NSString * _recordType;
    NSString * _shareOwnerName;
    NSString * _sharedRecordName;
    NSString * _userSpecificOwnerName;
    NSString * _zoneName;
}

@property (nonatomic) long long databaseScope;
@property (nonatomic, retain) NSString *recordType;
@property (nonatomic, retain) NSString *shareOwnerName;
@property (nonatomic, retain) NSString *sharedRecordName;
@property (nonatomic, retain) NSString *userSpecificOwnerName;
@property (nonatomic, retain) NSString *zoneName;

+ (bool)isUserSpecificRecordID:(id)arg1;
+ (bool)isUserSpecificRecordType:(id)arg1;
+ (id)userSpecificRecordTypeFromSharedRecordType:(id)arg1;

- (void).cxx_destruct;
- (long long)databaseScope;
- (id)initWithRecordName:(id)arg1;
- (id)initWithRecordType:(id)arg1 shareOwnerName:(id)arg2 databaseScope:(long long)arg3 zoneName:(id)arg4 userSpecificOwnerName:(id)arg5 sharedRecordName:(id)arg6;
- (id)recordID;
- (id)recordName;
- (id)recordType;
- (void)setDatabaseScope:(long long)arg1;
- (void)setRecordType:(id)arg1;
- (void)setShareOwnerName:(id)arg1;
- (void)setSharedRecordName:(id)arg1;
- (void)setUserSpecificOwnerName:(id)arg1;
- (void)setZoneName:(id)arg1;
- (id)shareOwnerName;
- (id)sharedRecordID;
- (id)sharedRecordName;
- (id)sharedRecordType;
- (id)userSpecificOwnerName;
- (id)zoneName;

@end