/* made by EzioChiu.
 */

@protocol BWFilterRenderer <NSObject>

@required

- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)adjustsMetadata;
- (NSString *)displayName;
- (int)prepareForRenderingWithParameters:(id <BWFilterRendererParameters>)arg1 inputVideoFormat:(BWVideoFormat *)arg2 inputDepthFormat:(BWVideoFormat *)arg3;
- (void)renderUsingParameters:(void *)arg1 inputPixelBuffer:(void *)arg2 inputSampleBuffer:(void *)arg3 originalPixelBuffer:(void *)arg4 processedPixelBuffer:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: <BWFilterRendererParameters> *, struct __CVBuffer { }*, struct opaqueCMSampleBuffer { }*, struct __CVBuffer { }*, struct __CVBuffer { }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (bool)supportsAnimation;
- (short)type;

@end
