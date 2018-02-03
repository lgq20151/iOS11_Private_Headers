/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCTimerContext : NSObject {
    bool  _enabled;
}

@property (nonatomic) bool enabled;

- (void)disable;
- (bool)enabled;
- (id)init;
- (void)setEnabled:(bool)arg1;

@end
