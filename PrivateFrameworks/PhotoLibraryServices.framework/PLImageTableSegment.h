/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageTableSegment : NSObject {
    bool  _dying;
    PLImageTable * _imageTable;
    unsigned long long  _index;
    unsigned long long  _length;
    void * _ptr;
}

- (void*)bytes;
- (void)dealloc;
- (id)initWithImageTable:(id)arg1 index:(unsigned long long)arg2 length:(unsigned long long)arg3 idealAddress:(void*)arg4;
- (id)initWithImageTable:(id)arg1 offset:(long long)arg2 length:(unsigned long long)arg3;
- (oneway void)release;

@end
