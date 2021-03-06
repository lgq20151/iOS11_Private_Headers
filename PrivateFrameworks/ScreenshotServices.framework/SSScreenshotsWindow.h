/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSScreenshotsWindow : SBFSecureWindow <SSActiveInterfaceOrientationObserverDelegate, SSDittoHostViewControllerDelegate> {
    SSActiveInterfaceOrientationObserver * _activeInterfaceOrientationObserver;
    int  _backlightNotificationToken;
    bool  _contentsHidden;
    long long  _lastActiveInterfaceOrientation;
    int  _lockNotificationToken;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    SSScreenshotsWindowRootViewController * _root;
}

@property (nonatomic) bool contentsHidden;

- (void).cxx_destruct;
- (void)_deviceBacklightChanged:(unsigned long long)arg1;
- (void)_deviceLockStateChanged:(unsigned long long)arg1;
- (void)_dismissAndHide;
- (id)_hostViewControllerIfExists;
- (void)_prepareRemoteViewControllerWithCompletionHandler:(id /* block */)arg1;
- (bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)_shouldControlAutorotation;
- (void)activateRemoteViewControllerIfAppropriate;
- (void)activeInterfaceOrientationObserver:(id)arg1 observedChangeToInterfaceOrientation:(long long)arg2 withDuration:(double)arg3;
- (bool)contentsHidden;
- (void)dealloc;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (void)remoteViewControllerDisconnectedFromHostViewController:(id)arg1 withError:(id)arg2;
- (void)remoteViewControllerOfHostViewControllerHasDismissedScreenshots:(id)arg1;
- (void)setContentsHidden:(bool)arg1;

@end
