/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEEquirectProject : PAEGeneratorDefaultBase {
    unsigned long long  backgroundHeight;
    unsigned long long  backgroundWidth;
    struct RGBA8Pixel { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } * defaultBackground;
}

- (bool)addParameters;
- (void)dealloc;
- (bool)frameCleanup;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 hardware:(bool*)arg2 software:(bool*)arg3;
- (struct HGRef<HGBitmapLoader> { struct HGBitmapLoader {} *x1; })getEquirectBackgroundWithWidth:(unsigned long long*)arg1 andHeight:(unsigned long long*)arg2;
- (struct HGEquirectProjectParams { double x1; float x2[16]; float x3[16]; bool x4; int x5; int x6; })getParams:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 withOutputImage:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 xRotation:(double)arg5 yRotation:(double)arg6 zRotation:(double)arg7 paramAPI:(id)arg8;
- (double)getProjectionFOVYDegrees:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (struct PCMatrix44Tmpl<float> { float x1[4][4]; })getViewMatrix:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (id)initWithAPIManager:(id)arg1;
- (id)properties;
- (void)readDefaultBackgroundImageWithWidth:(unsigned long long*)arg1 andHeight:(unsigned long long*)arg2;
- (bool)renderOutput:(id)arg1 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg2;
- (bool)variesOverTime;

@end
