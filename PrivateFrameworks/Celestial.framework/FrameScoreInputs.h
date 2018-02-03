/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FrameScoreInputs : NSObject {
    long long  _averageFocusScore;
    struct { 
        bool hasNose; 
        struct CGPoint { 
            double x; 
            double y; 
        } nose; 
        bool hasMouth; 
        struct CGPoint { 
            double x; 
            double y; 
        } mouth; 
        bool hasLeftEye; 
        struct CGPoint { 
            double x; 
            double y; 
        } leftEye; 
        bool hasRightEye; 
        struct CGPoint { 
            double x; 
            double y; 
        } rightEye; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } rectangle; 
        bool hasExpression; 
        struct { 
            float smiling; 
            float disgust; 
            float neutral; 
            float surprise; 
            float scream; 
            float suspicious; 
        } expression; 
        bool hasIsBlinking; 
        bool isBlinking; 
        bool hasBlinkScore; 
        float blinkScore; 
        bool hasFaceQuality; 
        float faceQuality; 
        float orientation; 
        bool hasFaceAngle; 
        struct { 
            float pitch; 
            float yaw; 
            float roll; 
        } faceAngle; 
    }  _face;
    bool  _haveFace;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timestamp;
}

@property long long averageFocusScore;
@property struct { bool x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; bool x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; bool x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; bool x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; bool x10; struct { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; float x_11_1_5; float x_11_1_6; } x11; bool x12; bool x13; bool x14; float x15; bool x16; float x17; float x18; bool x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; } x20; } face;
@property bool haveFace;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;

- (long long)averageFocusScore;
- (struct { bool x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; bool x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; bool x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; bool x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; bool x10; struct { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; float x_11_1_5; float x_11_1_6; } x11; bool x12; bool x13; bool x14; float x15; bool x16; float x17; float x18; bool x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; } x20; })face;
- (bool)haveFace;
- (id)init;
- (void)setAverageFocusScore:(long long)arg1;
- (void)setFace:(struct { bool x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; bool x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; bool x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; bool x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; bool x10; struct { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; float x_11_1_5; float x_11_1_6; } x11; bool x12; bool x13; bool x14; float x15; bool x16; float x17; float x18; bool x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; } x20; })arg1;
- (void)setHaveFace:(bool)arg1;
- (void)setTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;

@end
