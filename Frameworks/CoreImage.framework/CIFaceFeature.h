/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFaceFeature : CIFeature {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  bounds;
    float  faceAngle;
    bool  hasFaceAngle;
    bool  hasLeftEyePosition;
    bool  hasMouthPosition;
    bool  hasRightEyePosition;
    bool  hasSmile;
    bool  hasTrackingFrameCount;
    bool  hasTrackingID;
    bool  leftEyeClosed;
    struct CGPoint { 
        double x; 
        double y; 
    }  leftEyePosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  mouthPosition;
    bool  rightEyeClosed;
    struct CGPoint { 
        double x; 
        double y; 
    }  rightEyePosition;
    int  trackingFrameCount;
    int  trackingID;
}

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (readonly) float faceAngle;
@property (readonly) bool hasFaceAngle;
@property (readonly) bool hasLeftEyePosition;
@property (readonly) bool hasMouthPosition;
@property (readonly) bool hasRightEyePosition;
@property (readonly) bool hasSmile;
@property (readonly) bool hasTrackingFrameCount;
@property (readonly) bool hasTrackingID;
@property (readonly) bool leftEyeClosed;
@property (readonly) struct CGPoint { double x1; double x2; } leftEyePosition;
@property (readonly) struct CGPoint { double x1; double x2; } mouthPosition;
@property (readonly) bool rightEyeClosed;
@property (readonly) struct CGPoint { double x1; double x2; } rightEyePosition;
@property (readonly) int trackingFrameCount;
@property (readonly) int trackingID;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (float)faceAngle;
- (bool)hasFaceAngle;
- (bool)hasLeftEyePosition;
- (bool)hasMouthPosition;
- (bool)hasRightEyePosition;
- (bool)hasSmile;
- (bool)hasTrackingFrameCount;
- (bool)hasTrackingID;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 hasLeftEyePosition:(bool)arg2 leftEyePosition:(struct CGPoint { double x1; double x2; })arg3 hasRightEyePosition:(bool)arg4 rightEyePosition:(struct CGPoint { double x1; double x2; })arg5 hasMouthPosition:(bool)arg6 mouthPosition:(struct CGPoint { double x1; double x2; })arg7 hasFaceAngle:(bool)arg8 faceAngle:(float)arg9 hasTrackingID:(bool)arg10 trackingID:(int)arg11 hasTrackingFrameCount:(bool)arg12 trackingFrameCount:(int)arg13 hasSmile:(bool)arg14 leftEyeClosed:(bool)arg15 rightEyeClosed:(bool)arg16;
- (bool)leftEyeClosed;
- (struct CGPoint { double x1; double x2; })leftEyePosition;
- (struct CGPoint { double x1; double x2; })mouthPosition;
- (bool)rightEyeClosed;
- (struct CGPoint { double x1; double x2; })rightEyePosition;
- (int)trackingFrameCount;
- (int)trackingID;
- (id)type;

@end