/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboard : UIView <UIKBFocusGuideDelegate, UIKeyboardImplGeometryDelegate> {
    bool  _hasImpendingCursorLocation;
    unsigned long long  _impendingCursorLocation;
    unsigned long long  _requestedInteractionModel;
    UITextInputTraits * m_defaultTraits;
    bool  m_disableTouchInput;
    NSMutableDictionary * m_focusGuides;
    bool  m_hasExplicitOrientation;
    long long  m_idiom;
    bool  m_minimized;
    long long  m_orientation;
    bool  m_respondingToImplGeometryChange;
    UIView * m_snapshot;
    bool  m_typingDisabled;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  m_unfocusedFocusGuideOutsets;
    bool  m_useRecentsAlert;
}

@property (nonatomic) bool caretBlinks;
@property (nonatomic) bool caretVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasImpendingCursorLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long impendingCursorLocation;
@property (nonatomic) long long keyboardIdiom;
@property (getter=isMinimized, nonatomic) bool minimized;
@property (nonatomic, readonly) unsigned long long requestedInteractionModel;
@property (nonatomic) bool showsCandidatesInline;
@property (readonly) Class superclass;
@property (nonatomic) bool typingEnabled;

+ (void)_clearActiveKeyboard;
+ (id)activeKeyboard;
+ (id)activeKeyboardForScreen:(id)arg1;
+ (void)clearActiveForScreen:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFrameForInterfaceOrientation:(long long)arg1;
+ (struct CGSize { double x1; double x2; })defaultSize;
+ (struct CGSize { double x1; double x2; })defaultSizeForInterfaceOrientation:(long long)arg1;
+ (void)initImplementationNow;
+ (bool)isInHardwareKeyboardMode;
+ (bool)isOnScreen;
+ (struct CGSize { double x1; double x2; })keyboardSizeForInterfaceOrientation:(long long)arg1;
+ (void)makeKeyboardActive:(id)arg1 forScreen:(id)arg2;
+ (void)removeAllDynamicDictionaries;
+ (bool)respondsToProxGesture;
+ (bool)shouldMinimizeForHardwareKeyboard;
+ (struct CGSize { double x1; double x2; })sizeForInterfaceOrientation:(long long)arg1;
+ (bool)splitKeyboardEnabled;

- (void)_acceptCurrentCandidate;
- (id)_baseKeyForRepresentedString:(id)arg1;
- (void)_changeToKeyplane:(id)arg1;
- (void)_deactivateForBackgrounding;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (bool)_disableTouchInput;
- (long long)_focusTouchSensitivityStyle;
- (long long)_focusedSound;
- (id)_getAutocorrection;
- (id)_getCurrentKeyboardName;
- (id)_getCurrentKeyplaneName;
- (id)_getLocalizedInputMode;
- (bool)_hasCandidates;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lazily:(bool)arg2;
- (bool)_isAutomaticKeyboard;
- (id)_keyplaneForKey:(id)arg1;
- (id)_keyplaneNamed:(id)arg1;
- (bool)_mayRemainFocused;
- (long long)_positionInCandidateList:(id)arg1;
- (void)_setAutocorrects:(bool)arg1;
- (void)_setDisableTouchInput:(bool)arg1;
- (void)_setInputMode:(id)arg1;
- (void)_setPasscodeOutlineAlpha:(double)arg1;
- (void)_setPreferredHeight:(double)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)_setSplit:(bool)arg1;
- (void)_setUndocked:(bool)arg1;
- (void)_setUseRecentsAlert:(bool)arg1;
- (id)_touchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_touchesInsideShouldHideCalloutBar;
- (id)_typeCharacter:(id)arg1 withError:(struct CGPoint { double x1; double x2; })arg2 shouldTypeVariants:(bool)arg3 baseKeyForVariants:(bool)arg4;
- (bool)_useRecentsAlert;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)acceptAutocorrection;
- (void)activate;
- (bool)allowExternalChangeForFocusHeading:(unsigned long long)arg1 cursorLocation:(unsigned long long)arg2;
- (void)autoAdjustOrientation;
- (bool)canBecomeFocused;
- (bool)canDismiss;
- (bool)canHandleEvent:(id)arg1;
- (bool)caretBlinks;
- (bool)caretVisible;
- (void)clearActivePerScreenIfNeeded;
- (void)clearSnapshot;
- (unsigned long long)cursorLocation;
- (void)deactivate;
- (void)dealloc;
- (id)defaultTextInputTraits;
- (id)delegate;
- (void)didFocusGuideWithHeading:(unsigned long long)arg1;
- (void)didMoveToWindow;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)disableInteraction;
- (void)displayLayer:(id)arg1;
- (void)geometryChangeDone:(bool)arg1;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; })geometryForImplHeightDelta:(double)arg1;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; })geometryForMinimize:(bool)arg1;
- (bool)hasAutocorrectPrompt;
- (bool)hasImpendingCursorLocation;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (unsigned long long)impendingCursorLocation;
- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(bool)arg2;
- (id)initLazily;
- (id)initWithDefaultSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithRequestedInteractionModel:(unsigned long long)arg1;
- (long long)interfaceOrientation;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isActive;
- (bool)isActivePerScreen;
- (bool)isAutomatic;
- (bool)isMinimized;
- (long long)keyboardIdiom;
- (void)keyboardMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)manualKeyboardWasOrderedIn;
- (void)manualKeyboardWasOrderedOut;
- (void)manualKeyboardWillBeOrderedIn;
- (void)manualKeyboardWillBeOrderedOut;
- (void)maximize;
- (void)minimize;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)prepareForGeometryChange;
- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(bool)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)removeAutocorrectPrompt;
- (unsigned long long)requestedInteractionModel;
- (void)responseContextDidChange;
- (bool)returnKeyEnabled;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCaretBlinks:(bool)arg1;
- (void)setCaretVisible:(bool)arg1;
- (void)setCorrectionLearningAllowed:(bool)arg1;
- (void)setCursorLocation:(unsigned long long)arg1;
- (void)setDefaultTextInputTraits:(id)arg1;
- (void)setDisableInteraction:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasImpendingCursorLocation:(bool)arg1;
- (void)setImpendingCursorLocation:(unsigned long long)arg1;
- (void)setKeyboardIdiom:(long long)arg1;
- (void)setMinimized:(bool)arg1;
- (void)setNeedsDisplay;
- (void)setOrientation:(long long)arg1;
- (void)setReturnKeyEnabled:(bool)arg1;
- (void)setShowPredictionBar:(bool)arg1;
- (void)setShowsCandidatesInline:(bool)arg1;
- (void)setTypingEnabled:(bool)arg1;
- (void)setUnfocusedFocusGuideOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUnfocusedFocusGuideOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 fromView:(id)arg2;
- (void)setupKeyFocusGuides;
- (bool)shouldSaveMinimizationState;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (bool)showPredictionBar;
- (bool)showsCandidatesInline;
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;
- (void)takeSnapshot;
- (id)targetWindow;
- (int)textEffectsVisibilityLevel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (bool)typingEnabled;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })unfocusedFocusGuideOutsets;
- (void)updateFocusMarginsUpToView:(id)arg1;
- (void)updateKeyFocusGuides;
- (void)updateLayout;
- (void)willMoveToWindow:(id)arg1;

@end
