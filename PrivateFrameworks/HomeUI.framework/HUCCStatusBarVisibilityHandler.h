/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCCStatusBarVisibilityHandler : NSObject <HUStatusBarVisibilityHandling> {
    <CCUIStatusBarHidingAssertion> * _activeHidingAssertion;
    <CCUIControlCenterSystemAgent> * _systemAgent;
}

@property (nonatomic, retain) <CCUIStatusBarHidingAssertion> *activeHidingAssertion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isStatusBarHidden, nonatomic, readonly) bool statusBarHidden;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CCUIControlCenterSystemAgent> *systemAgent;

- (void).cxx_destruct;
- (id)activeHidingAssertion;
- (id)init;
- (id)initWithCCSystemAgent:(id)arg1;
- (bool)isStatusBarHidden;
- (void)setActiveHidingAssertion:(id)arg1;
- (void)setStatusBarHidden:(bool)arg1 withAnimationSettings:(id)arg2;
- (id)systemAgent;

@end
