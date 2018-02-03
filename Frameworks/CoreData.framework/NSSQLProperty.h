/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLProperty : NSObject {
    NSSQLEntity * _entity;
    unsigned short  _fetchIndex;
    struct _sqlColumnFlags { 
        unsigned int _allowAliasing : 1; 
        unsigned int _unique : 1; 
        unsigned int _constrained : 1; 
        unsigned int _backedByTrigger : 1; 
        unsigned int _reservedFlags : 12; 
    }  _flags;
    NSPropertyDescription * _propertyDescription;
    unsigned char  _propertyType;
    unsigned short  _slot;
    unsigned char  _sqlType;
}

- (id)columnName;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)entity;
- (id)externalName;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (bool)isAttribute;
- (bool)isColumn;
- (bool)isEntityKey;
- (bool)isEqual:(id)arg1;
- (bool)isForeignEntityKey;
- (bool)isForeignKey;
- (bool)isForeignOrderKey;
- (bool)isManyToMany;
- (bool)isOptLockKey;
- (bool)isPrimaryKey;
- (bool)isRelationship;
- (bool)isToMany;
- (bool)isToOne;
- (id)name;
- (id)propertyDescription;
- (unsigned char)propertyType;
- (void)setEntityForReadOnlyFetch:(id)arg1;
- (void)setPropertyDescription:(id)arg1;
- (unsigned int)slot;
- (unsigned char)sqlType;

@end
