/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataFaceObject : AVMetadataObject <NSCopying> {
    AVMetadataFaceObjectInternal * _internal;
}

@property (readonly) long long faceID;
@property (readonly) bool hasRollAngle;
@property (readonly) bool hasYawAngle;
@property (readonly) double rollAngle;
@property (readonly) double yawAngle;

+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (long long)faceID;
- (bool)hasLeftEyeBounds;
- (bool)hasLeftEyeClosedConfidence;
- (bool)hasRightEyeBounds;
- (bool)hasRightEyeClosedConfidence;
- (bool)hasRollAngle;
- (bool)hasSmileConfidence;
- (bool)hasYawAngle;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4;
- (id)initWithFaceID:(long long)arg1 hasRollAngle:(bool)arg2 rollAngle:(double)arg3 hasYawAngle:(bool)arg4 yawAngle:(double)arg5 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8;
- (id)initWithFaceID:(long long)arg1 hasRollAngle:(bool)arg2 rollAngle:(double)arg3 hasYawAngle:(bool)arg4 yawAngle:(double)arg5 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 optionalInfoDict:(id)arg9 originalMetadataObject:(id)arg10 sourceCaptureInput:(id)arg11;
- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;
- (id)initWithType:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftEyeBounds;
- (int)leftEyeClosedConfidence;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightEyeBounds;
- (int)rightEyeClosedConfidence;
- (double)rollAngle;
- (int)smileConfidence;
- (double)yawAngle;

@end
