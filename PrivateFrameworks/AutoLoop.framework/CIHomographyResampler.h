/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface CIHomographyResampler : ImageHomographyResampler {
    CIContext * _ctx;
}

- (void).cxx_destruct;
- (struct __CVBuffer { }*)ResampleCVPixels:(struct __CVBuffer { }*)arg1 clipToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (id)init;

@end
