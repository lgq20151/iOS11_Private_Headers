/* made by EzioChiu.
 */

@protocol _SFPBLatLng <NSObject>

@required

- (bool)hasLat;
- (bool)hasLng;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (double)lat;
- (double)lng;
- (void)setLat:(double)arg1;
- (void)setLng:(double)arg1;

@end
