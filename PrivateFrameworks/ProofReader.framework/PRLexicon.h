/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRLexicon : NSObject {
    void * _converter;
    NSString * _converterPath;
    const void * _lexicon;
    NSString * _localization;
    NSString * _unigramsPath;
}

+ (id)lexiconWithLocalization:(id)arg1 unigramsPath:(id)arg2 converterPath:(id)arg3;

- (void*)converter;
- (id)createCursor;
- (void)dealloc;
- (id)description;
- (void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (void)enumerateEntriesForString:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)getProbabilityForString:(id)arg1 probability:(double*)arg2;
- (bool)getProbabilityForTokenID:(unsigned int)arg1 probability:(double*)arg2;
- (id)initWithLocalization:(id)arg1 unigramsPath:(id)arg2 converterPath:(id)arg3;
- (struct _LXLexicon { }*)lexicon;
- (id)stringForTokenID:(unsigned int)arg1;
- (unsigned int)tokenIDForString:(id)arg1;

@end
