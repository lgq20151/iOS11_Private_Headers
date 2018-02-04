/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAnnotationPointOfInterestHelper : NSObject

+ (unsigned long long)_concreteDraggableAreaForPoint:(struct CGPoint { double x1; double x2; })arg1 onAnnotation:(id)arg2 withScale:(double)arg3 pageControllerForPixelAlignment:(id)arg4;
+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3;
+ (void)_concretePointsOfInterest:(id*)arg1 withVisualStyle:(id*)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;
+ (struct CGPoint { double x1; double x2; })_concreteValidatePoint:(struct CGPoint { double x1; double x2; })arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4;
+ (Class)_poiHelperClassForAnnotation:(id)arg1;
+ (bool)_point:(struct CGPoint { double x1; double x2; })arg1 isInCircleWithRadius:(double)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
+ (bool)_point:(struct CGPoint { double x1; double x2; })arg1 isInRectWithSize:(double)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
+ (unsigned long long)draggableAreaForPoint:(struct CGPoint { double x1; double x2; })arg1 onAnnotation:(id)arg2 withScale:(double)arg3 pageControllerForPixelAlignment:(id)arg4;
+ (double)draggableAreaScaleFactorForScaleFactor:(double)arg1;
+ (struct CGPoint { double x1; double x2; })pointForDraggableArea:(unsigned long long)arg1 onAnnotation:(id)arg2 pageControllerForPixelAlignment:(id)arg3;
+ (void)pointsOfInterest:(id*)arg1 withVisualStyle:(id*)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;
+ (struct CGPoint { double x1; double x2; })validatePoint:(struct CGPoint { double x1; double x2; })arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4;

@end