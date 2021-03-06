/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface M2MController : NSObject {
    struct __IOSurfaceAccelerator { } * _accelRef;
    struct { 
        int hTaps; 
        int vTaps; 
        int hPhases; 
        int vPhases; 
        int prePointBits; 
        int postPointBits; 
    }  _cap;
    bool  _compensateGpuShift;
    struct __CFDictionary { } * _runOptions;
    bool  _useCustomCoeff;
}

- (void)dealloc;
- (int)downsample:(struct __CVBuffer { }*)arg1 dst:(struct __CVBuffer { }*)arg2 sync_m2m:(bool)arg3;
- (id)init:(bool)arg1;
- (int)queryCapabilities;
- (int)setCustomFilter:(int)arg1 src:(struct __CVBuffer { }*)arg2 dst:(struct __CVBuffer { }*)arg3 luma_param:(float)arg4 chroma_param:(float)arg5;
- (int)transform:(struct __CVBuffer { }*)arg1 srcRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 dst:(struct __CVBuffer { }*)arg3 dstRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 rotate:(int)arg5 sync_m2m:(bool)arg6;
- (int)transform:(struct __CVBuffer { }*)arg1 srcRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 dst:(struct __CVBuffer { }*)arg3 sync_m2m:(bool)arg4;

@end
