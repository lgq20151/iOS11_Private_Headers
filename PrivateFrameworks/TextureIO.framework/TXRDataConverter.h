/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRDataConverter : NSObject

+ (id)newImageFromSourceImage:(id)arg1 newPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 gammaDegamma:(bool)arg4 error:(id*)arg5;
+ (id)newImageFromSourceImage:(id)arg1 newPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 multiplyAlpha:(bool)arg4 gammaDegamma:(bool)arg5 error:(id*)arg6;
+ (id)newPixelFormatSetForCGImage:(struct CGImage { }*)arg1 displayGamut:(unsigned long long)arg2 options:(id)arg3;

@end
