/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUITextureBacking : NSObject {
    NSData * _data;
    CLKUIMmapFile * _mmapFile;
    struct CLKUITextureBackingStructure { 
        void *bytes; 
        unsigned int length; 
        unsigned int width; 
        unsigned int height; 
        unsigned int planes; 
        unsigned int planeLength; 
        unsigned int bytesPerPixel; 
        unsigned char format; 
        unsigned char filter; 
        unsigned char wrap; 
        bool mipmaps; 
    }  _structure;
    NSString * _uuid;
}

@property (nonatomic, readonly) const void*bytes;
@property (nonatomic, readonly) unsigned long long bytesPerPixel;
@property (nonatomic) unsigned char filter;
@property (nonatomic, readonly) unsigned char format;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) bool mipmaps;
@property (nonatomic, readonly) unsigned long long planeLength;
@property (nonatomic, readonly) unsigned long long planes;
@property (nonatomic, readonly) struct CLKUITextureBackingStructure { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8; unsigned char x9; unsigned char x10; bool x11; } structure;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) unsigned long long width;
@property (nonatomic) unsigned char wrap;

+ (id)textureBackingWithArt:(id)arg1;
+ (id)textureBackingWithBytes:(const void*)arg1 length:(unsigned long long)arg2 mmapFile:(id)arg3 uuid:(id)arg4;
+ (id)textureBackingWithImage:(id)arg1 uuid:(id)arg2;

- (void).cxx_destruct;
- (const void*)bytes;
- (unsigned long long)bytesPerPixel;
- (unsigned char)filter;
- (unsigned char)format;
- (unsigned long long)height;
- (id)initWithUuid:(id)arg1 structure:(struct CLKUITextureBackingStructure { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8; unsigned char x9; unsigned char x10; bool x11; })arg2 data:(id)arg3;
- (id)initWithUuid:(id)arg1 structure:(struct CLKUITextureBackingStructure { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8; unsigned char x9; unsigned char x10; bool x11; })arg2 mmapFile:(id)arg3;
- (unsigned long long)length;
- (bool)mipmaps;
- (unsigned long long)planeLength;
- (unsigned long long)planes;
- (void)setFilter:(unsigned char)arg1;
- (void)setWrap:(unsigned char)arg1;
- (struct CLKUITextureBackingStructure { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned char x8; unsigned char x9; unsigned char x10; bool x11; })structure;
- (id)uuid;
- (unsigned long long)width;
- (unsigned char)wrap;

@end
