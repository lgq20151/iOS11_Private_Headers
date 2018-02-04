/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKTagSearchQueryOperation : FCOperation {
    CKQueryCursor * _cursor;
    FCCKContentDatabase * _database;
    NSArray * _desiredKeys;
    NSString * _locale;
    id /* block */  _queryCompletionHandler;
    CKQueryCursor * _resultCursor;
    NSError * _resultError;
    NSArray * _resultRecords;
    unsigned long long  _resultsLimit;
    NSString * _searchString;
    long long  _tagType;
    NSString * _tagTypeString;
}

@property (nonatomic) CKQueryCursor *cursor;
@property (nonatomic, retain) FCCKContentDatabase *database;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) id /* block */ queryCompletionHandler;
@property (nonatomic, retain) CKQueryCursor *resultCursor;
@property (nonatomic, retain) NSError *resultError;
@property (nonatomic, retain) NSArray *resultRecords;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) NSString *searchString;
@property (nonatomic) long long tagType;
@property (nonatomic, retain) NSString *tagTypeString;

- (void).cxx_destruct;
- (id)_constructTagSearchQuery;
- (id)cursor;
- (id)database;
- (id)desiredKeys;
- (id)locale;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id /* block */)queryCompletionHandler;
- (void)resetForRetry;
- (id)resultCursor;
- (id)resultError;
- (id)resultRecords;
- (unsigned long long)resultsLimit;
- (id)searchString;
- (void)setCursor:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setQueryCompletionHandler:(id /* block */)arg1;
- (void)setResultCursor:(id)arg1;
- (void)setResultError:(id)arg1;
- (void)setResultRecords:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setSearchString:(id)arg1;
- (void)setTagType:(long long)arg1;
- (void)setTagTypeString:(id)arg1;
- (long long)tagType;
- (id)tagTypeString;
- (bool)validateOperation;

@end