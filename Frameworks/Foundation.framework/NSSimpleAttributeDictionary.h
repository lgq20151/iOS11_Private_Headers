/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSimpleAttributeDictionary : NSDictionary {
    /* Warning: unhandled struct encoding: '{_NSSimpleAttributeDictionaryElement="hash"Q"key"@"value"@}]' */ struct _NSSimpleAttributeDictionaryElement { 
        unsigned long long hash; 
        id key; 
    }  elements;
    unsigned int  numElements;
    unsigned int  refCount;
}

+ (id)emptyAttributeDictionary;
+ (id)newWithDictionary:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newWithKey:(id)arg1 object:(id)arg2;
- (id)objectForKey:(id)arg1;
- (unsigned long long)slotForKey:(id)arg1;

@end
