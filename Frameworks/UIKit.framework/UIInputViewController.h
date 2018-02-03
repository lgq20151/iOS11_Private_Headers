/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewController : UIViewController <UITextInputDelegate, _UITextDocumentInterfaceDelegate> {
    bool  _alignsToContentViewController;
    bool  _autosizeToCurrentKeyboard;
    bool  _commitInputModeOnTouchEnd;
    bool  _hasDictationKey;
    bool  _inputModeListIsShown;
    NSString * _primaryLanguage;
    <UITextDocumentProxy> * _textDocumentProxy;
    double  _touchBegan;
    bool  _viewConformsToRemotePlaceholder;
}

@property (nonatomic) bool _alignsToContentViewController;
@property (setter=_setAutosizeToCurrentKeyboard:, nonatomic) bool _autosizeToCurrentKeyboard;
@property (nonatomic, readonly) bool _isPlaceholder;
@property (nonatomic, readonly) UIKeyboard *_keyboard;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasDictationKey;
@property (nonatomic, readonly) bool hasFullAccess;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIInputView *inputView;
@property (nonatomic, readonly) bool needsInputModeSwitchKey;
@property (nonatomic, copy) NSString *primaryLanguage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <UITextDocumentProxy> *textDocumentProxy;

+ (bool)_requiresProxyInterface;
+ (void)presentDialogForAddingKeyboard;

- (bool)_alignsToContentViewController;
- (bool)_autosizeToCurrentKeyboard;
- (bool)_canBecomeFirstResponder;
- (bool)_canResignIfContainsFirstResponder;
- (id)_compatibilityController;
- (void)_didResetDocumentState;
- (id)_extensionContext;
- (bool)_isPlaceholder;
- (id)_keyboard;
- (id)_proxyInterface;
- (void)_setAutosizeToCurrentKeyboard:(bool)arg1;
- (void)_setExtensionContextUUID:(id)arg1;
- (void)_setTextDocumentProxy:(id)arg1;
- (void)_setupInputController;
- (bool)_shouldForwardSystemLayoutFittingSizeChanges;
- (struct CGSize { double x1; double x2; })_systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)_textDocumentInterface;
- (void)_updateConformanceCache;
- (void)_willResetDocumentState;
- (void)advanceToNextInputMode;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)dismissKeyboard;
- (void)handleInputModeListFromView:(id)arg1 withEvent:(id)arg2;
- (bool)hasDictationKey;
- (bool)hasFullAccess;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)inputView;
- (void)loadView;
- (bool)needsInputModeSwitchKey;
- (id)primaryLanguage;
- (void)requestSupplementaryLexiconWithCompletion:(id /* block */)arg1;
- (void)returnToPreviousInputMode;
- (void)selectionDidChange:(id)arg1;
- (void)selectionWillChange:(id)arg1;
- (void)setHasDictationKey:(bool)arg1;
- (void)setInputView:(id)arg1;
- (void)setPrimaryLanguage:(id)arg1;
- (void)setView:(id)arg1;
- (void)set_alignsToContentViewController:(bool)arg1;
- (void)set_autosizeToCurrentKeyboard:(bool)arg1;
- (void)textDidChange:(id)arg1;
- (id)textDocumentProxy;
- (void)textWillChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
