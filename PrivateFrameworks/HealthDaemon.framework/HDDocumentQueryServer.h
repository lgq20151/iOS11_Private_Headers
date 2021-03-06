/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDocumentQueryServer : HDQueryServer {
    NSArray * _authorizedSamples;
    unsigned long long  _clientSampleIndex;
    bool  _includeDocumentData;
    unsigned long long  _maxResults;
    NSArray * _sortDescriptors;
    bool  _suspended;
}

@property (nonatomic, readonly) bool includeDocumentData;
@property (nonatomic, readonly) unsigned long long maxResults;
@property (nonatomic, readonly) NSArray *sortDescriptors;

- (void).cxx_destruct;
- (bool)_deliverAuthorizedSamplesToClient:(id)arg1 errorOut:(id*)arg2;
- (bool)_deliverOneSample:(id)arg1 client:(id)arg2 errorOut:(id*)arg3;
- (void)_queue_start;
- (void)authorizeSamples:(id)arg1 completion:(id /* block */)arg2;
- (bool)includeDocumentData;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (unsigned long long)maxResults;
- (id)requiredEntitlements;
- (id)samplesBeforeAuthorizationWithSortDescriptors:(id)arg1 errorOut:(id*)arg2;
- (id)sortDescriptors;

@end
