/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKBalloonAnnotationCalloutController : MKAnnotationCalloutController {
    MKAnnotationView * _annotationView;
    _MKBalloonCalloutView * _calloutView;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) MKAnnotationView *annotationView;

- (void).cxx_destruct;
- (void)_handleTapOnCallout:(id)arg1;
- (bool)_isShowingCallout;
- (void)_showCalloutAnimated:(bool)arg1 scrollToFit:(bool)arg2 avoid:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)annotationView;
- (bool)calloutContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)hideCalloutAnimated:(bool)arg1;
- (void)setAnnotationView:(id)arg1;
- (void)showCalloutForAnnotationView:(id)arg1 animated:(bool)arg2 scrollToFit:(bool)arg3 avoid:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;

@end