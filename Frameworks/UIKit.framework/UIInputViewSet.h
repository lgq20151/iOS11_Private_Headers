/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSet : NSObject {
    UIInputViewController * _accessoryViewController;
    UIResponder * _accessoryViewNextResponder;
    UIInputViewController * _assistantViewController;
    UIView * _inputAccessoryView;
    UIView * _inputAssistantView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputAssistantViewBounds;
    UIView * _inputView;
    UIInputViewController * _inputViewController;
    bool  _isCustomInputView;
    bool  _isNullInputView;
    bool  _isRemoteKeyboard;
    bool  _isSplit;
    UIResponder * _restorableResponder;
    bool  _restoreUsingBecomeFirstResponder;
    double  _splitHeightDelta;
}

@property (nonatomic, readonly) bool _inputViewIsSplit;
@property (nonatomic, retain) UIInputViewController *accessoryViewController;
@property (nonatomic) UIResponder *accessoryViewNextResponder;
@property (nonatomic, retain) UIInputViewController *assistantViewController;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputAccessoryViewBounds;
@property (nonatomic, retain) UIView *inputAssistantView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputAssistantViewBounds;
@property (nonatomic, retain) UIView *inputView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputViewBounds;
@property (nonatomic, retain) UIInputViewController *inputViewController;
@property (nonatomic, readonly) bool inputViewKeyboardCanSplit;
@property (nonatomic) bool isCustomInputView;
@property (nonatomic, readonly) bool isInputAccessoryViewPlaceholder;
@property (nonatomic, readonly) bool isInputAssistantViewPlaceholder;
@property (nonatomic, readonly) bool isInputViewPlaceholder;
@property (nonatomic, readonly) bool isNullInputView;
@property (nonatomic) bool isRemoteKeyboard;
@property (nonatomic, readonly) bool isSplit;
@property (nonatomic, readonly) UIKeyboard *keyboard;
@property (nonatomic, readonly) UIView *layeringView;
@property (nonatomic) UIResponder *restorableResponder;
@property (nonatomic) bool restoreUsingBecomeFirstResponder;
@property (nonatomic, readonly) UIView *splitExemptSubview;
@property (nonatomic) double splitHeightDelta;
@property (nonatomic, readonly) bool supportsSplit;

+ (id)emptyInputSet;
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2;
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1;
+ (id)inputSetWithPlaceholderAndAccessoryView:(id)arg1;

- (bool)__isCKAccessoryView;
- (bool)_accessorySuppressesShadow;
- (bool)_actLikeInputAccessoryViewSupportsSplit;
- (void)_beginSplitTransitionIfNeeded;
- (void)_endSplitTransitionIfNeeded;
- (bool)_inputAccessoryViewSupportsSplit;
- (bool)_inputViewIsSplit;
- (bool)_inputViewIsVisible;
- (bool)_inputViewSetSupportsSplit;
- (bool)_inputViewSupportsSplit;
- (bool)_isFullscreen;
- (bool)_isKeyboard;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_leftInputViewSetFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rightInputViewSetFrame;
- (void)_setRenderConfig:(id)arg1;
- (void)_setSplitProgress:(double)arg1;
- (id)_splittableInputAccessoryView;
- (id)_themableInputAccessoryView;
- (id)accessoryViewController;
- (id)accessoryViewNextResponder;
- (id)assistantViewController;
- (bool)canAnimateToInputViewSet:(id)arg1;
- (bool)containsResponder:(id)arg1;
- (bool)containsView:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)inSyncWithOrientation:(long long)arg1 forKeyboard:(id)arg2;
- (void)inheritNullState:(id)arg1;
- (id)initWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 isKeyboard:(bool)arg4;
- (id)inputAccessoryView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputAccessoryViewBounds;
- (id)inputAssistantView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputAssistantViewBounds;
- (id)inputSetWithInputAccessoryViewFromInputSet:(id)arg1;
- (id)inputSetWithInputAccessoryViewOnly;
- (id)inputView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputViewBounds;
- (id)inputViewController;
- (bool)inputViewKeyboardCanSplit;
- (bool)isCustomInputView;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isInputAccessoryViewPlaceholder;
- (bool)isInputAssistantViewPlaceholder;
- (bool)isInputViewPlaceholder;
- (bool)isNullInputView;
- (bool)isRemoteKeyboard;
- (bool)isSplit;
- (bool)isStrictSupersetOfViewSet:(id)arg1;
- (id)keyboard;
- (long long)keyboardOrientation:(id)arg1;
- (id)layeringView;
- (id)normalisePlaceholders;
- (void)refreshPresentation;
- (id)restorableResponder;
- (bool)restoreUsingBecomeFirstResponder;
- (void)setAccessoryViewController:(id)arg1;
- (void)setAccessoryViewNextResponder:(id)arg1;
- (bool)setAccessoryViewVisible:(bool)arg1 delay:(double)arg2;
- (void)setAssistantBarVisible:(bool)arg1 delay:(double)arg2 animated:(bool)arg3;
- (void)setAssistantViewController:(id)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputAssistantView:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setInputViewController:(id)arg1;
- (void)setIsCustomInputView:(bool)arg1;
- (void)setIsRemoteKeyboard:(bool)arg1;
- (void)setKeyboardAssistantBar:(id)arg1;
- (void)setRestorableResponder:(id)arg1;
- (void)setRestoreUsingBecomeFirstResponder:(bool)arg1;
- (void)setSplitHeightDelta:(double)arg1;
- (id)splitExemptSubview;
- (double)splitHeightDelta;
- (bool)supportsSplit;
- (bool)usesKeyClicks;
- (bool)visible;

@end
