/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertAction : NSObject <NSCopying> {
    UIAlertController * __alertController;
    NSString * __descriptiveText;
    UIInterfaceAction<UIAlertActionMutablePropertyObservering> * __interfaceActionRepresentation;
    <UIAlertActionViewRepresentation_Internal> * __representer;
    bool  _checked;
    UIViewController * _contentViewController;
    bool  _enabled;
    id /* block */  _handler;
    UIImage * _image;
    UIColor * _imageTintColor;
    bool  _isPreferred;
    NSString * _keyCommandInput;
    long long  _keyCommandModifierFlags;
    id /* block */  _shouldDismissHandler;
    id /* block */  _simpleHandler;
    long long  _style;
    NSString * _title;
    long long  _titleTextAlignment;
    UIColor * _titleTextColor;
}

@property (setter=_setAlertController:, nonatomic) UIAlertController *_alertController;
@property (setter=_setDescriptiveText:, nonatomic, copy) NSString *_descriptiveText;
@property (setter=_setInterfaceActionRepresentation:) UIInterfaceAction<UIAlertActionMutablePropertyObservering> *_interfaceActionRepresentation;
@property (setter=_setIsPreferred:) bool _isPreferred;
@property (setter=_setRepresenter:) <UIAlertActionViewRepresentation_Internal> *_representer;
@property (getter=_contentViewController, setter=_setContentViewController:, nonatomic, retain) UIViewController *contentViewController;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) UIImage *image;
@property (getter=_keyCommandInput, setter=_setKeyCommandInput:, nonatomic, copy) NSString *keyCommandInput;
@property (getter=_keyCommandModifierFlags, setter=_setKeyCommandModifierFlags:, nonatomic) long long keyCommandModifierFlags;
@property (nonatomic, copy) id /* block */ shouldDismissHandler;
@property (nonatomic, copy) id /* block */ simpleHandler;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSString *title;

+ (id)_actionWithContentViewController:(id)arg1 style:(long long)arg2;
+ (id)_actionWithContentViewController:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
+ (id)_actionWithTitle:(id)arg1 descriptiveText:(id)arg2 image:(id)arg3 style:(long long)arg4 handler:(id /* block */)arg5 shouldDismissHandler:(id /* block */)arg6;
+ (id)_actionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(id /* block */)arg4 shouldDismissHandler:(id /* block */)arg5;
+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_alertController;
- (id)_contentViewController;
- (id)_descriptiveText;
- (void)_didAddContentViewController;
- (id)_imageTintColor;
- (id)_interfaceActionRepresentation;
- (bool)_isChecked;
- (bool)_isPreferred;
- (id)_keyCommandInput;
- (long long)_keyCommandModifierFlags;
- (id)_representer;
- (void)_setAlertController:(id)arg1;
- (void)_setChecked:(bool)arg1;
- (void)_setContentViewController:(id)arg1;
- (void)_setDescriptiveText:(id)arg1;
- (void)_setImageTintColor:(id)arg1;
- (void)_setInterfaceActionRepresentation:(id)arg1;
- (void)_setIsPreferred:(bool)arg1;
- (void)_setKeyCommandInput:(id)arg1;
- (void)_setKeyCommandInput:(id)arg1 modifierFlags:(long long)arg2;
- (void)_setKeyCommandModifierFlags:(long long)arg1;
- (void)_setRepresenter:(id)arg1;
- (void)_setTitleTextAlignment:(long long)arg1;
- (void)_setTitleTextColor:(id)arg1;
- (long long)_titleTextAlignment;
- (id)_titleTextColor;
- (void)_willAddContentViewController;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id /* block */)handler;
- (id)image;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setShouldDismissHandler:(id /* block */)arg1;
- (void)setSimpleHandler:(id /* block */)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id /* block */)shouldDismissHandler;
- (id /* block */)simpleHandler;
- (long long)style;
- (id)title;

@end
