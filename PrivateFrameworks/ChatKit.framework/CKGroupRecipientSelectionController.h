/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKGroupRecipientSelectionController : CKRecipientSelectionController <CKRecipientSelectionControllerDelegate> {
    UIBarButtonItem * _doneButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_frecencySearch;
- (void)_updateNavigationButton;
- (bool)alwaysShowSearchResultsTable;
- (id)doneButton;
- (bool)homogenizePreferredServiceForiMessage;
- (id)initWithConversation:(id)arg1;
- (void)loadView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })navigationBarInsetsForRecipientSelectionController:(id)arg1;
- (void)recipientAvailibilitiesDidUpdate;
- (void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2;
- (void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;
- (void)recipientSelectionControllerDidChange;
- (void)recipientSelectionControllerDidChangeSize:(id)arg1;
- (void)recipientSelectionControllerDidPushABViewController:(id)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1;
- (void)recipientSelectionControllerReturnPressed:(id)arg1;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldSuppressSearchResultsTable;
- (void)viewDidAppearDeferredSetup;
- (void)viewWillAppear:(bool)arg1;

@end