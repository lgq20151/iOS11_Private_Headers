/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface PDFRenderer : CGRenderer {
    struct __CFData { } * data;
    struct CGDataConsumer { } * dataConsumer;
    struct __CFDictionary { } * info;
}

- (void)dealloc;
- (void)flushRender;
- (id)init;
- (const struct __CFData { }*)pdfdata;
- (bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)setFileTitle:(id)arg1;
- (void)setFileURL:(id)arg1;

@end
