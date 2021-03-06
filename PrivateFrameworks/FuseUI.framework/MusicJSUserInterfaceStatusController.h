/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSUserInterfaceStatusController : IKJSObject <MusicJSUserInterfaceStatusController>

- (bool)canShowConnect;
- (bool)canShowRadio;
- (bool)canShowSubscriptionContent;
- (bool)hasUserAcknowledgedWelcomeScreen;
- (bool)hasUserRequestedSubscriptionHidden;
- (void)setHasUserAcknowledgedWelcomeScreen:(bool)arg1;
- (void)setHasUserRequestedSubscriptionHidden:(bool)arg1;
- (id)tabState;

@end
