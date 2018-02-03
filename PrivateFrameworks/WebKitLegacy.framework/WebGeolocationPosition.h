/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebGeolocationPosition : NSObject {
    WebGeolocationPositionInternal * _internal;
}

- (void)dealloc;
- (id)initWithGeolocationPosition:(struct RefPtr<WebCore::GeolocationPosition> { struct GeolocationPosition {} *x1; }*)arg1;
- (id)initWithTimestamp:(double)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4;

@end
