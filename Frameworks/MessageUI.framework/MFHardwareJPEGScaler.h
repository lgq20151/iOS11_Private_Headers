/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFHardwareJPEGScaler : NSObject {
    bool  _canHardwareScaleImage;
    NSData * _imageData;
    struct __CFDictionary { } * _imageProperties;
    struct __IOSurface { } * _ioSurfaceRef;
}

- (bool)_decodeImageToIOSurface;
- (bool)_isJPEGImage:(struct CGImageSource { }*)arg1;
- (void)dealloc;
- (id)initWithImageData:(id)arg1 imageSource:(struct CGImageSource { }*)arg2;
- (bool)scaleImageToFitLargestDimension:(id)arg1 dataConsumer:(id)arg2;

@end