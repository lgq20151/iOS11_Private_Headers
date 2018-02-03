/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSAttributeDictionary : NSDictionary {
    /* Warning: unhandled struct encoding: '{_NSAttributeDictionaryElement="hash"Q"key"@"value"@}]' */ struct _NSAttributeDictionaryElement { 
        unsigned long long hash; 
        id key; 
    }  elements;
    unsigned long long  numElements;
}

+ (id)emptyAttributeDictionary;
+ (void)initialize;
+ (id)newWithDictionary:(id)arg1;

- (void)__apply:(int (*)arg1 context:(void*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (bool)isEqualToDictionary:(id)arg1;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newWithKey:(id)arg1 object:(id)arg2;
- (id)objectForKey:(id)arg1;

@end
