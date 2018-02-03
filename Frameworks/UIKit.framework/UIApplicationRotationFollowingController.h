/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIApplicationRotationFollowingController : UIViewController {
    bool  _sizesWindowToScene;
}

@property (nonatomic) bool sizesWindowToScene;

- (id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2;
- (long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setSizesWindowToScene:(bool)arg1;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)sizesWindowToScene;
- (unsigned long long)supportedInterfaceOrientations;
- (void)window:(id)arg1 setupWithInterfaceOrientation:(long long)arg2;

@end
