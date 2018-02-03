/* made by EzioChiu.
 */

@protocol WebDeviceOrientationProvider <NSObject>

@required

- (WebDeviceOrientation *)lastOrientation;
- (void)startUpdating;
- (void)stopUpdating;

@end
