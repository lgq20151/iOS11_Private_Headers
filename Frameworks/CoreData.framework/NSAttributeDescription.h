/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSAttributeDescription : NSPropertyDescription {
    Class  _attributeValueClass;
    NSString * _attributeValueClassName;
    id  _defaultValue;
    unsigned short  _type;
    NSString * _valueTransformerName;
}

@property bool allowsExternalBinaryDataStorage;
@property unsigned long long attributeType;
@property (copy) NSString *attributeValueClassName;
@property (retain) id defaultValue;
@property bool preserveValueOnDeletionInPersistentHistory;
@property (copy) NSString *valueTransformerName;
@property (readonly, copy) NSData *versionHash;

+ (id)_classNameForType:(unsigned long long)arg1;
+ (void)initialize;
+ (id)stringForAttributeType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (Class)_attributeValueClass;
- (long long)_canConvertPredicate:(id)arg1 andWarning:(id)arg2;
- (bool)_comparePredicatesAndWarnings:(id)arg1;
- (bool)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (bool)_epsilonEquals:(id)arg1 rhs:(id)arg2 withFlags:(int)arg3;
- (id)_initWithName:(id)arg1 type:(unsigned long long)arg2;
- (id)_initWithName:(id)arg1 type:(unsigned long long)arg2 withClassName:(id)arg3;
- (id)_initWithType:(unsigned long long)arg1;
- (bool)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4;
- (unsigned long long)_propertyType;
- (id)_rawValidationPredicates;
- (id)_rawValidationWarnings;
- (void)_setPreserveValueOnDeletionInPersistentHistory:(bool)arg1;
- (void)_sortOutDefaultNumericValuesBecauseDoublesAndFloatsDontCompareEqualAndThatBreaksTests;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (bool)allowsExternalBinaryDataStorage;
- (unsigned long long)attributeType;
- (id)attributeValueClassName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIndexed;
- (bool)preserveValueOnDeletionInPersistentHistory;
- (void)setAllowsExternalBinaryDataStorage:(bool)arg1;
- (void)setAttributeType:(unsigned long long)arg1;
- (void)setAttributeValueClassName:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setPreserveValueOnDeletionInPersistentHistory:(bool)arg1;
- (void)setStoresBinaryDataExternally:(bool)arg1;
- (void)setValueTransformerName:(id)arg1;
- (bool)storesBinaryDataExternally;
- (id)validationPredicates;
- (id)validationWarnings;
- (id)valueTransformerName;
- (id)versionHash;

@end
