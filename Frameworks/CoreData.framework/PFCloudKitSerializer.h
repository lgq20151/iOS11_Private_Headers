/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitSerializer : NSObject {
    NSObject<PFCloudKitSerializerDelegate> * _delegate;
    NSMutableDictionary * _manyToManyRecordNameToRecord;
    NSCloudKitMirroringDelegateOptions * _mirroringOptions;
    NSMutableDictionary * _objectIDToCKRecordName;
    NSString * _recordNamePrefix;
    PFCloudKitMirroredRelationshipCache * _relCache;
    NSMutableArray * _writtenAssetURLs;
    CKRecordZone * _zone;
}

@property (nonatomic) NSObject<PFCloudKitSerializerDelegate> *delegate;
@property (nonatomic, readonly) NSDictionary *manyToManyRecordNameToRecord;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringOptions;
@property (nonatomic, readonly) NSDictionary *objectIDToCKRecordName;
@property (nonatomic, readonly) PFCloudKitMirroredRelationshipCache *relCache;
@property (nonatomic, readonly) NSArray *writtenAssetURLs;
@property (nonatomic, readonly) CKRecordZone *zone;

+ (id)applyCDPrefixToName:(id)arg1;
+ (id)assetStorageDirectoryURLForStore:(id)arg1;
+ (id)assetsOnRecord:(id)arg1 withOptions:(id)arg2;
+ (id)ckAssetAttributeNameForAttributeName:(id)arg1;
+ (id)entityNameForRecordType:(id)arg1;
+ (id)generateCKAssetFileURLForObjectInStore:(id)arg1;
+ (bool)isMirroredRelationshipRecordType:(id)arg1;
+ (bool)isPrivateAttribute:(id)arg1;
+ (id)newArchivedDataForSystemFieldsOfRecord:(id)arg1;
+ (id)newSerializerForOptions:(id)arg1 withZone:(id)arg2 recordNamePrefix:(id)arg3;
+ (id)recordTypeForEntity:(id)arg1;

- (void).cxx_destruct;
- (bool)applyUpdatedRecords:(id)arg1 deletedRecordIDs:(id)arg2 toStore:(id)arg3 inManagedObjectContext:(id)arg4 error:(id*)arg5;
- (void)dealloc;
- (id)delegate;
- (void)fillManagedObject:(id)arg1 fromRecord:(id)arg2 importContext:(id)arg3;
- (id)getRecordNameForObject:(id)arg1;
- (id)getValueFromRecord:(id)arg1 forKey:(id)arg2;
- (id)getValuesFromRecord:(id)arg1;
- (id)init;
- (id)initWithZone:(id)arg1 mirroringOptions:(id)arg2 recordNamePrefix:(id)arg3;
- (id)manyToManyRecordNameToRecord;
- (id)mirroringOptions;
- (id)newCKRecordsFromObject:(id)arg1 fullyMaterializeRecords:(bool)arg2;
- (id)objectIDToCKRecordName;
- (id)relCache;
- (void)setDelegate:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2 onRecord:(id)arg3;
- (id)writtenAssetURLs;
- (id)zone;

@end
