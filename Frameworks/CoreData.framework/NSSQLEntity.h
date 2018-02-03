/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLEntity : NSStoreMapping {
    NSMutableArray * _attrColumns;
    NSMutableArray * _columnsToFetch;
    NSMutableArray * _ekColumns;
    NSEntityDescription * _entityDescription;
    unsigned int  _entityID;
    NSSQLEntityKey * _entityKey;
    void * _fetch_entity_plan;
    NSMutableArray * _fkColumns;
    NSMutableArray * _fokColumns;
    NSSQLStoreMappingGenerator * _mappingGenerator;
    NSSQLModel * _model;
    NSMutableArray * _multicolumnUniquenessConstraints;
    void * _odiousHashHackStorage;
    NSSQLOptLockKey * _optLockKey;
    NSSQLPrimaryKey * _primaryKey;
    NSMutableDictionary * _properties;
    NSArray * _propertiesAllToManysCache;
    NSArray * _propertyAllCache;
    NSArray * _propertyManyToManyCache;
    NSKnownKeysMappingStrategy * _propertyMapping;
    NSSQLEntity * _rootEntity;
    NSMutableDictionary * _rtreeIndices;
    struct __sqlentityFlags { 
        unsigned int _hasAttributesWithExternalDataReferences : 1; 
        unsigned int _hasAttributesMonitoredByTriggers : 1; 
        unsigned int _hasAttributesBackedByTriggers : 1; 
        unsigned int _reserved : 29; 
    }  _sqlentityFlags;
    NSMutableArray * _subentities;
    unsigned int  _subentityMaxID;
    NSSQLEntity * _superentity;
    NSString * _tableName;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _toOneRange;
    NSMutableArray * _uniqueAttributes;
    NSMutableArray * _virtualFKs;
}

@property (readonly) NSDictionary *rtreeIndexes;

- (void)_addColumnToFetch:(id)arg1;
- (void)_addForeignOrderKeyForToOne:(id)arg1 entity:(id)arg2;
- (void)_addRootColumnToFetch:(id)arg1;
- (void)_addSubentity:(id)arg1;
- (id)_addVirtualToOneForToMany:(id)arg1 withInheritedProperty:(id)arg2;
- (bool)_collectFKSlots:(id)arg1 error:(id*)arg2;
- (void)_doPostModelGenerationCleanup;
- (bool)_entityIsBroken:(id*)arg1;
- (unsigned int)_generateIDWithSuperEntity:(id)arg1 nextID:(unsigned int)arg2;
- (void)_generateIndexes;
- (void)_generateInverseRelationshipsAndMore;
- (void)_generateMulticolumnUniquenessConstraints;
- (void)_generateProperties;
- (bool)_hasAttributesBackedByTriggers;
- (bool)_hasAttributesMonitoredByTriggers;
- (void*)_odiousHashHack;
- (void)_organizeConstraints;
- (id)_propertySearchMapping;
- (void)_setHasAttributesBackedByTriggers:(bool)arg1;
- (void)_setHasAttributesMonitoredByTriggers:(bool)arg1;
- (id)_sqlPropertyWithRenamingIdentifier:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_toOneRange;
- (bool)addPropertiesForReadOnlyFetch:(id)arg1 keys:(id)arg2 context:(id)arg3;
- (void)addUniqueAttribute:(id)arg1;
- (id)attributeColumns;
- (id)attributeNamed:(id)arg1;
- (id)attributes;
- (id)binaryIndexForIndexDescription:(id)arg1;
- (id)columnsToCreate;
- (id)columnsToFetch;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)entityDescription;
- (unsigned int)entityID;
- (id)externalName;
- (unsigned int)fetchIndexForKey:(id)arg1;
- (void)finalize;
- (id)foreignEntityKeyColumns;
- (id)foreignKeyColumns;
- (id)foreignOrderKeyColumns;
- (bool)hasAttributesWithExternalDataReferences;
- (bool)hasInheritance;
- (bool)hasSubentities;
- (id)indexForIndexDescription:(id)arg1;
- (id)initWithModel:(id)arg1 entityDescription:(id)arg2;
- (bool)isKindOfSQLEntity:(id)arg1;
- (bool)isRootEntity;
- (id)manyToManyRelationships;
- (id)mappingGenerator;
- (id)model;
- (id)multicolumnUniquenessConstraints;
- (id)name;
- (id)optLockKey;
- (id)primaryKey;
- (id)properties;
- (id)propertiesByName;
- (id)propertyMapping;
- (id)propertyNamed:(id)arg1;
- (id)relationshipNamed:(id)arg1;
- (id)rootEntity;
- (id)rtreeIndexForIndexDescription:(id)arg1;
- (id)rtreeIndexForIndexNamed:(id)arg1;
- (id)rtreeIndexes;
- (void)setEntityID:(unsigned int)arg1;
- (void)setSubentities:(id)arg1;
- (void)setSuperentity:(id)arg1;
- (id)subentities;
- (id)subentityKey;
- (unsigned int)subentityMaxID;
- (id)superentity;
- (id)tableName;
- (id)toManyRelationships;
- (id)uniqueAttributes;
- (id)virtualForeignKeyColumns;

@end
