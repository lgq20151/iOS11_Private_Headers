/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSAttributeEvaluator : NSObject {
    unsigned long long  _attributeTokenCount;
    bool  _fuzzyMatching;
    id /* block */  _handler;
    bool  _matchOncePerTerm;
    unsigned long long  _matcherCount;
    const void ** _matchers;
    unsigned long long  _queryTermCount;
    NSMutableArray * _tokenizedQueryTerms;
    void * _tokenizer;
}

@property (nonatomic) unsigned long long attributeTokenCount;
@property (nonatomic) bool fuzzyMatching;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) bool matchOncePerTerm;
@property (nonatomic) unsigned long long matcherCount;
@property (nonatomic) const void**matchers;
@property (nonatomic) unsigned long long queryTermCount;
@property (nonatomic, readonly) NSArray *queryTerms;
@property (nonatomic, retain) NSMutableArray *tokenizedQueryTerms;
@property (nonatomic) void*tokenizer;

- (void).cxx_destruct;
- (unsigned long long)attributeTokenCount;
- (void)dealloc;
- (unsigned long long)evaluateAttribute:(id)arg1 ignoreSubtokens:(bool)arg2 withHandler:(id /* block */)arg3;
- (bool)fuzzyMatching;
- (id /* block */)handler;
- (id)initWithQuery:(id)arg1 language:(id)arg2 fuzzyThreshold:(unsigned char)arg3 options:(unsigned long long)arg4;
- (bool)matchOncePerTerm;
- (unsigned long long)matcherCount;
- (const void**)matchers;
- (unsigned long long)queryTermCount;
- (id)queryTerms;
- (void)setAttributeTokenCount:(unsigned long long)arg1;
- (void)setFuzzyMatching:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setMatchOncePerTerm:(bool)arg1;
- (void)setMatcherCount:(unsigned long long)arg1;
- (void)setMatchers:(const void**)arg1;
- (void)setQueryTermCount:(unsigned long long)arg1;
- (void)setTokenizedQueryTerms:(id)arg1;
- (void)setTokenizer:(void*)arg1;
- (id)tokenizedQueryTerms;
- (void*)tokenizer;

@end
