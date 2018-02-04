/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIAlertView : UIAlertView {
    id /* block */  _action;
    id /* block */  _actionWithText;
    NSObject<OS_dispatch_semaphore> * _buttonChosenSemaphore;
    long long  _chosenButtonIndex;
}

@property (readonly) long long chosenButtonIndex;

- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (long long)chosenButtonIndex;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 action:(id /* block */)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 otherButtonTitle:(id)arg4 action:(id /* block */)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 action:(id /* block */)arg6;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;

@end