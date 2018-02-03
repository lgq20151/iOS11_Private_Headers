/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSManagedObjectModel : NSObject <NSCoding, NSCopying, NSFastEnumeration, NSSecureCoding> {
    NSMutableDictionary * _configurations;
    id  _dataForOptimization;
    NSMutableDictionary * _entities;
    NSMutableDictionary * _fetchRequestTemplates;
    id  _localizationPolicy;
    struct __managedObjectModelFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _isImmutable : 1; 
        unsigned int _isOptimizedForEncoding : 1; 
        unsigned int _hasEntityWithConstraints : 1; 
        unsigned int _skipUserInfoTombstones : 1; 
        unsigned int _reservedEntityDescription : 27; 
    }  _managedObjectModelFlags;
    id * _optimizationHints;
    NSSet * _versionIdentifiers;
}

@property (readonly) NSArray *configurations;
@property (retain) NSArray *entities;
@property (readonly, copy) NSDictionary *entitiesByName;
@property (readonly, copy) NSDictionary *entityVersionHashesByName;
@property (readonly, copy) NSDictionary *fetchRequestTemplatesByName;
@property (retain) NSDictionary *localizationDictionary;
@property (copy) NSSet *versionIdentifiers;

+ (long long)_debugOptimizedModelLayout;
+ (void)_deepCollectEntitiesInArray:(id)arg1 entity:(id)arg2;
+ (id)_modelPathsFromBundles:(id)arg1;
+ (id)_newModelFromOptimizedEncoding:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (id)mergedModelFromBundles:(id)arg1;
+ (id)mergedModelFromBundles:(id)arg1 forStoreMetadata:(id)arg2;
+ (id)modelByMergingModels:(id)arg1;
+ (id)modelByMergingModels:(id)arg1 forStoreMetadata:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)_addEntities:(id)arg1 toConfiguration:(id)arg2;
- (void)_addEntity:(id)arg1;
- (void)_addVersionIdentifiers:(id)arg1;
- (id)_configurationsByName;
- (void)_createCachesAndOptimizeState;
- (id)_entitiesByVersionHash;
- (id)_entityForName:(id)arg1;
- (id)_entityVersionHashesByNameInStyle:(unsigned long long)arg1;
- (void)_finalizeIndexes;
- (void)_flattenProperties;
- (bool)_hasEntityWithUniquenessConstraints;
- (bool)_hasPrecomputedKeyOrder;
- (id)_initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2;
- (id)_initWithEntities:(id)arg1;
- (bool)_isConfiguration:(id)arg1 inStyle:(unsigned long long)arg2 compatibleWithStoreMetadata:(id)arg3;
- (bool)_isOptimizedForEncoding;
- (bool)_isSkippingUserInfoTombstones;
- (id)_localizationPolicy;
- (void)_markTombstones;
- (id)_modelForVersionHashes:(id)arg1;
- (id)_optimizedEncoding:(id*)arg1;
- (id)_precomputedKeysForEntity:(id)arg1;
- (void)_removeEntities:(id)arg1 fromConfiguration:(id)arg2;
- (void)_removeEntity:(id)arg1;
- (void)_removeEntityNamed:(id)arg1;
- (void)_restoreValidation;
- (void)_setIsEditable:(bool)arg1;
- (void)_setIsEditable:(bool)arg1 optimizationStyle:(unsigned long long)arg2;
- (void)_setLocalizationPolicy:(id)arg1;
- (void)_skipUserInfoTombstones:(bool)arg1;
- (id)_sortedEntitiesForConfiguration:(id)arg1;
- (void)_stripForMigration;
- (void)_throwIfNotEditable;
- (id)_versionIdentifiersAsArray;
- (id)configurations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entities;
- (id)entitiesByName;
- (id)entitiesForConfiguration:(id)arg1;
- (id)entityVersionHashesByName;
- (id)fetchRequestFromTemplateWithName:(id)arg1 substitutionVariables:(id)arg2;
- (id)fetchRequestTemplateForName:(id)arg1;
- (id)fetchRequestTemplatesByName;
- (unsigned long long)hash;
- (id)immutableCopy;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfOptimizedURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 forStoreMetadata:(id)arg2;
- (bool)isConfiguration:(id)arg1 compatibleWithStoreMetadata:(id)arg2;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (id)localizationDictionary;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setEntities:(id)arg1;
- (void)setEntities:(id)arg1 forConfiguration:(id)arg2;
- (void)setFetchRequestTemplate:(id)arg1 forName:(id)arg2;
- (void)setLocalizationDictionary:(id)arg1;
- (void)setVersionIdentifiers:(id)arg1;
- (id)versionHash;
- (id)versionIdentifiers;

@end
