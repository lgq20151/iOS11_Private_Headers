/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFContextMapTable : NSObject {
    unsigned long long * _capacitiesFor64bitPKMappings;
    struct _contextMapTableFlags { 
        unsigned int _usesWeakReferences : 1; 
        unsigned int _garbageCollectionEnabled : 1; 
        unsigned int _reservedFlags : 30; 
    }  _flags;
    struct __CFDictionary {} ** _objectsBy64bitPKID;
    struct __CFDictionary {} ** _objectsByPermanentObjectID;
    struct __CFDictionary { } * _objectsByTemporaryID;
    unsigned long long  _slotLimit;
}

- (void)_dispose;
- (void)clearTemporaryIDs;
- (void)dealloc;
- (void)finalize;
- (unsigned long long)getAllObjects:(id*)arg1;
- (id)initWithWeaksReferences:(bool)arg1;
- (void)setCapacityHint:(unsigned long long)arg1 forSlot:(unsigned int)arg2;
- (void)setForUseWithModel:(id)arg1;

@end
