/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetStationsRequest : RadioRequest {
    SSMetricsConfiguration * _metricsConfiguration;
    SSMetricsPageEvent * _metricsPageEvent;
    long long  _nodeType;
    long long  _numberOfResults;
    long long  _parentNodeID;
    SSURLConnectionRequest * _request;
    long long  _resultsOffset;
}

@property (nonatomic, readonly) SSMetricsConfiguration *metricsConfiguration;
@property (nonatomic, readonly, copy) SSMetricsPageEvent *metricsPageEvent;
@property (nonatomic) long long numberOfResults;
@property (nonatomic, readonly) long long parentNodeID;
@property (nonatomic) long long resultsOffset;

- (void).cxx_destruct;
- (id)_rootTreeNodeByApplyingResponse:(id)arg1 returningError:(id*)arg2;
- (void)cancel;
- (id)initForFeaturedStations;
- (id)initWithParentNodeID:(long long)arg1;
- (id)metricsConfiguration;
- (id)metricsPageEvent;
- (long long)numberOfResults;
- (long long)parentNodeID;
- (long long)resultsOffset;
- (void)setNumberOfResults:(long long)arg1;
- (void)setResultsOffset:(long long)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
