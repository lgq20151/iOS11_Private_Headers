/* made by EzioChiu.
 */

@protocol UITextInputTraits_Private <NSObject, UITextInputTraits>

@required

- (void)takeTraitsFrom:(id <UITextInputTraits>)arg1;

@optional

- (NSIndexSet *)PINEntrySeparatorIndexes;
- (bool)acceptsDictationSearchResults;
- (bool)acceptsEmoji;
- (bool)acceptsFloatingKeyboard;
- (bool)acceptsPayloads;
- (bool)acceptsSplitKeyboard;
- (NSString *)autocorrectionContext;
- (bool)contentsIsSingleValue;
- (bool)deferBecomingResponder;
- (bool)disableInputBars;
- (bool)disablePrediction;
- (bool)displaySecureEditsUsingPlainText;
- (bool)displaySecureTextUsingPlainText;
- (int)emptyContentReturnKeyType;
- (bool)enablesReturnKeyOnNonWhiteSpaceContent;
- (bool)forceDefaultDictationInfo;
- (long long)forceDictationKeyboardType;
- (bool)forceDisableDictation;
- (bool)forceEnableDictation;
- (bool)hasDefaultContents;
- (UIInputContextHistory *)inputContextHistory;
- (UIColor *)insertionPointColor;
- (unsigned long long)insertionPointWidth;
- (bool)isCarPlayIdiom;
- (bool)isDevicePasscodeEntry;
- (bool)isSingleLineDocument;
- (bool)learnsCorrections;
- (bool)loadKeyboardsForSiriLanguage;
- (NSString *)recentInputIdentifier;
- (NSString *)responseContext;
- (bool)returnKeyGoesToNextResponder;
- (UIColor *)selectionBarColor;
- (UIImage *)selectionDragDotImage;
- (UIColor *)selectionHighlightColor;
- (void)setAcceptsDictationSearchResults:(bool)arg1;
- (void)setAcceptsEmoji:(bool)arg1;
- (void)setAcceptsFloatingKeyboard:(bool)arg1;
- (void)setAcceptsPayloads:(bool)arg1;
- (void)setAcceptsSplitKeyboard:(bool)arg1;
- (void)setAutocorrectionContext:(NSString *)arg1;
- (void)setContentsIsSingleValue:(bool)arg1;
- (void)setDeferBecomingResponder:(bool)arg1;
- (void)setDevicePasscodeEntry:(bool)arg1;
- (void)setDisableInputBars:(bool)arg1;
- (void)setDisablePrediction:(bool)arg1;
- (void)setDisplaySecureEditsUsingPlainText:(bool)arg1;
- (void)setDisplaySecureTextUsingPlainText:(bool)arg1;
- (void)setEmptyContentReturnKeyType:(int)arg1;
- (void)setEnablesReturnKeyOnNonWhiteSpaceContent:(bool)arg1;
- (void)setForceDefaultDictationInfo:(bool)arg1;
- (void)setForceDictationKeyboardType:(long long)arg1;
- (void)setForceDisableDictation:(bool)arg1;
- (void)setForceEnableDictation:(bool)arg1;
- (void)setHasDefaultContents:(bool)arg1;
- (void)setInputContextHistory:(UIInputContextHistory *)arg1;
- (void)setInsertionPointColor:(UIColor *)arg1;
- (void)setInsertionPointWidth:(unsigned long long)arg1;
- (void)setIsCarPlayIdiom:(bool)arg1;
- (void)setIsSingleLineDocument:(bool)arg1;
- (void)setLearnsCorrections:(bool)arg1;
- (void)setLoadKeyboardsForSiriLanguage:(bool)arg1;
- (void)setPINEntrySeparatorIndexes:(NSIndexSet *)arg1;
- (void)setRecentInputIdentifier:(NSString *)arg1;
- (void)setResponseContext:(NSString *)arg1;
- (void)setReturnKeyGoesToNextResponder:(bool)arg1;
- (void)setSelectionBarColor:(UIColor *)arg1;
- (void)setSelectionDragDotImage:(UIImage *)arg1;
- (void)setSelectionHighlightColor:(UIColor *)arg1;
- (void)setShortcutConversionType:(int)arg1;
- (void)setSuppressReturnKeyStyling:(bool)arg1;
- (void)setTextLoupeVisibility:(int)arg1;
- (void)setTextScriptType:(long long)arg1;
- (void)setTextSelectionBehavior:(int)arg1;
- (void)setTextSuggestionDelegate:(id)arg1;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (void)setUnderlineColorForSpelling:(UIColor *)arg1;
- (void)setUnderlineColorForTextAlternatives:(UIColor *)arg1;
- (void)setUseInterfaceLanguageForLocalization:(bool)arg1;
- (void)setValidTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (int)shortcutConversionType;
- (bool)suppressReturnKeyStyling;
- (int)textLoupeVisibility;
- (long long)textScriptType;
- (int)textSelectionBehavior;
- (id)textSuggestionDelegate;
- (struct __CFCharacterSet { }*)textTrimmingSet;
- (UIColor *)underlineColorForSpelling;
- (UIColor *)underlineColorForTextAlternatives;
- (bool)useInterfaceLanguageForLocalization;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })validTextRange;

@end
