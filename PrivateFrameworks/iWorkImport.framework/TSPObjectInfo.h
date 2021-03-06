/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectInfo : NSObject {
    NSArray * _referencedData;
    NSHashTable * _referencedDataHashTable;
    NSMutableSet * _referencedObjectUUIDs;
    NSArray * _referencedObjects;
    NSHashTable * _referencedObjectsHashTable;
}

@property (nonatomic, readonly) NSArray *referencedData;
@property (nonatomic, readonly) NSSet *referencedObjectUUIDs;
@property (nonatomic, readonly) NSArray *referencedObjects;

- (void).cxx_destruct;
- (id)init;
- (id)initWithObject:(id)arg1 referenceDepth:(unsigned long long)arg2;
- (id)referencedData;
- (id)referencedObjectUUIDs;
- (id)referencedObjects;
- (void)visitObject:(id)arg1 rootObject:(id)arg2 referenceDepth:(unsigned long long)arg3;
- (void)visitObjectReferences:(id)arg1 rootObject:(id)arg2 referenceDepth:(unsigned long long)arg3;

@end
