/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRemoteViewControllerConnectionInfo : NSObject {
    _UIHostedWindowHostingHandle * _hostedWindowHostingHandle;
    _UIViewServiceInterface * _interface;
    long long  _preferredStatusBarStyle;
    int  _preferredStatusBarVisibility;
    _UIHostedWindowHostingHandle * _remoteKeyboardsWindowHostingHandle;
    BSMachPortSendRight * _serviceAccessibilityServerPortWrapper;
    id  _serviceViewControllerControlMessageProxy;
    id  _serviceViewControllerProxy;
    NSArray * _serviceViewControllerSupportedInterfaceOrientations;
    id  _textEffectsOperatorProxy;
    _UIHostedWindowHostingHandle * _textEffectsWindowAboveStatusBarHostingHandle;
    _UIHostedWindowHostingHandle * _textEffectsWindowHostingHandle;
    id  _viewControllerOperatorProxy;
}

@property (retain) _UIHostedWindowHostingHandle *hostedWindowHostingHandle;
@property (retain) _UIViewServiceInterface *interface;
@property long long preferredStatusBarStyle;
@property int preferredStatusBarVisibility;
@property (retain) _UIHostedWindowHostingHandle *remoteKeyboardsWindowHostingHandle;
@property (retain) BSMachPortSendRight *serviceAccessibilityServerPortWrapper;
@property (retain) id serviceViewControllerControlMessageProxy;
@property (retain) id serviceViewControllerProxy;
@property (retain) NSArray *serviceViewControllerSupportedInterfaceOrientations;
@property (retain) id textEffectsOperatorProxy;
@property (retain) _UIHostedWindowHostingHandle *textEffectsWindowAboveStatusBarHostingHandle;
@property (retain) _UIHostedWindowHostingHandle *textEffectsWindowHostingHandle;
@property (retain) id viewControllerOperatorProxy;

- (void).cxx_destruct;
- (id)hostedWindowHostingHandle;
- (id)interface;
- (long long)preferredStatusBarStyle;
- (int)preferredStatusBarVisibility;
- (id)remoteKeyboardsWindowHostingHandle;
- (id)serviceAccessibilityServerPortWrapper;
- (id)serviceViewControllerControlMessageProxy;
- (id)serviceViewControllerProxy;
- (id)serviceViewControllerSupportedInterfaceOrientations;
- (void)setHostedWindowHostingHandle:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setPreferredStatusBarStyle:(long long)arg1;
- (void)setPreferredStatusBarVisibility:(int)arg1;
- (void)setRemoteKeyboardsWindowHostingHandle:(id)arg1;
- (void)setServiceAccessibilityServerPortWrapper:(id)arg1;
- (void)setServiceViewControllerControlMessageProxy:(id)arg1;
- (void)setServiceViewControllerProxy:(id)arg1;
- (void)setServiceViewControllerSupportedInterfaceOrientations:(id)arg1;
- (void)setTextEffectsOperatorProxy:(id)arg1;
- (void)setTextEffectsWindowAboveStatusBarHostingHandle:(id)arg1;
- (void)setTextEffectsWindowHostingHandle:(id)arg1;
- (void)setViewControllerOperatorProxy:(id)arg1;
- (id)textEffectsOperatorProxy;
- (id)textEffectsWindowAboveStatusBarHostingHandle;
- (id)textEffectsWindowHostingHandle;
- (id)viewControllerOperatorProxy;

@end
