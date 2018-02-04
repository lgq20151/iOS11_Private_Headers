/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUIntToIntDictionaryKeyEnumerator : NSObject {
    unsigned long long  _count;
    unsigned long long  _index;
    long long ** _keys;
}

- (void)dealloc;
- (id)initWithIntegerKeyDictionary:(id)arg1;
- (long long)nextKey;

@end