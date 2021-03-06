/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSettingsController : UINavigationController {
    UIBarButtonItem * _dismissButton;
}

@property (nonatomic, retain) UIBarButtonItem *dismissButton;

- (void).cxx_destruct;
- (id)_defaultDismissButton;
- (void)_dismiss;
- (id)dismissButton;
- (id)initWithRootModuleController:(id)arg1;
- (id)initWithRootSettings:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)setDismissButton:(id)arg1;

@end
