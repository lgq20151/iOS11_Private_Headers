/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSFaultingMutableSet : NSMutableSet {
    int  _cd_rc;
    struct _NSFaultingMutableSetFlags { 
        unsigned int _isFault : 1; 
        unsigned int _mustPropagateDelete : 1; 
        unsigned int _reserved : 14; 
        unsigned int _relationship : 16; 
    }  _flags;
    id  _realSet;
    NSManagedObject * _source;
}

@property (getter=isFault, nonatomic, readonly) bool fault;
@property (nonatomic, readonly) NSPropertyDescription *relationship;
@property (nonatomic, readonly) NSManagedObject *source;

+ (bool)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (bool)_isDeallocating;
- (bool)_isIdenticalFault:(id)arg1;
- (bool)_shouldProcessKVOChange;
- (bool)_tryRetain;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (id)allObjects;
- (id)anyObject;
- (Class)classForArchiver;
- (Class)classForCoder;
- (bool)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getObjects:(id*)arg1;
- (id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4;
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(bool)arg3;
- (void)intersectSet:(id)arg1;
- (bool)intersectsSet:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSet:(id)arg1;
- (bool)isFault;
- (bool)isSubsetOfSet:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)member:(id)arg1;
- (void)minusSet:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)relationship;
- (oneway void)release;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setSet:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)source;
- (void)turnIntoFault;
- (void)unionSet:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)willRead;
- (void)willReadWithContents:(id)arg1;

@end
