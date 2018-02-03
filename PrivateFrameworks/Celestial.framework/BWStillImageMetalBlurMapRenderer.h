/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageMetalBlurMapRenderer : NSObject <BWFilterRenderer> {
    BWPixelBufferPool * _blurMapPixelBufferPool;
    struct { 
        int width; 
        int height; 
    }  _depthDataMapDimensions;
    struct { 
        int width; 
        int height; 
    }  _imageDimensions;
    FigSDOFBlurMapRendering * _sdofBlurMapRenderer;
    NSDictionary * _sensorIDDictionary;
}

@property (nonatomic, readonly) bool adjustsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAnimation;
@property (nonatomic, readonly) short type;

+ (void)initialize;

- (int)_allocateBlurMapPixelBufferPoolForBuffersOfWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (int)_loadAndConfigureSDOFBlurMapRenderer;
- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)adjustsMetadata;
- (id)bundleOptionsDictionary;
- (void)dealloc;
- (id)displayName;
- (id)initWithSensorIDDictionary:(id)arg1 imageDimensions:(struct { int x1; int x2; })arg2 depthDataMapDimensions:(struct { int x1; int x2; })arg3;
- (int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (void)renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 originalPixelBuffer:(struct __CVBuffer { }*)arg4 processedPixelBuffer:(struct __CVBuffer { }*)arg5 completionHandler:(id /* block */)arg6;
- (bool)supportsAnimation;
- (short)type;

@end
