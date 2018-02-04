/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPEncoderWriteCoordinator : NSObject <TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPObjectModifyDelegate, TSPProxyObjectMapping> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    TSPArchiverManager * _archiverManager;
    TSPObjectContext * _context;
    NSMutableArray * _dataFinalizeHandlers;
    NSHashTable * _delayedObjects;
    <TSPEncoderWriteCoordinatorDelegate> * _delegate;
    bool  _didStopCapturingSnapshots;
    <TSPEncoder> * _encoder;
    bool  _hasProxyObjects;
    TSURetainedPointerKeyDictionary * _proxyObjectMap;
}

@property (nonatomic, readonly) TSPObjectContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *relativeURLForExternalData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDataFinalizeHandlerForSuccessfulSave:(id /* block */)arg1;
- (void)archiverManager:(id)arg1 didCreateArchiver:(id)arg2;
- (bool)archiverManager:(id)arg1 shouldDelayArchivingObject:(id)arg2;
- (void)componentWriter:(id)arg1 canSkipArchivingStronglyReferencedObject:(id)arg2 fromComponentRootObject:(id)arg3 completion:(id /* block */)arg4;
- (bool)componentWriter:(id)arg1 shouldDelayWritingObject:(id)arg2;
- (void)componentWriter:(id)arg1 wantsComponentOfObject:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (id)componentWriter:(id)arg1 wantsExplicitComponentRootObjectForObject:(id)arg2 archiverOrNil:(id)arg3 claimingComponent:(id)arg4 hasArchiverAccessLock:(bool)arg5;
- (void)componentWriterWantsDelayedObjects:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)context;
- (void)dealloc;
- (void)delayArchivingOfObject:(id)arg1;
- (id)init;
- (id)initWithEncoder:(id)arg1 context:(id)arg2 archiverClass:(Class)arg3 delegate:(id)arg4;
- (unsigned long long)objectTargetType;
- (unsigned long long)objectTargetTypeForComponentWriter:(id)arg1;
- (id)proxyForReferencedObject:(id)arg1;
- (id)relativeURLForExternalData;
- (void)setProxy:(id)arg1 forReferencedObject:(id)arg2;
- (bool)shouldDelayArchivingObject:(id)arg1;
- (void)skipArchivingObject:(id)arg1;
- (void)stopCapturingSnapshots;
- (void)willModifyObject:(id)arg1 duringReadOperation:(bool)arg2 shouldCaptureSnapshot:(bool)arg3;
- (void)writeRootObject:(id)arg1 completion:(id /* block */)arg2;

@end