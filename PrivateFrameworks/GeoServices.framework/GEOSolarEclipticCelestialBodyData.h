/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSolarEclipticCelestialBodyData : NSObject {
    double  _latitude;
    double  _longitude;
}

@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;

- (id)initWithDate:(id)arg1 body:(long long)arg2;
- (double)latitude;
- (double)longitude;

@end