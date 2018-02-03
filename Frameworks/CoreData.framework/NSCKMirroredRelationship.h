/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCKMirroredRelationship : NSObject <PFAncillaryModelObject> {
    NSString * _ckRecordID;
    NSData * _ckRecordSystemFields;
    NSString * _entityName;
    NSNumber * _fetchedPKNum;
    bool  _isDeleted;
    bool  _isPending;
    bool  _isUploaded;
    NSString * _recordName;
    NSString * _relatedEntityName;
    NSString * _relatedRecordName;
    NSString * _relationshipName;
}

@property (nonatomic, readonly) NSString *ckRecordID;
@property (nonatomic, readonly) NSData *ckRecordSystemFields;
@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, readonly) NSNumber *fetchedPKNum;
@property (nonatomic, readonly) bool isDeleted;
@property (nonatomic, readonly) bool isPending;
@property (nonatomic, readonly) bool isUploaded;
@property (nonatomic, readonly) NSString *recordName;
@property (nonatomic, readonly) NSString *relatedEntityName;
@property (nonatomic, readonly) NSString *relatedRecordName;
@property (nonatomic, readonly) NSString *relationshipName;

- (id)ckRecordID;
- (id)ckRecordSystemFields;
- (void)dealloc;
- (id)entityName;
- (id)fetchedPKNum;
- (id)initWithFetchResult:(id)arg1 andSQLEntity:(id)arg2;
- (id)initWithMirroredManyToMany:(id)arg1;
- (bool)isDeleted;
- (bool)isPending;
- (bool)isUploaded;
- (id)recordName;
- (id)relatedEntityName;
- (id)relatedRecordName;
- (id)relationshipName;
- (void)setBindValue:(id)arg1;
- (void)setPending:(bool)arg1 deleted:(bool)arg2 uploaded:(bool)arg3;
- (void)updatePKNumFromInsert:(long long)arg1;
- (bool)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3;

@end
