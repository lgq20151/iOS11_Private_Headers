/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIAutoshiftController : NSObject {
    bool  _enabled;
    TITextInputTraits * _textInputTraits;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) TITextInputTraits *textInputTraits;

- (unsigned long long)actionForDocumentState:(id)arg1 inputMangerState:(id)arg2;
- (void)dealloc;
- (id)initWithTextInputTraits:(id)arg1;
- (bool)isEnabled;
- (bool)isSelectionAtSentenceAutoshiftBoundaryWithDocumentState:(id)arg1 inputManagerState:(id)arg2;
- (void)setEnabled:(bool)arg1;
- (id)textInputTraits;

@end
