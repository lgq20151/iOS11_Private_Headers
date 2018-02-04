/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedRequestOperation : FCOperation {
    <FCContentContext> * _context;
    NSDictionary * _databaseLookupsByFeedID;
    unsigned long long  _expectedNetworkEventCount;
    FCFeedDatabase * _feedDatabase;
    NSArray * _feedRequests;
    NSDictionary * _feedRequestsByFeedID;
    NSArray * _feedTransformations;
    unsigned long long  _maxCount;
    NSMutableArray * _mutableNetworkEvents;
    long long  _options;
    id /* block */  _requestCompletionHandler;
    id /* block */  _requestCompletionHandlerWithInterestToken;
    NSMutableDictionary * _resultFeedResponses;
    NSMutableArray * _resultHeldArticleAndTagRecords;
}

@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, retain) NSDictionary *databaseLookupsByFeedID;
@property (nonatomic) unsigned long long expectedNetworkEventCount;
@property (nonatomic, retain) FCFeedDatabase *feedDatabase;
@property (nonatomic, copy) NSArray *feedRequests;
@property (nonatomic, retain) NSDictionary *feedRequestsByFeedID;
@property (nonatomic, copy) NSArray *feedTransformations;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic, retain) NSMutableArray *mutableNetworkEvents;
@property (nonatomic, readonly) NSArray *networkEvents;
@property (nonatomic) long long options;
@property (nonatomic, copy) id /* block */ requestCompletionHandler;
@property (nonatomic, copy) id /* block */ requestCompletionHandlerWithInterestToken;
@property (nonatomic, retain) NSMutableDictionary *resultFeedResponses;
@property (nonatomic, retain) NSMutableArray *resultHeldArticleAndTagRecords;

+ (bool)_orderFeedTopKEnabled;
+ (id)feedRequestContentEnvironmentTokenWithContext:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_failureResponseForRequest:(id)arg1 error:(id)arg2;
- (void)_gatherAllFeedResponsesWithCompletionHandler:(id /* block */)arg1;
- (void)_gatherAllOrderFeedResponsesWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)_networkEventCount;
- (id)_orderFeedIDFromFeedID:(id)arg1;
- (unsigned long long)_orderFeedTopKFromBin:(long long)arg1 timeInterval:(double)arg2;
- (id)context;
- (id)databaseLookupsByFeedID;
- (unsigned long long)expectedNetworkEventCount;
- (id)feedDatabase;
- (id)feedRequests;
- (id)feedRequestsByFeedID;
- (id)feedTransformations;
- (id)init;
- (unsigned long long)maxCount;
- (id)mutableNetworkEvents;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (long long)options;
- (void)performOperation;
- (void)prepareOperation;
- (id /* block */)requestCompletionHandler;
- (id /* block */)requestCompletionHandlerWithInterestToken;
- (id)resultFeedResponses;
- (id)resultHeldArticleAndTagRecords;
- (void)setContext:(id)arg1;
- (void)setDatabaseLookupsByFeedID:(id)arg1;
- (void)setExpectedNetworkEventCount:(unsigned long long)arg1;
- (void)setFeedDatabase:(id)arg1;
- (void)setFeedRequests:(id)arg1;
- (void)setFeedRequestsByFeedID:(id)arg1;
- (void)setFeedTransformations:(id)arg1;
- (void)setMaxCount:(unsigned long long)arg1;
- (void)setMutableNetworkEvents:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setRequestCompletionHandler:(id /* block */)arg1;
- (void)setRequestCompletionHandlerWithInterestToken:(id /* block */)arg1;
- (void)setResultFeedResponses:(id)arg1;
- (void)setResultHeldArticleAndTagRecords:(id)arg1;
- (bool)validateOperation;

@end