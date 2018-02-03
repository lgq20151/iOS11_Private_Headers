/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardAutocorrectionController : NSObject {
    TIAutocorrectionList * _autocorrectionList;
    bool  _deferredAutocorrection;
    bool  _needsAutocorrection;
    bool  _preserveTextSuggestion;
    bool  _requestedAutocorrection;
    TIAutocorrectionList * _textSuggestionList;
}

@property (nonatomic, readonly) TIKeyboardCandidate *autocorrection;
@property (nonatomic, retain) TIAutocorrectionList *autocorrectionList;
@property (nonatomic) bool deferredAutocorrection;
@property (nonatomic) bool needsAutocorrection;
@property (nonatomic) bool preserveTextSuggestion;
@property (nonatomic) bool requestedAutocorrection;
@property (nonatomic, retain) TIAutocorrectionList *textSuggestionList;

+ (bool)isPersistentTextSuggestionFromApp:(id)arg1;
+ (bool)isTextSuggestionFromApp:(id)arg1;

- (id)autocorrection;
- (id)autocorrectionList;
- (void)clearAutocorrection;
- (void)clearAutocorrectionButPreserveTextSuggestion:(bool)arg1;
- (void)dealloc;
- (bool)deferredAutocorrection;
- (bool)hasAutocorrection;
- (bool)hasCaseableAutocorrection;
- (bool)needsAutocorrection;
- (bool)preserveTextSuggestion;
- (void)requestAutocorrectionWithExecutionContext:(id)arg1;
- (bool)requestedAutocorrection;
- (void)setAutocorrectionList:(id)arg1;
- (void)setDeferredAutocorrection:(bool)arg1;
- (void)setNeedsAutocorrection;
- (void)setNeedsAutocorrection:(bool)arg1;
- (void)setPreserveTextSuggestion:(bool)arg1;
- (void)setRequestedAutocorrection:(bool)arg1;
- (void)setTextSuggestionList:(id)arg1;
- (id)textSuggestionList;
- (void)updateSuggestionViews;

@end
