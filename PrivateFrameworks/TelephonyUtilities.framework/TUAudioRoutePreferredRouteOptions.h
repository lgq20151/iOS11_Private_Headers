/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioRoutePreferredRouteOptions : NSObject {
    bool  _active;
}

@property (getter=isActive, nonatomic) bool active;

- (bool)isActive;
- (void)setActive:(bool)arg1;

@end
