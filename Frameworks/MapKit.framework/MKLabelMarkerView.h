/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLabelMarkerView : MKAnnotationView {
    UIView * _anchorDotView;
    bool  _balloonCalloutShouldOriginateFromSmallSize;
    long long  _balloonCalloutStyle;
    UIView * _balloonContentView;
    UIColor * _balloonFillColor;
    UIImage * _balloonImage;
    UIColor * _balloonStrokeColor;
    MKMapView * _mapView;
    bool  _needsToResolveBalloonAttributes;
    double  _smallBalloonScaleFactor;
}

@property (nonatomic) MKMapView *mapView;

+ (bool)_followsTerrain;

- (void).cxx_destruct;
- (void)_addBalloonCalloutView:(id)arg1;
- (bool)_balloonCalloutShouldOriginateFromSmallSize:(double*)arg1;
- (long long)_balloonCalloutStyle;
- (id)_balloonContentView;
- (id)_balloonImage;
- (id)_balloonStrokeColor;
- (id)_balloonTintColor;
- (void)_configureBalloonForDataIconImageKeys:(id)arg1 scale:(double)arg2;
- (void)_deregisterObserver;
- (void)_didHideBalloonCalloutView:(id)arg1;
- (void)_registerObserver;
- (void)_resolveBalloonAttributesIfNecessary;
- (bool)_shouldShowCallout;
- (bool)_useBalloonCallouts;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)mapView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)prepareForReuse;
- (void)setAnnotation:(id)arg1;
- (void)setMapView:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
