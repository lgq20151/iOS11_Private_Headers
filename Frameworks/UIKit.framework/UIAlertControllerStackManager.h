/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertControllerStackManager : NSObject {
    NSMutableArray * _alertControllerStack;
    NSMutableArray * _hiddenAlertControllers;
}

+ (id)sharedStackManager;

- (void).cxx_destruct;
- (void)_addAlertControllerToStack:(id)arg1;
- (void)_alertControllerDidAppear:(id)arg1;
- (void)_alertControllerDidDisappear:(id)arg1;
- (bool)_alertControllerShouldBeTrackedInStack:(id)arg1;
- (long long)_alertControllerStackCount;
- (void)_alertControllerWillAppear:(id)arg1;
- (void)_alertControllerWillDisappear:(id)arg1;
- (void)_didHideAlertController:(id)arg1;
- (void)_hideStackedAlertControllers;
- (void)_removeAlertControllerFromStack:(id)arg1;
- (void)_showHiddenStackedAlertControllers;
- (id)_topAlertControllerInStack;
- (void)_willHideAlertController:(id)arg1;
- (void)_willShowAlertController:(id)arg1;
- (id)init;

@end
