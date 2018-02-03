/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoteApplication : NSObject {
    NSString * _machServiceName;
    unsigned int  _port;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didTakeScreenshot;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (void)sheetWithRemoteViewIdentifierDidDismiss:(id)arg1;
- (void)statusBarWillChangeOrientation:(long long)arg1 duration:(float)arg2;
- (void)updatePort;
- (void)wakeTimerFired;

@end
