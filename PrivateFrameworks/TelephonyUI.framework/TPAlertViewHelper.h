/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPAlertViewHelper : NSObject <UIAlertViewDelegate> {
    UIAlertView * _alertView;
    id /* block */  _completionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long firstOtherButtonIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_allHelpersArray;
+ (id)_workQueue;
+ (id)alertHelperWithHandler:(id /* block */)arg1 style:(long long)arg2 title:(id)arg3 message:(id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitles:(id)arg6;

- (void).cxx_destruct;
- (id)_initWithTitle:(id)arg1 style:(long long)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)_underlyingAlertView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)dismissWithCancelAnimated:(bool)arg1;
- (void)dismissWithClickedButtonIndexAnimated:(long long)arg1;
- (long long)firstOtherButtonIndex;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)show;

@end