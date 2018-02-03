/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface LightingFacePoints : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  faceRect;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceRect;

- (struct CGPoint { double x1; double x2; })bottomShadow;
- (struct CGPoint { double x1; double x2; })centerChin;
- (struct CGPoint { double x1; double x2; })centerNose;
- (float)faceHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRect;
- (float)faceWidth;
- (id)initWithFaceLandmarkDictionary:(id)arg1 forImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGPoint { double x1; double x2; }*)leftContour;
- (struct CGPoint { double x1; double x2; })leftEye;
- (struct CGPoint { double x1; double x2; }*)leftKickLights;
- (struct CGPoint { double x1; double x2; }*)leftNose;
- (struct CGPoint { double x1; double x2; }*)noseStrobe;
- (struct CGPoint { double x1; double x2; }*)rightContour;
- (struct CGPoint { double x1; double x2; })rightEye;
- (struct CGPoint { double x1; double x2; }*)rightKickLights;
- (struct CGPoint { double x1; double x2; }*)rightNose;
- (void)setFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
