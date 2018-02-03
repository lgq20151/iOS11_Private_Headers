/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFMirroredOneToManyRelationship : PFMirroredRelationship {
    NSRelationshipDescription * _inverseRelationshipDescription;
    NSManagedObjectID * _objectID;
    NSString * _recordName;
    NSString * _relatedRecordName;
    NSRelationshipDescription * _relationshipDescription;
}

@property (nonatomic, readonly) NSRelationshipDescription *inverseRelationshipDescription;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) NSString *recordName;
@property (nonatomic, readonly) NSString *relatedRecordName;
@property (nonatomic, readonly) NSRelationshipDescription *relationshipDescription;

- (void)dealloc;
- (id)initWithManagedObject:(id)arg1 withRecordName:(id)arg2 relatedToRecordWithRecordName:(id)arg3 byRelationship:(id)arg4;
- (id)inverseRelationshipDescription;
- (id)objectID;
- (id)recordName;
- (id)recordTypesToRecordNames;
- (id)relatedRecordName;
- (id)relationshipDescription;
- (bool)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3;

@end
