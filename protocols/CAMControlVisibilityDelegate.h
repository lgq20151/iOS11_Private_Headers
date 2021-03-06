/* made by EzioChiu.
 */

@protocol CAMControlVisibilityDelegate <NSObject>

@required

- (bool)shouldHideElapsedTimeView;
- (bool)shouldHideFilterNameBadge;
- (bool)shouldHideFlashButton;
- (bool)shouldHideFlipButton;
- (bool)shouldHideHDRButton;
- (bool)shouldHideIrisButton;
- (bool)shouldHideLightingControl;
- (bool)shouldHideLightingNameBadgeForOrientation:(long long)arg1;
- (bool)shouldHidePortraitModeInstructionLabel;
- (bool)shouldHideTimerButton;
- (bool)shouldHideTopBar;
- (bool)shouldShiftPreviewForUtilityBar;

@end
