/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface DetectedFace : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _approximateFaceRect;
    NSNumber * _confidence;
    struct CGPoint { 
        double x; 
        double y; 
    }  _faceCenter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceRect;
    int  _frames;
    struct CGPoint { 
        double x; 
        double y; 
    }  _leftEye;
    struct CGPoint { 
        double x; 
        double y; 
    }  _mouthCenter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rightEye;
    NSNumber * _size;
    int  _trackID;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } approximateFaceRect;
@property (nonatomic, retain) NSNumber *confidence;
@property (nonatomic) struct CGPoint { double x1; double x2; } faceCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceRect;
@property (nonatomic) int frames;
@property (nonatomic) struct CGPoint { double x1; double x2; } leftEye;
@property (nonatomic) struct CGPoint { double x1; double x2; } mouthCenter;
@property (nonatomic) struct CGPoint { double x1; double x2; } rightEye;
@property (nonatomic, retain) NSNumber *size;
@property (nonatomic) int trackID;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })approximateFaceRect;
- (id)confidence;
- (id)description;
- (struct CGPoint { double x1; double x2; })faceCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRect;
- (int)frames;
- (id)initWithFaceFeature:(id)arg1 withImageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithFaceSize:(id)arg1 leftEye:(struct CGPoint { double x1; double x2; })arg2 rightEye:(struct CGPoint { double x1; double x2; })arg3 mouthCenter:(struct CGPoint { double x1; double x2; })arg4 faceCenter:(struct CGPoint { double x1; double x2; })arg5 confidence:(id)arg6 trackID:(int)arg7 frames:(int)arg8;
- (struct CGPoint { double x1; double x2; })leftEye;
- (struct CGPoint { double x1; double x2; })mouthCenter;
- (struct CGPoint { double x1; double x2; })rightEye;
- (void)setApproximateFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConfidence:(id)arg1;
- (void)setFaceCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrames:(int)arg1;
- (void)setLeftEye:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMouthCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRightEye:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSize:(id)arg1;
- (void)setTrackID:(int)arg1;
- (id)size;
- (int)trackID;

@end