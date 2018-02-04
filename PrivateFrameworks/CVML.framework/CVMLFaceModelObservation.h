/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLFaceModelObservation : CVMLObservation <NSCoding> {
    NSArray * _modelLabels;
    unsigned int  mEnrolledFaceCount;
    struct vector<int, std::__1::allocator<int> > { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::__1::allocator<int> > { 
            int *__first_; 
        } __end_cap_; 
    }  mFaceprintCountPerIdentity;
    struct map<(anonymous namespace)::Faceprint, int, std::__1::less<(anonymous namespace)::Faceprint>, std::__1::allocator<std::__1::pair<const (anonymous namespace)::Faceprint, int> > >="__tree_"{__tree<std::__1::__value_type<(anonymous namespace)::Faceprint, int>, std::__1::__map_value_compare<(anonymous namespace)::Faceprint, std::__1::__value_type<(anonymous namespace)::Faceprint, int>, std::__1::less<(anonymous namespace)::Faceprint>, true>, std::__1::allocator<std::__1::__value_type<(anonymous namespace)::Faceprint, int> > >="__begin_node_"^{__tree_end_node<std::__1::__tree_node_base<void *> *> {}  mFaceprintToInternalIdMap;
    NSString * mFaceprintType;
    NSMutableArray * mInternalIdToUUIDMap;
    bool  mIsModelBuilt;
    unsigned int  mModelMinorVersion;
    struct shared_ptr<vision::mod::ModelValues> { 
        struct ModelValues {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mModelValues;
    unsigned int  mModelVersion;
    NSMutableDictionary * mUUIDToInternalIdMap;
}

@property (retain) NSArray *modelLabels;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addFace:(id)arg1 error:(id*)arg2;
- (unsigned int)algorithmMajorVersion;
- (unsigned int)algorithmMinorVersion;
- (bool)canBuildModel;
- (id)createDictionaryRepresentationOfModelValuesNoCopy;
- (void)encodeWithCoder:(id)arg1;
- (int)enrolledFaceCount;
- (int)enrolledFaceCountForIdentity:(id)arg1;
- (int)enrolledIdentitiesCount;
- (int)facePrintLength;
- (id)flattenedFaceIdCache;
- (id)flattenedFaceprintCache;
- (id)getUUIDForInternalId:(int)arg1;
- (id)identitiesEnrolledInModel;
- (id)identitiesModelCanIdentify;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isModelReadyToIdentifyFaces;
- (int)maxFaceprintCountPerIdentity;
- (int)maxIdentitiesCount;
- (int)minRequiredFaceprintsPerIdentityCount;
- (int)minRequiredIdentitiesCount;
- (id)modelLabels;
- (unsigned int)modelVersion;
- (bool)removeFace:(id)arg1;
- (bool)removeIdentity:(id)arg1;
- (void)setIsModelBuilt:(bool)arg1;
- (void)setModelLabels:(id)arg1;
- (bool)setModelValuesFromDictionary:(id)arg1;
- (bool)setVIPAlgorithmState:(void*)arg1;
- (const void*)vipAlgorithmState;

@end