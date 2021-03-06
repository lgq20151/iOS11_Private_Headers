/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRLexiconCursor : NSObject {
    struct _LXCursor { } * _cursor;
    PRLexicon * _lexicon;
    unsigned long long  _stemSuffixState;
    PRLexiconStemSuffixCursor * _subcursor;
}

- (void)_advance:(id)arg1;
- (void)_enumerateCompletions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)addSubcursor:(id)arg1;
- (void)advanceWithCombinedCharacterSequence:(id)arg1;
- (void)advanceWithString:(id)arg1;
- (void)dealloc;
- (void)enumerateCompletions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateEntriesUsingBlock:(id /* block */)arg1;
- (bool)hasChildren;
- (bool)hasEntries;
- (id)initWithLexicon:(id)arg1;
- (bool)isValid;

@end
