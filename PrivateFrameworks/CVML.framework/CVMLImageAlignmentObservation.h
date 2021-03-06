/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLImageAlignmentObservation : CVMLObservation {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _alignmentTransform;
    CVMLImageRegistrationSignature * _baseImageSignature;
    CVMLImageRegistrationSignature * _currentImageSignature;
}

@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } alignmentTransform;
@property (retain) CVMLImageRegistrationSignature *baseImageSignature;
@property (retain) CVMLImageRegistrationSignature *currentImageSignature;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })alignmentTransform;
- (id)baseImageSignature;
- (id)currentImageSignature;
- (void)setAlignmentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setBaseImageSignature:(id)arg1;
- (void)setCurrentImageSignature:(id)arg1;

@end
