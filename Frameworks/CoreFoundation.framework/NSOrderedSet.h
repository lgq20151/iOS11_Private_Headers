/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSOrderedSet : NSObject <NSCopying, NSFastEnumeration, NSMutableCopying, NSSecureCoding>

@property (readonly) unsigned long long count;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)newOrderedSetWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)orderedSet;
+ (id)orderedSetWithArray:(id)arg1;
+ (id)orderedSetWithArray:(id)arg1 copyItems:(bool)arg2;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)orderedSetWithObject:(id)arg1;
+ (id)orderedSetWithObjects:(id)arg1;
+ (id)orderedSetWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1;
+ (id)orderedSetWithOrderedSet:(id)arg1 copyItems:(bool)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)orderedSetWithSet:(id)arg1;
+ (id)orderedSetWithSet:(id)arg1 copyItems:(bool)arg2;
+ (bool)supportsSecureCoding;

- (id)allObjects;
- (id)array;
- (Class)classForCoder;
- (bool)containsObject:(id)arg1;
- (bool)containsObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForObject:(id)arg1;
- (unsigned long long)countForObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)firstObject;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingComparator:(id /* block */)arg4;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (unsigned long long)indexOfObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)indexesOfObjectsPassingTest:(id /* block */)arg1;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)initWithArray:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(bool)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)initWithOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(bool)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
- (id)initWithSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(bool)arg2;
- (bool)intersectsOrderedSet:(id)arg1;
- (bool)intersectsSet:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOrderedSet:(id)arg1;
- (bool)isNSOrderedSet__;
- (bool)isSubsetOfOrderedSet:(id)arg1;
- (bool)isSubsetOfSet:(id)arg1;
- (id)lastObject;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)objectEnumerator;
- (id)objectPassingTest:(id /* block */)arg1;
- (id)objectWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)objectsPassingTest:(id /* block */)arg1;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)reverseObjectEnumerator;
- (id)reversedOrderedSet;
- (id)set;
- (id)sortedArrayFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingComparator:(id /* block */)arg3;
- (id)sortedArrayUsingComparator:(id /* block */)arg1;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(id /* block */)arg2;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (id)_avgForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3;
- (id)_sumForKeyPath:(id)arg1;
- (bool)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id*)arg4;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (id)filteredOrderedSetUsingPredicate:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end
