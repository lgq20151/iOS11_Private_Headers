/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigPAMFrameScore : NSObject {
    UtlFaceDetection * _faceDetection;
    NSMutableArray * _frameScoreInputs;
    struct FigPAMFrameScoreWeightsStruct { 
        float eyeOpen; 
        float smile; 
        float size; 
        float focusScore; 
        float time; 
        float quality; 
    }  _weights;
}

+ (bool)computeFrameScoreFeatureVector:(float)arg1 afScore:(float)arg2 face:(const struct { bool x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; bool x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; bool x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; bool x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; bool x10; struct { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; float x_11_1_5; float x_11_1_6; } x11; bool x12; bool x13; bool x14; float x15; bool x16; float x17; float x18; bool x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; } x20; }*)arg3 result:(float*)arg4;
+ (float)computeFrameScoreInnerProduct:(const float*)arg1 weights:(const struct FigPAMFrameScoreWeightsStruct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg2;
+ (int)featureCount;

- (void).cxx_destruct;
- (id)computeFeatureVectors:(int)arg1;
- (id)computeFrameScores:(int)arg1;
- (void)dealloc;
- (bool)detectFace:(int)arg1 image:(struct __CVBuffer { }*)arg2 meta:(id)arg3 useFocusRegion:(bool)arg4 faceRectangles:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 faceRectangleCount:(int)arg6 toImageTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg7 result:(struct { bool x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; bool x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; bool x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; bool x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; bool x10; struct { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; float x_11_1_5; float x_11_1_6; } x11; bool x12; bool x13; bool x14; float x15; bool x16; float x17; float x18; bool x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; } x20; }*)arg8;
- (id)init;
- (id)initWithMaxImageWidth:(int)arg1 height:(int)arg2 pixelFormat:(unsigned int)arg3;
- (bool)processImage:(struct __CVBuffer { }*)arg1 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 metadata:(id)arg3 useFocusRegion:(bool)arg4 faceRectangles:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 faceRectangleCount:(int)arg6 toImageTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg7 orientation:(int)arg8;
- (void)reset;
- (void)setWeights:(struct FigPAMFrameScoreWeightsStruct { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct FigPAMFrameScoreWeightsStruct { float x1; float x2; float x3; float x4; float x5; float x6; })weights;

@end
