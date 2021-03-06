/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVADisparityPostprocessingRequest : NSObject {
    float  _currentFocusPosition;
    struct __CVBuffer { } * _destinationDisparityPixelBuffer;
    NSArray * _facesArray;
    struct __CVBuffer { } * _fixedPointDisparityPixelBuffer;
    NSArray * _focusRegion;
    int  _focusRegionType;
    bool  _isFocalPlaneLocked;
    struct __CVBuffer { } * _sourceColorPixelBuffer;
    struct CVAVector { 
        double x; 
        double y; 
        double z; 
    }  _sourceColorPixelBufferGlobalMotion;
    struct CVAVector { 
        double x; 
        double y; 
        double z; 
    }  _sourceColorPixelBufferGravity;
    struct CVAQuaternion { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _sourceColorPixelBufferOrientation;
}

@property (readonly) float currentFocusPosition;
@property (readonly) struct __CVBuffer { }*destinationDisparityPixelBuffer;
@property (readonly) NSArray *facesArray;
@property (readonly) struct __CVBuffer { }*fixedPointDisparityPixelBuffer;
@property (readonly) NSArray *focusRegion;
@property (readonly) int focusRegionType;
@property (readonly) bool isFocalPlaneLocked;
@property (readonly) struct __CVBuffer { }*sourceColorPixelBuffer;
@property (readonly) struct CVAVector { double x1; double x2; double x3; } sourceColorPixelBufferGlobalMotion;
@property (readonly) struct CVAVector { double x1; double x2; double x3; } sourceColorPixelBufferGravity;
@property (readonly) struct CVAQuaternion { double x1; double x2; double x3; double x4; } sourceColorPixelBufferOrientation;

- (void).cxx_destruct;
- (float)currentFocusPosition;
- (void)dealloc;
- (struct __CVBuffer { }*)destinationDisparityPixelBuffer;
- (id)facesArray;
- (struct __CVBuffer { }*)fixedPointDisparityPixelBuffer;
- (id)focusRegion;
- (int)focusRegionType;
- (id)initWithSourceColorPixelBuffer:(struct __CVBuffer { }*)arg1 fixedPointDisparityPixelBuffer:(struct __CVBuffer { }*)arg2 destinationDisparityPixelBuffer:(struct __CVBuffer { }*)arg3 focusRegion:(id)arg4 focusRegionType:(int)arg5 currentFocusPosition:(float)arg6 lockFocalPlane:(bool)arg7 sourceColorPixelBufferOrientation:(struct CVAQuaternion { double x1; double x2; double x3; double x4; })arg8;
- (id)initWithSourceColorPixelBuffer:(struct __CVBuffer { }*)arg1 fixedPointDisparityPixelBuffer:(struct __CVBuffer { }*)arg2 destinationDisparityPixelBuffer:(struct __CVBuffer { }*)arg3 focusRegion:(id)arg4 focusRegionType:(int)arg5 currentFocusPosition:(float)arg6 lockFocalPlane:(bool)arg7 sourceColorPixelBufferOrientation:(struct CVAQuaternion { double x1; double x2; double x3; double x4; })arg8 facesArray:(id)arg9;
- (id)initWithSourceColorPixelBuffer:(struct __CVBuffer { }*)arg1 fixedPointDisparityPixelBuffer:(struct __CVBuffer { }*)arg2 destinationDisparityPixelBuffer:(struct __CVBuffer { }*)arg3 focusRegion:(id)arg4 focusRegionType:(int)arg5 currentFocusPosition:(float)arg6 lockFocalPlane:(bool)arg7 sourceColorPixelBufferOrientation:(struct CVAQuaternion { double x1; double x2; double x3; double x4; })arg8 sourceColorPixelBufferGravity:(struct CVAVector { double x1; double x2; double x3; })arg9 sourceColorPixelBufferGlobalMotion:(struct CVAVector { double x1; double x2; double x3; })arg10;
- (id)initWithSourceColorPixelBuffer:(struct __CVBuffer { }*)arg1 fixedPointDisparityPixelBuffer:(struct __CVBuffer { }*)arg2 destinationDisparityPixelBuffer:(struct __CVBuffer { }*)arg3 focusRegion:(id)arg4 focusRegionType:(int)arg5 currentFocusPosition:(float)arg6 lockFocalPlane:(bool)arg7 sourceColorPixelBufferOrientation:(struct CVAQuaternion { double x1; double x2; double x3; double x4; })arg8 sourceColorPixelBufferGravity:(struct CVAVector { double x1; double x2; double x3; })arg9 sourceColorPixelBufferGlobalMotion:(struct CVAVector { double x1; double x2; double x3; })arg10 facesArray:(id)arg11;
- (bool)isFocalPlaneLocked;
- (struct __CVBuffer { }*)sourceColorPixelBuffer;
- (struct CVAVector { double x1; double x2; double x3; })sourceColorPixelBufferGlobalMotion;
- (struct CVAVector { double x1; double x2; double x3; })sourceColorPixelBufferGravity;
- (struct CVAQuaternion { double x1; double x2; double x3; double x4; })sourceColorPixelBufferOrientation;

@end
