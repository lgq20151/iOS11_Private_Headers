/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedEnrouteNotice : NSObject {
    GEOEnrouteNotice * _enrouteNotice;
    NSArray * _guidanceEvents;
    GEOComposedRoute * _route;
    struct { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinate;
}

@property (nonatomic, readonly) unsigned int groupIdentifier;
@property (nonatomic, readonly) NSArray *guidanceEvents;
@property (nonatomic, readonly) bool hasGroupIdentifier;
@property (nonatomic, readonly) bool hasHighlightDistance;
@property (nonatomic, readonly) unsigned int highlightDistance;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) GEOLatLng *position;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; } routeCoordinate;
@property (nonatomic, readonly) GEOComposedTrafficCamera *trafficCamera;

- (void).cxx_destruct;
- (id)description;
- (id)detailFormatForLocation:(id)arg1;
- (unsigned int)groupIdentifier;
- (id)guidanceEvents;
- (bool)hasGroupIdentifier;
- (bool)hasHighlightDistance;
- (unsigned int)highlightDistance;
- (id)identifier;
- (id)initWithEnrouteNotice:(id)arg1 onRoute:(id)arg2;
- (struct { unsigned int x1; float x2; })routeCoordinate;
- (id)titleFormatForLocation:(id)arg1;
- (id)trafficCamera;

@end
