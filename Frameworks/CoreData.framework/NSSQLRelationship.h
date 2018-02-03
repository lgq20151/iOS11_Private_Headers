/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLRelationship : NSSQLProperty {
    NSSQLEntity * _destinationEntity;
    NSSQLRelationship * _inverse;
    NSString * _name;
}

- (void)_setForeignOrderKey:(id)arg1;
- (void)_setInverseRelationship:(id)arg1;
- (void)_setName:(id)arg1;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (id)correlationTableName;
- (void)dealloc;
- (id)destinationEntity;
- (id)foreignKey;
- (id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)inverseRelationship;
- (bool)isOrdered;
- (id)name;
- (id)relationshipDescription;
- (id)sourceEntity;

@end
