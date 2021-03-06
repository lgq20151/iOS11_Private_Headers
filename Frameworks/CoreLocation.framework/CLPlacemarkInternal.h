/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLPlacemarkInternal : NSObject {
    NSDictionary * addressDictionary;
    NSArray * areasOfInterest;
    GEOMapItemStorage * geoMapItemStorage;
    CLLocation * location;
    CLRegion * region;
    NSTimeZone * timeZone;
}

- (id)init;

@end
