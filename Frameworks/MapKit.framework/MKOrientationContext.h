/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKOrientationContext : NSObject {
    NSMutableArray * orientViews;
    UIView * projectionView;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * relativeViewFrames;
    NSArray * relativeViews;
}

- (void).cxx_destruct;
- (void)_computeRelativeViewFrame:(id)arg1;
- (void)_computeRelativeViewFrames;
- (void)dealloc;
- (id)initWithViewsToOrient:(id)arg1 relativeViews:(id)arg2 projectionView:(id)arg3;
- (void)invalidateView:(id)arg1;

@end