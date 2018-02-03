/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCKImportOperation : NSObject {
    NSData * _changeTokenBytes;
    NSDate * _importDate;
    NSSet * _mirroredRelationships;
    NSUUID * _operationUUID;
    NSSet * _pendingRelationships;
}

@property (nonatomic, readonly) NSData *changeTokenBytes;
@property (nonatomic, readonly) NSDate *importDate;
@property (nonatomic, readonly) NSSet *mirroredRelationships;
@property (nonatomic, readonly) NSUUID *operationUUID;
@property (nonatomic, readonly) NSSet *pendingRelationships;

- (void)_addPendingRelationship:(id)arg1;
- (id)changeTokenBytes;
- (void)dealloc;
- (id)description;
- (id)importDate;
- (id)init;
- (id)initWithFetchResult:(id)arg1 andSQLEntity:(id)arg2;
- (id)mirroredRelationships;
- (id)operationUUID;
- (id)pendingRelationships;
- (void)setBindValue:(id)arg1;
- (void)setChangeToken:(id)arg1;

@end
