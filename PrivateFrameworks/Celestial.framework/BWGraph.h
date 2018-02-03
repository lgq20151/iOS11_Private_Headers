/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWGraph : NSObject {
    bool  _beingConfigured;
    bool  _classicRetainedBufferCount;
    NSObject<OS_dispatch_group> * _commitGroup;
    NSMutableArray * _connections;
    int  _errorStatus;
    long long  _inflightConfigurationID;
    NSMutableArray * _nodes;
    NSMutableArray * _nodesToPrepareConcurrently;
    NSMutableArray * _outputsWithSharedPools;
    NSMutableDictionary * _outputsWithSharedPoolsForAttachedMedia;
    bool  _prefetchesPixelBufferPools;
    bool  _running;
    NSMutableArray * _sinkNodes;
    NSMutableArray * _sourceNodes;
    NSObject<OS_dispatch_group> * _startGroup;
    <BWGraphStatusDelegate> * _statusDelegate;
    bool  _supportsLiveReconfiguration;
}

@property int errorStatus;
@property (nonatomic) bool prefetchesPixelBufferPools;
@property (nonatomic) <BWGraphStatusDelegate> *statusDelegate;
@property (nonatomic, readonly) bool supportsLiveReconfiguration;

+ (void)initialize;

- (id)_breadthFirstEnumerator;
- (id)_depthFirstEnumeratorWithVertexOrdering:(int)arg1;
- (id)_getOutputsWithSharedPoolsForAttachedMediaKey:(id)arg1;
- (void)_logActiveNodesAfterGraphStopTimeout;
- (void)_logActiveSinkNodesAfterGraphStopTimeout;
- (void)_makeParentConfigurationChangesLive;
- (id)_newDispatchGroupForSinksToBecomeLiveWithConfigurationID:(long long)arg1;
- (id)_newDispatchGroupForSinksToTransitionToState:(int)arg1;
- (bool)_prepareNodesWithConfigurationChanges:(id*)arg1;
- (bool)_resolveFormats:(id*)arg1;
- (bool)_resolveRetainedBufferCounts:(id*)arg1;
- (void)_resolveVideoRetainedBufferCountsForOutput:(id)arg1 forAttachedMediaKey:(id)arg2 outputsWithSharedPools:(id)arg3;
- (id)_reverseBreadthFirstEnumerator;
- (id)_reverseDepthFirstEnumeratorWithVertexOrdering:(int)arg1;
- (id)_sinkNodes;
- (id)_sourceNodes;
- (void)_waitForOutstandingStartOrCommitOperationToComplete;
- (bool)addNode:(id)arg1 error:(id*)arg2;
- (void)beginConfiguration;
- (bool)commitConfigurationWithID:(long long)arg1 error:(id*)arg2;
- (bool)connectOutput:(id)arg1 toInput:(id)arg2 pipelineStage:(id)arg3;
- (void)dealloc;
- (id)dotString;
- (void)enableConcurrentPrepareForNode:(id)arg1;
- (int)errorStatus;
- (id)init;
- (bool)prefetchesPixelBufferPools;
- (void)setErrorStatus:(int)arg1;
- (void)setPrefetchesPixelBufferPools:(bool)arg1;
- (void)setStatusDelegate:(id)arg1;
- (bool)start:(id*)arg1;
- (id)statusDelegate;
- (bool)stop:(id*)arg1;
- (bool)supportsLiveReconfiguration;
- (void)waitForOutstandingStartOrCommitOperationToComplete;

@end
