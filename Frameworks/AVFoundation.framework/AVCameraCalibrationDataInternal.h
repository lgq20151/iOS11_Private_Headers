/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCameraCalibrationDataInternal : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  extrinsicMatrix;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  intrinsicMatrix;
    struct CGSize { 
        double width; 
        double height; 
    }  intrinsicMatrixReferenceDimensions;
    NSData * inverseLensDistortionCoefficients;
    NSData * inverseLensDistortionLookupTable;
    struct CGPoint { 
        double x; 
        double y; 
    }  lensDistortionCenter;
    NSData * lensDistortionCoefficients;
    NSData * lensDistortionLookupTable;
    float  pixelSize;
}

@end
