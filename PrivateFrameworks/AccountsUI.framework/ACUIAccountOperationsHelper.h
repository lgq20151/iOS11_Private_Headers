/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAccountOperationsHelper : NSObject {
    NSObject<OS_dispatch_queue> * _accountOperationsQueue;
    ACAccountStore * _accountStore;
    <ACUIAccountOperationsDelegate> * _delegate;
    bool  _isRemovingAccount;
    bool  _isSavingAccount;
}

@property (nonatomic) <ACUIAccountOperationsDelegate> *delegate;
@property bool isRemovingAccount;
@property bool isSavingAccount;

- (void).cxx_destruct;
- (id)_desiredDataclassActionsFromPossibleActions:(id)arg1 forAccount:(id)arg2 withError:(id*)arg3;
- (id)delegate;
- (id)initWithAccountStore:(id)arg1;
- (bool)isRemovingAccount;
- (bool)isSavingAccount;
- (void)removeAccount:(id)arg1;
- (void)saveAccount:(id)arg1;
- (void)saveAccount:(id)arg1 requireVerification:(bool)arg2;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 requireVerification:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setIsRemovingAccount:(bool)arg1;
- (void)setIsSavingAccount:(bool)arg1;

@end
