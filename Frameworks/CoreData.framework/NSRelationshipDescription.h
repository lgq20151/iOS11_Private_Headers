/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSRelationshipDescription : NSPropertyDescription {
    unsigned long long  _deleteRule;
    NSEntityDescription * _destinationEntity;
    NSRelationshipDescription * _inverseRelationship;
    NSString * _lazyDestinationEntityName;
    NSString * _lazyInverseRelationshipName;
    unsigned long long  _maxCount;
    unsigned long long  _minCount;
    void * _reserved5;
    void * _reserved6;
}

@property unsigned long long deleteRule;
@property (nonatomic) NSEntityDescription *destinationEntity;
@property (nonatomic) NSRelationshipDescription *inverseRelationship;
@property unsigned long long maxCount;
@property unsigned long long minCount;
@property (getter=isOrdered) bool ordered;
@property (getter=isToMany, readonly) bool toMany;
@property (readonly, copy) NSData *versionHash;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)_createCachesAndOptimizeState;
- (id)_initWithName:(id)arg1;
- (bool)_isRelationship;
- (bool)_isToManyRelationship;
- (bool)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4;
- (unsigned long long)_propertyType;
- (void)_setLazyDestinationEntityName:(id)arg1;
- (void)_updateInverse:(id)arg1;
- (bool)_validateValuesAreOfDestinationEntity:(id)arg1 source:(id)arg2;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2 proxyContext:(id)arg3;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)deleteRule;
- (id)description;
- (id)destinationEntity;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)inverseRelationship;
- (bool)isEqual:(id)arg1;
- (bool)isIndexed;
- (bool)isOrdered;
- (bool)isToMany;
- (unsigned long long)maxCount;
- (unsigned long long)minCount;
- (void)setDeleteRule:(unsigned long long)arg1;
- (void)setDestinationEntity:(id)arg1;
- (void)setInverseRelationship:(id)arg1;
- (void)setMaxCount:(unsigned long long)arg1;
- (void)setMinCount:(unsigned long long)arg1;
- (void)setOrdered:(bool)arg1;
- (id)versionHash;

@end
