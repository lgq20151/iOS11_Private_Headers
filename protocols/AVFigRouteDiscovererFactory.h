/* made by EzioChiu.
 */

@protocol AVFigRouteDiscovererFactory <NSObject>

@required

- (struct OpaqueFigRouteDiscoverer { }*)createRouteDiscovererWithAllocator:(const struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;

@end
