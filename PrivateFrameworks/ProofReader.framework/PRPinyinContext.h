/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRPinyinContext : PRAutocorrectionContext {
    unsigned long long  _abbreviatedSyllableCount;
    NSMutableArray * _addedModifications;
    NSMutableArray * _addedRemovedModifications;
    char * _altBuffer;
    char * _altBufferScores;
    char * _buffer;
    NSMutableArray * _completions;
    void * _connection;
    NSMutableArray * _corrections;
    unsigned long long  _endIndex;
    NSMutableArray * _geometryDataArray;
    NSMutableArray * _guesses;
    unsigned long long  _lastIndexes;
    bool  _lastSyllableIsPartial;
    unsigned long long  _length;
    unsigned long long  _lengthBeforeApostrophes;
    NSMutableArray * _modifications;
    unsigned long long  _nextIndexes;
    NSMutableArray * _prefixes;
    unsigned long long  _previouslyAnalyzedLength;
    NSMutableArray * _removedModifications;
    unsigned long long  _startIndex;
    unsigned long long  _startingPoint;
    unsigned long long * _syllableLengthArray;
    double  _validSequenceCorrectionThreshold;
}

- (void)_addDeletions;
- (bool)_addEnglishWordForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 quickly:(bool)arg2;
- (bool)_addEnglishWordsEndingAtIndex:(unsigned long long)arg1 quickly:(bool)arg2;
- (void)_addEnglishWordsQuickly:(bool)arg1;
- (void)_addInsertions;
- (void)_addPrefixes;
- (void)_addReplacements;
- (void)_addSpecialEnglishWords;
- (void)_addTranspositions;
- (void)_addValidSequenceReplacements;
- (void)_advanceIndexes;
- (void)_filterModifications;
- (void)_removeModificationsAndMoveStartingPoint;
- (void)_removePrefixes;
- (void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3;
- (id)addedModifications;
- (id)completions;
- (id)correction;
- (id)currentModifications;
- (void)dealloc;
- (id)description;
- (id)guesses;
- (id)init;
- (id)prefixes;
- (void)removeNumberOfInputCharacters:(unsigned long long)arg1;
- (id)removedModifications;
- (void)reset;
- (void)setValidSequenceCorrectionThreshold:(double)arg1;
- (double)validSequenceCorrectionThreshold;

@end
