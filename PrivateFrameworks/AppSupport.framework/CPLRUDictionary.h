/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPLRUDictionary : NSObject {
    struct __CFDictionary { } * _dictionary;
    CPLRUDictionaryNode * _head;
    unsigned long long  _maxCount;
    CPLRUDictionaryNode * _tail;
}

+ (id)dictionaryWithMaximumCapacity:(unsigned long long)arg1;

- (void)_addNodeToFront:(id)arg1;
- (void)_moveNodeToFront:(id)arg1;
- (void)_removeNode:(id)arg1;
- (void)_removeNodeFromLinkedList:(id)arg1;
- (id)allKeys;
- (id)allKeysInLRUOrder;
- (id)allValuesInLRUOrder;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)initWithMaximumCapacity:(unsigned long long)arg1;
- (unsigned long long)linkedListCount;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyWithoutAffectingLRU:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
