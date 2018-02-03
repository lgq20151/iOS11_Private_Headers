/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextReplacementGeneratorForCorrections : UITextReplacementGenerator {
    TIKeyboardCandidate * _autocorrectionRecord;
    bool  _forceAutocorrectionGuesses;
    bool  _forceHistoryReplacement;
    bool  _forceSpellingGuesses;
    unsigned long long  _maxCountAfterAutocorrectionGuesses;
    unsigned long long  _maxCountAfterSpellingGuesses;
    unsigned long long  _maxEditDistance;
    bool  _showRevertingAutocorrectionInPredictionView;
    UITextChecker * _textChecker;
}

@property (nonatomic, retain) TIKeyboardCandidate *autocorrectionRecord;
@property (nonatomic) bool forceAutocorrectionGuesses;
@property (nonatomic) bool forceHistoryReplacement;
@property (nonatomic) bool forceSpellingGuesses;
@property (nonatomic) unsigned long long maxCountAfterAutocorrectionGuesses;
@property (nonatomic) unsigned long long maxCountAfterSpellingGuesses;
@property (nonatomic) unsigned long long maxEditDistance;
@property (nonatomic, retain) UITextChecker *textChecker;

- (void).cxx_destruct;
- (void)addAutocorrectionGuessesToReplacements:(id)arg1;
- (void)addPreviouslySuggestedAutocorrectionToReplacements:(id)arg1;
- (id)addReplacementRevertingAutocorrectionToReplacements:(id)arg1;
- (void)addSpellingGuessesForString:(id)arg1 ToReplacements:(id)arg2;
- (id)autocorrectionRecord;
- (bool)forceAutocorrectionGuesses;
- (bool)forceHistoryReplacement;
- (bool)forceSpellingGuesses;
- (id)init;
- (bool)isStringMisspelled:(id)arg1;
- (bool)isStringToReplaceMisspelled;
- (unsigned long long)maxCountAfterAutocorrectionGuesses;
- (unsigned long long)maxCountAfterSpellingGuesses;
- (unsigned long long)maxEditDistance;
- (id)replacements;
- (void)setAutocorrectionRecord:(id)arg1;
- (void)setForceAutocorrectionGuesses:(bool)arg1;
- (void)setForceHistoryReplacement:(bool)arg1;
- (void)setForceSpellingGuesses:(bool)arg1;
- (void)setMaxCountAfterAutocorrectionGuesses:(unsigned long long)arg1;
- (void)setMaxCountAfterSpellingGuesses:(unsigned long long)arg1;
- (void)setMaxEditDistance:(unsigned long long)arg1;
- (void)setTextChecker:(id)arg1;
- (id)textChecker;

@end
