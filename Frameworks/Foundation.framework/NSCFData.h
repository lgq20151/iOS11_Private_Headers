/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFData : NSMutableData {
    char * _bytes;
    struct __CFAllocator { } * _bytesDeallocator;
    long long  _capacity;
    unsigned char  _cfinfo;
    long long  _length;
    unsigned int  _rc;
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (bool)_compact;
- (id)_createDispatchData;
- (bool)_providesConcreteBacking;
- (bool)allowsWeakReference;
- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (void*)mutableBytes;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;
- (void)setLength:(unsigned long long)arg1;

@end
