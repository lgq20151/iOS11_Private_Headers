/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextChecker : NSObject {
    id  _reserved;
    long long  _usdt;
}

@property (nonatomic, retain) NSArray *ignoredWords;

+ (bool)_forgetWord:(id)arg1 inDictionary:(id)arg2;
+ (bool)_isWord:(id)arg1 inDictionary:(id)arg2;
+ (bool)_learnWord:(id)arg1 inDictionary:(id)arg2;
+ (void)_setWords:(id)arg1 inDictionary:(id)arg2;
+ (id)_textCheckerBackgroundQueue;
+ (id)_wordsInDictionary:(id)arg1;
+ (id)availableLanguages;
+ (id)bestLanguageForString:(id)arg1 fromAlternatives:(id)arg2 currentLanguage:(id)arg3;
+ (id)bestLanguageForString:(id)arg1 fromAlternatives:(id)arg2 currentLanguage:(id)arg3 insertionPointIndex:(unsigned long long)arg4 scriptForBestLanguage:(id*)arg5;
+ (struct __CFSet { }*)createDictHashTable:(bool)arg1;
+ (id)dictionaryInfo:(id)arg1;
+ (bool)hasLearnedWord:(id)arg1;
+ (void)learnWord:(id)arg1;
+ (id)openUserDictionary:(id)arg1;
+ (void)queryLocalUpdateAssets:(id /* block */)arg1;
+ (void)setString:(id)arg1 isExemptFromChecker:(bool)arg2;
+ (long long)uniqueSpellDocumentTag;
+ (void)unlearnWord:(id)arg1;

- (id)_checker;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_chunkAndCheckGrammarInString:(id)arg1 language:(id)arg2 usingChecker:(id)arg3 details:(id*)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_chunkAndFindMisspelledWordInString:(id)arg1 languages:(id)arg2 learnedDictionaries:(id)arg3 wordCount:(long long*)arg4 correction:(id*)arg5 usingChecker:(id)arg6;
- (bool)_doneLoading;
- (id)_initWithAsynchronousLoading:(bool)arg1;
- (id)_nameOfDictionaryForDocumentTag:(long long)arg1;
- (void)_setDocumentDictionaryName:(id)arg1;
- (void)_setLanguageDictionaryName:(id)arg1;
- (long long)adjustOffsetToNextWordBoundaryInString:(id)arg1 startingAt:(long long)arg2;
- (id)alternativesForPinyinInputString:(id)arg1;
- (bool)canChangeCaseOfFirstLetterInString:(id)arg1 toUpperCase:(bool)arg2 language:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })checkGrammarOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(bool)arg4 details:(id*)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(bool)arg4 correction:(id*)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 languages:(id)arg3 wrap:(bool)arg4 correction:(id*)arg5;
- (id)completionsForPartialWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inString:(id)arg2 language:(id)arg3;
- (id)correctionForWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inString:(id)arg2 language:(id)arg3;
- (void)dealloc;
- (id)guessesForWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inString:(id)arg2 language:(id)arg3;
- (void)ignoreWord:(id)arg1;
- (id)ignoredWords;
- (id)init;
- (void)initGlobals;
- (void)initUserDictionaries;
- (bool)isWordInUserDictionaries:(id)arg1 caseSensitive:(bool)arg2;
- (void)queryUpdateBundle;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfMisspelledWordInString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 startingAt:(long long)arg3 wrap:(bool)arg4 language:(id)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfMisspelledWordInString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 startingAt:(long long)arg3 wrap:(bool)arg4 languages:(id)arg5;
- (void)setIgnoredWords:(id)arg1;
- (id)stringForInputString:(id)arg1 language:(id)arg2;
- (id)suggestWordInLanguage:(id)arg1;

@end
