/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFData : NSMutableData {
    char * _bytes;
    struct __CFAllocator { } * _bytesDeallocator;
    long long  _capacity;
    unsigned long long  _cfinfoa;
    long long  _length;
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (bool)_isDeallocating;
- (bool)_providesConcreteBacking;
- (bool)_tryRetain;
- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (void*)mutableBytes;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setLength:(unsigned long long)arg1;

@end
