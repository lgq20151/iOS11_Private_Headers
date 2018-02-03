/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

@interface FCRImage : NSObject {
    char * alignedDataBuffer;
    unsigned long long  bytesPerRow;
    bool  freeBufferWhenDone;
    unsigned long long  height;
    char * rawDataBuffer;
    unsigned long long  width;
}

@property unsigned long long bytesPerRow;
@property unsigned long long height;
@property unsigned long long width;

- (unsigned long long)bytesPerRow;
- (void)dealloc;
- (char *)getAlignedImageData;
- (unsigned long long)height;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 buffer:(char *)arg4 freeBufferWhenDone:(bool)arg5;
- (void)setBytesPerRow:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;

@end
