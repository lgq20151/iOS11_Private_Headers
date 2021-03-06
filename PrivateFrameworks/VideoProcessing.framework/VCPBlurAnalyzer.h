/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPBlurAnalyzer : VCPImageAnalyzer

- (float)computeObjectSharpness:(struct __CVBuffer { }*)arg1 objects:(id)arg2;
- (float)computeRegionSharpness:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4;

@end
