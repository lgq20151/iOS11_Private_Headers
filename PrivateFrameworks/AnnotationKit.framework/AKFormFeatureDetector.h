/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKFormFeatureDetector : NSObject {
    NSObject<AKFormFeatureDetectorDelegate> * _delegate;
}

@property (nonatomic) NSObject<AKFormFeatureDetectorDelegate> *delegate;

+ (struct CGContext { }*)_newBitmapFromCGPDFDocument:(struct CGPDFDocument { }*)arg1;
+ (struct CGContext { }*)_newBitmapInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onPage:(id)arg2 scale:(double)arg3;

- (void).cxx_destruct;
- (id)_boxOnLine:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)_checkboxAtPoint:(struct CGPoint { double x1; double x2; })arg1 onPage:(id)arg2 pageBitmap:(struct CGContext { }*)arg3;
- (id)_defaultFeatureForPoint:(struct CGPoint { double x1; double x2; })arg1 onPage:(id)arg2 snapToVerticalEdges:(bool)arg3;
- (void)_drawThresholdedBitmapForTestForPageBitmap:(struct CGContext { }*)arg1 withPixels:(float*)arg2;
- (id)_featureAtPoint:(struct CGPoint { double x1; double x2; })arg1 onPage:(id)arg2 mode:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_findExtentForLineTop:(double)arg1 lineBottom:(double)arg2 x:(double)arg3 onPage:(id)arg4;
- (unsigned long long)_findLineEdgeTypeOnLeft:(bool)arg1 startingAt:(float*)arg2 withPageLeftEdge:(float*)arg3 withPageWidth:(long long)arg4 andFormHeight:(unsigned long long)arg5;
- (struct { bool x1; double x2; bool x3; double x4; })_findVerticalEdgesAtPoint:(struct CGPoint { double x1; double x2; })arg1 extent:(long long)arg2 onPage:(id)arg3;
- (bool)_floatPixelBufferForCGContext:(struct CGContext { }*)arg1 imageBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg2;
- (id)_formFieldAtPoint:(struct CGPoint { double x1; double x2; })arg1 onPage:(id)arg2 enforceMaxWidth:(bool)arg3 pageBitmap:(struct CGContext { }*)arg4;
- (id)_lineAtPoint:(struct CGPoint { double x1; double x2; })arg1 onPage:(id)arg2 useVerticalCenter:(bool)arg3;
- (long long)_scanToEdgeOfFormFieldStartingAtPoint:(struct CGPoint { double x1; double x2; })arg1 withBitmapData:(float*)arg2 width:(long long)arg3 height:(long long)arg4 bottomRowStartsAt:(float*)arg5 bottomRowEndsAt:(float*)arg6 withLineThickness:(long long)arg7 gapWidthForDottedLines:(long long)arg8 separatorHeights:(id)arg9 andRegionHeight:(long long*)arg10 trackAverageSpacingWidth:(long long*)arg11 trackFarthestPossibleEdge:(long long*)arg12 trackNumberOfSegments:(long long*)arg13 trackNumberOfGapsForDottedLine:(long long*)arg14 goingLeft:(bool)arg15;
- (float*)_shiftScanAwayFromEdgeInPixels:(float*)arg1;
- (id)_snappedFormFieldForField:(id)arg1;
- (float*)_thresholdPixelStripIn:(float*)arg1 withImageLenth:(long long)arg2 thresholdValue:(float)arg3 startingPtr:(float*)arg4 withThresholdLength:(long long)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_translateFeature:(id)arg1 toPageOrigin:(struct CGPoint { double x1; double x2; })arg2;
- (void)dealloc;
- (id)delegate;
- (id)featureAtPoint:(struct CGPoint { double x1; double x2; })arg1 onPage:(id)arg2 mode:(long long)arg3;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;

@end