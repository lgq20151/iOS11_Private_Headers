/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
 */

@interface BLAlert : NSObject <BLAlertViewControllerDelegate> {
    NSArray * _actions;
    BLAlertViewController * _alertView;
    BLAlertAction * _cancelAction;
    id /* block */  _conditionBlock;
    id  _context;
    id /* block */  _executionBlock;
    int  _options;
    bool  _showing;
    BLAlert * _strongSelf;
}

@property (copy) id /* block */ conditionBlock;
@property (retain) id context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) BLAlert *strongSelf;
@property (readonly) Class superclass;

+ (id)pendingAlerts;
+ (void)performWithTitle:(id)arg1 message:(id)arg2 action:(id)arg3;
+ (id)popPendingAlert;
+ (void)pushPendingAlert:(id)arg1;

- (void).cxx_destruct;
- (void)alertViewController:(id)arg1 didPressButtonAtIndex:(long long)arg2;
- (void)cancelDelayedHide;
- (id /* block */)conditionBlock;
- (id)context;
- (void)dealloc;
- (void)hide;
- (void)hide:(bool)arg1;
- (void)hideWithCompletionBlock:(id /* block */)arg1;
- (void)hideWithDelay:(double)arg1;
- (void)hideWithDelay:(double)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelAction:(id)arg3 otherActions:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 options:(int)arg3 cancelAction:(id)arg4 otherActions:(id)arg5;
- (bool)isShowing;
- (void)setConditionBlock:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setStrongSelf:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)show;
- (void)showPendingAlertIfNeeded;
- (void)showWithExecutionBlock:(id /* block */)arg1;
- (id)strongSelf;
- (bool)wantSingular;

@end