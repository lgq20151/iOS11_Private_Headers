/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICSearchQueryOperation : NSOperation {
    ICSearchQuery * _defaultQuery;
    NSError * _error;
    id /* block */  _foundItemsHandler;
    ICSearchQuery * _nlQuery;
    bool  _performNLSearch;
    NSMutableDictionary * _rankingScores;
    NSMutableDictionary * _relevancesBitField;
    long long  _requestIndex;
    NSMutableArray * _results;
    NSMutableDictionary * _resultsDictionary;
    NSString * _searchString;
    bool  _useRankingQueries;
}

@property (nonatomic, retain) ICSearchQuery *defaultQuery;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, copy) id /* block */ foundItemsHandler;
@property (nonatomic, retain) ICSearchQuery *nlQuery;
@property (nonatomic) bool performNLSearch;
@property (nonatomic, retain) NSMutableDictionary *rankingScores;
@property (nonatomic, retain) NSMutableDictionary *relevancesBitField;
@property (nonatomic) long long requestIndex;
@property (nonatomic, retain) NSMutableArray *results;
@property (nonatomic, retain) NSMutableDictionary *resultsDictionary;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic) bool useRankingQueries;

+ (id)exactMatchingQueryStringForTitleSearchString:(id)arg1;
+ (id)highlightStringForAttributedInputs:(id)arg1;
+ (void)nlSearchQueryWithSearchString:(id)arg1 queryString:(id*)arg2 rankingQueries:(id*)arg3 highlightString:(id*)arg4;
+ (id)prefixMatchingQueryStringForSearchString:(id)arg1;
+ (id)queryFields;
+ (id)queryStringForSearchString:(id)arg1 queryFields:(id)arg2 matchType:(unsigned char)arg3;

- (void).cxx_destruct;
- (void)cancel;
- (id)defaultQuery;
- (id)error;
- (id /* block */)foundItemsHandler;
- (id)init;
- (id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2;
- (id)initWithSearchString:(id)arg1 useRankingQueries:(bool)arg2 performNLSearch:(bool)arg3;
- (void)main;
- (id)nlQuery;
- (bool)performNLSearch;
- (double)rankingScoreForSearchableItem:(id)arg1;
- (id)rankingScores;
- (unsigned long long)relevanceBitFieldForSearchableItem:(id)arg1;
- (id)relevancesBitField;
- (long long)requestIndex;
- (id)results;
- (id)resultsDictionary;
- (void)runQuery:(id)arg1;
- (id)searchString;
- (void)setDefaultQuery:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFoundItemsHandler:(id /* block */)arg1;
- (void)setNlQuery:(id)arg1;
- (void)setPerformNLSearch:(bool)arg1;
- (void)setRankingScores:(id)arg1;
- (void)setRelevancesBitField:(id)arg1;
- (void)setRequestIndex:(long long)arg1;
- (void)setResults:(id)arg1;
- (void)setResultsDictionary:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setUseRankingQueries:(bool)arg1;
- (id)sortedSearchableItemsOfIdentifiers:(id)arg1;
- (bool)useRankingQueries;

@end