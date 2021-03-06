/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLRequestHandler : NSObject {
    NSMutableDictionary * _cachedResults;
    NSObject * _clusterContext;
    NSLock * _requestLock;
    NSMutableArray * _requestsInFlight;
    NSMutableArray * _requestsPending;
}

@property (retain) NSMutableDictionary *cachedResults;
@property (retain) NSObject *clusterContext;

+ (id)asyncProcessingDispatchQueue;
+ (void)forcedCleanup;
+ (void)forcedCleanupWithOptions:(id)arg1;
+ (id)handlerWithOptions:(id)arg1;
+ (void)requestForcedCleanup;
+ (void)requestForcedCleanupWithOptions:(id)arg1;
+ (void)requestForcedCleanupWithOptions:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_asyncProcessingDispatchQueue:(id*)arg1;
- (void)_asynchronouslyDispatchRequests:(id)arg1 onDispatchQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)_orderedRequestsForRequests:(id)arg1;
- (bool)_performRequests:(id)arg1 error:(id*)arg2;
- (bool)_validateRequests:(id)arg1 error:(id*)arg2;
- (bool)addUniqueResultsIntoCacheForKey:(id)arg1 withResultValues:(id)arg2;
- (id)cachedResults;
- (void)cancelAllRequests;
- (bool)clearResultsCacheForKey:(id)arg1;
- (id)clusterContext;
- (id)getCachedResultsForKey:(id)arg1;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (bool)performRequests:(id)arg1 error:(id*)arg2;
- (bool)performRequestsAsynchronous:(id)arg1 error:(id*)arg2 queue:(id)arg3;
- (void)setCachedResults:(id)arg1;
- (void)setClusterContext:(id)arg1;

@end
