/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRParserImageIO : NSObject <TXRParser> {
    TXRImageInfo * _imageInfo;
    TXRTextureInfo * _textureInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TXRTextureInfo *textureInfo;

+ (id)decodeCGImage:(struct CGImage { }*)arg1 desiredPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (id)decodeCGImageNonIndexed:(struct CGImage { }*)arg1 desiredPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (int)determineColorSpaceClass:(struct CGImage { }*)arg1 displayGamut:(unsigned long long)arg2 options:(id)arg3;
+ (bool)exportImage:(id)arg1 url:(id)arg2 uttype:(const struct __CFString { }*)arg3 colorSpace:(struct CGColorSpace { }*)arg4 orientation:(unsigned char)arg5 error:(id*)arg6;
+ (bool)exportTexture:(id)arg1 url:(id)arg2 error:(id*)arg3;
+ (bool)handlesData:(id)arg1;
+ (struct CGImage { }*)newCGImageFromImage:(id)arg1 colorSpace:(struct CGColorSpace { }*)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
- (id)textureInfo;

@end
