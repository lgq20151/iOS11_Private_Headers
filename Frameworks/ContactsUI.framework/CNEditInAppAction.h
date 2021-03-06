/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNEditInAppAction : CNContactAction {
    <CNUILSApplicationWorkspaceFacade> * _applicationWorkspace;
    CNContactStore * _contactStore;
}

@property (nonatomic, readonly) <CNUILSApplicationWorkspaceFacade> *applicationWorkspace;
@property (nonatomic, readonly) CNContactStore *contactStore;

- (void).cxx_destruct;
- (id)applicationWorkspace;
- (id)contactStore;
- (id)initWithContact:(id)arg1 applicationWorkspace:(id)arg2 contactStore:(id)arg3;
- (void)performActionWithSender:(id)arg1;
- (id)title;

@end
