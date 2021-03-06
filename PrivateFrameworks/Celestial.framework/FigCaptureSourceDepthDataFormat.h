/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) struct { int x1; int x2; } dimensions;
@property (readonly) float fieldOfView;
@property (readonly) struct { int x1; int x2; } highResStillImageDimensions;
@property (readonly) float maxSupportedFrameRate;
@property (readonly) float minSupportedFrameRate;

- (id)copyWithNewPixelFormat:(unsigned int)arg1;
- (struct { int x1; int x2; })depthEngineOutputDimensions;
- (struct { int x1; int x2; })dimensions;
- (float)fieldOfView;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (struct { int x1; int x2; })highResStillImageDimensions;
- (float)maxSupportedFrameRate;
- (unsigned int)mediaType;
- (float)minSupportedFrameRate;

@end
