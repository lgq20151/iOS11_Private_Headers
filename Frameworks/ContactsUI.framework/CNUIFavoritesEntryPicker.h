/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIFavoritesEntryPicker : NSObject <CNContactActionsControllerDelegate> {
    CNContactActionsController * _actionsController;
    UIAlertController * _alertController;
    CNContact * _contact;
    <CNUIFavoritesEntryPickerDelegate> * _delegate;
}

@property (nonatomic, retain) CNContactActionsController *actionsController;
@property (nonatomic, retain) UIAlertController *alertController;
@property (nonatomic, readonly) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNUIFavoritesEntryPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)actionsController;
- (id)alertController;
- (id)contact;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (id)delegate;
- (id)initWithContact:(id)arg1;
- (void)setActionsController:(id)arg1;
- (void)setAlertController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)viewController;

@end