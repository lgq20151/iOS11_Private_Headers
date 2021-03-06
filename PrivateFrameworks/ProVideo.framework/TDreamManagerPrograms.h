/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface TDreamManagerPrograms : NSObject {
    TDreamBFBlurPassOne * _bfBlurPassOne;
    TDreamBFBlurPassTwo * _bfBlurPassTwo;
    TDreamMaskBlend * _blendWithMask;
    TDreamBlend * _blenderFilter;
    TDreamColorStroke * _colorStrokeFilter;
    TDreamColoricer * _colorizer;
    TDreamDistortionFX * _distortionFx;
    TDreamEdges * _edgesFilter;
    TDreamGaussBlurExpressPassTwo * _extraGaussFilter2Q;
    TDreamGaussBlurExpress * _extraGaussFilterQ;
    TDreamGaussBlurExpress * _gaussFilter;
    TDreamGaussBlurExpressPassTwo * _gaussFilter2;
    TDreamGrayscale * _grayScaletor;
    TDreamLookupFilter * _lookupFilter;
    TDreamOutputBuffer * _outputBuffer;
    TDreamVignetteAndQuantice * _quanticeFilter;
    TDreamSobel * _sobelFilter;
    TDreamSobel * _sobelFilterQ;
    TDreamStrokeAndBlend * _strokeAndBlendFilter;
    TDreamStroke * _strokeFilter;
    TDreamVignette * _vigneteFilter;
    TDreamZoomOutFX * _zoomOutFx;
}

@property (retain) TDreamBFBlurPassOne *bfBlurPassOne;
@property (retain) TDreamBFBlurPassTwo *bfBlurPassTwo;
@property (retain) TDreamMaskBlend *blendWithMask;
@property (retain) TDreamBlend *blenderFilter;
@property (retain) TDreamColorStroke *colorStrokeFilter;
@property (retain) TDreamColoricer *colorizer;
@property (retain) TDreamDistortionFX *distortionFx;
@property (retain) TDreamEdges *edgesFilter;
@property (retain) TDreamGaussBlurExpressPassTwo *extraGaussFilter2Q;
@property (retain) TDreamGaussBlurExpress *extraGaussFilterQ;
@property (retain) TDreamGaussBlurExpress *gaussFilter;
@property (retain) TDreamGaussBlurExpressPassTwo *gaussFilter2;
@property (retain) TDreamGrayscale *grayScaletor;
@property (retain) TDreamLookupFilter *lookupFilter;
@property (retain) TDreamOutputBuffer *outputBuffer;
@property (retain) TDreamVignetteAndQuantice *quanticeFilter;
@property (retain) TDreamSobel *sobelFilter;
@property (retain) TDreamSobel *sobelFilterQ;
@property (retain) TDreamStrokeAndBlend *strokeAndBlendFilter;
@property (retain) TDreamStroke *strokeFilter;
@property (retain) TDreamVignette *vigneteFilter;
@property (retain) TDreamZoomOutFX *zoomOutFx;

- (void).cxx_destruct;
- (id)bfBlurPassOne;
- (id)bfBlurPassTwo;
- (id)blendWithMask;
- (id)blenderFilter;
- (id)colorStrokeFilter;
- (id)colorizer;
- (id)distortionFx;
- (id)edgesFilter;
- (id)extraGaussFilter2Q;
- (id)extraGaussFilterQ;
- (id)gaussFilter;
- (id)gaussFilter2;
- (id)grayScaletor;
- (id)lookupFilter;
- (id)outputBuffer;
- (id)quanticeFilter;
- (void)setBfBlurPassOne:(id)arg1;
- (void)setBfBlurPassTwo:(id)arg1;
- (void)setBlendWithMask:(id)arg1;
- (void)setBlenderFilter:(id)arg1;
- (void)setColorStrokeFilter:(id)arg1;
- (void)setColorizer:(id)arg1;
- (void)setDistortionFx:(id)arg1;
- (void)setEdgesFilter:(id)arg1;
- (void)setExtraGaussFilter2Q:(id)arg1;
- (void)setExtraGaussFilterQ:(id)arg1;
- (void)setGaussFilter2:(id)arg1;
- (void)setGaussFilter:(id)arg1;
- (void)setGrayScaletor:(id)arg1;
- (void)setLookupFilter:(id)arg1;
- (void)setOutputBuffer:(id)arg1;
- (void)setQuanticeFilter:(id)arg1;
- (void)setSobelFilter:(id)arg1;
- (void)setSobelFilterQ:(id)arg1;
- (void)setStrokeAndBlendFilter:(id)arg1;
- (void)setStrokeFilter:(id)arg1;
- (void)setVigneteFilter:(id)arg1;
- (void)setZoomOutFx:(id)arg1;
- (id)sobelFilter;
- (id)sobelFilterQ;
- (id)strokeAndBlendFilter;
- (id)strokeFilter;
- (id)vigneteFilter;
- (id)zoomOutFx;

@end
