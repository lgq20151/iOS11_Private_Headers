/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapSmallCircleRenderer : NSObject <PXPlacesMapAnnotationRenderer, PXPlacesMapGeotaggableInfoDelegate> {
    <PXPlacesMapGeotaggableInfoDelegate> * _informationDelegate;
    <PXPlacesMapPipelineComponentProvider> * pipelineComponentProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property <PXPlacesMapGeotaggableInfoDelegate> *informationDelegate;
@property (readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minimumEdgeInsets;
@property (nonatomic) <PXPlacesMapPipelineComponentProvider> *pipelineComponentProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)annotationForGeotaggables:(id)arg1 initialCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (long long)annotationType;
- (void)imageForGeotaggable:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 networkAccessAllowed:(bool)arg3 andCompletion:(id /* block */)arg4;
- (id)informationDelegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumEdgeInsets;
- (id)pipelineComponentProvider;
- (void)reset;
- (void)setInformationDelegate:(id)arg1;
- (void)setPipelineComponentProvider:(id)arg1;
- (bool)supportsMoveAnimations;
- (id)viewForAnnotation:(id)arg1 andMapView:(id)arg2;

@end
