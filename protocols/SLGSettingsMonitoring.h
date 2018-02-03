/* made by EzioChiu.
 */

@protocol SLGSettingsMonitoring <NSObject>

@required

- (<SLGSettingsMonitorDelegate> *)delegate;
- (bool)isEnabled;
- (void)setDelegate:(id <SLGSettingsMonitorDelegate>)arg1;
- (void)setEnabled:(bool)arg1;

@end
