/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocumentMenuViewController : UIViewController <UIActionSheetPresentationControllerDelegate, _UIDocumentPickerRemoteViewControllerContaining> {
    NSArray * _allowedUTIs;
    NSMutableArray * _auxiliaryOptions;
    _UIResilientRemoteViewContainerViewController * _childViewController;
    <UIDocumentMenuDelegate> * _delegate;
    bool  _dismissDelegateCalled;
    unsigned long long  _documentPickerMode;
    bool  _ignoreApplicationEntitlementForImport;
    bool  _sourceIsManaged;
    NSURL * _uploadURL;
    <UIDocumentMenuDelegate> * _weak_delegate;
}

@property (getter=_ignoreApplicationEntitlementForImport, setter=_setIgnoreApplicationEntitlementForImport:, nonatomic) bool _ignoreApplicationEntitlementForImport;
@property (nonatomic, copy) NSArray *allowedUTIs;
@property (nonatomic, retain) NSMutableArray *auxiliaryOptions;
@property (getter=_childViewController, setter=_setChildViewController:, nonatomic, retain) _UIResilientRemoteViewContainerViewController *childViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDocumentMenuDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dismissDelegateCalled;
@property (nonatomic) unsigned long long documentPickerMode;
@property (readonly) unsigned long long hash;
@property (getter=_remoteViewController, nonatomic, readonly, retain) _UIDocumentPickerRemoteViewController *remoteViewController;
@property (getter=_sourceIsManaged, setter=_setSourceIsManaged:, nonatomic) bool sourceIsManaged;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *uploadURL;

- (void).cxx_destruct;
- (id)_childViewController;
- (void)_commonInitWithCompletion:(id /* block */)arg1;
- (void)_didSelectPicker;
- (void)_didSelectURL:(id)arg1;
- (void)_dismissViewController;
- (void)_dismissWithOption:(id)arg1;
- (void)_displayLocationsMenuFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_ignoreApplicationEntitlementForImport;
- (id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg1;
- (id)_remoteViewController;
- (void)_setChildViewController:(id)arg1;
- (void)_setIgnoreApplicationEntitlementForImport:(bool)arg1;
- (void)_setSourceIsManaged:(bool)arg1;
- (bool)_sourceIsManaged;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg1;
- (void)addOptionWithTitle:(id)arg1 image:(id)arg2 order:(unsigned long long)arg3 handler:(id /* block */)arg4;
- (id)allowedUTIs;
- (id)auxiliaryOptions;
- (id)delegate;
- (bool)dismissDelegateCalled;
- (unsigned long long)documentPickerMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setAllowedUTIs:(id)arg1;
- (void)setAuxiliaryOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissDelegateCalled:(bool)arg1;
- (void)setDocumentPickerMode:(unsigned long long)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setUploadURL:(id)arg1;
- (id)uploadURL;

@end
