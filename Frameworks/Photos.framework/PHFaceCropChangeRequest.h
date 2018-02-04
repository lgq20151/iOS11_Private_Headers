/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFaceCropChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {
    bool  _clientEntitled;
    NSString * _clientName;
    int  _clientProcessID;
    PHRelationshipChangeRequestHelper * _faceHelper;
    PHChangeRequestHelper * _helper;
    NSString * _originatingFaceUUID;
    PHRelationshipChangeRequestHelper * _personHelper;
}

@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) int clientProcessID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *faceHelper;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHChangeRequestHelper *helper;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (getter=isNew, readonly) bool new;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, copy) NSString *originatingFaceUUID;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *personHelper;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedFaceCrop;
@property (nonatomic, retain) NSData *resourceData;
@property (nonatomic) short state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

+ (id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 person:(id)arg3;
+ (id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 personLocalIdentifier:(id)arg3;
+ (bool)canGenerateUUIDWithoutEntitlements;
+ (id)changeRequestForFaceCrop:(id)arg1;
+ (id)creationRequestsForFaceCropsWithOriginatingFace:(id)arg1 resourceData:(id)arg2;
+ (void)deleteFaceCrops:(id)arg1;

- (void).cxx_destruct;
- (id)_mutableFaceObjectIDsAndUUIDs;
- (id)_mutablePersonObjectIDsAndUUIDs;
- (void)_prepareFaceHelperIfNeeded;
- (void)_preparePersonHelperIfNeeded;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (id)clientName;
- (int)clientProcessID;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (id)faceHelper;
- (id)helper;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (bool)isClientEntitled;
- (bool)isMutated;
- (bool)isNew;
- (id)managedEntityName;
- (id)objectID;
- (id)originatingFaceUUID;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)personHelper;
- (id)placeholderForCreatedFaceCrop;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (id)resourceData;
- (void)setFace:(id)arg1;
- (void)setOriginatingFaceUUID:(id)arg1;
- (void)setResourceData:(id)arg1;
- (void)setState:(short)arg1;
- (short)state;
- (id)uuid;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (bool)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;

@end