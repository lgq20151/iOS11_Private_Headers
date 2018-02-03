/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {
    int  _accessCount;
    unsigned long long  _length;
    unsigned char  _private;
    void * _reserved;
}

- (void)_destroyMemory;
- (bool)beginContentAccess;
- (const void*)bytes;
- (void)dealloc;
- (id)description;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (id)init;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 deallocator:(id /* block */)arg4;
- (id)initWithCapacity:(unsigned long long)arg1;
- (bool)isContentDiscarded;
- (unsigned long long)length;
- (void*)mutableBytes;
- (void)setLength:(unsigned long long)arg1;

@end
