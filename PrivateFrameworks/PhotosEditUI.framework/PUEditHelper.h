/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUEditHelper : NSObject <PUPhotoEditResourceLoaderDelegate> {
    NSOperationQueue * _adjustmentQueue;
    NSMutableArray * _adjustmentRequests;
    PLPhotoEditAggregateSession * _aggregateSession;
    NSObject<OS_dispatch_queue> * _changeQueue;
    NSMapTable * _loadRequestMap;
    PUMediaDestination * _mediaDestination;
}

@property (nonatomic, retain) NSOperationQueue *adjustmentQueue;
@property (nonatomic, retain) NSMutableArray *adjustmentRequests;
@property (nonatomic, retain) PLPhotoEditAggregateSession *aggregateSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *loadRequestMap;
@property (nonatomic, retain) PUMediaDestination *mediaDestination;
@property (readonly) Class superclass;

+ (id)computeAnalysisResultForEditSource:(id)arg1 editModel:(id)arg2 error:(id*)arg3;
+ (id)requestEditModelChangeForAsset:(id)arg1 performChanges:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applyAutoValuesOnModel:(id)arg1 whiteBalanceSettings:(id)arg2 redEyeCorrections:(id)arg3 smartToneLevel:(double)arg4 smartColorLevel:(double)arg5 valuesCalculator:(id)arg6 animated:(bool)arg7;
- (void)_beginEditingForRequest:(id)arg1;
- (void)_checkIsOriginalAsset:(id)arg1 isSupportedWithCompletionHandler:(id /* block */)arg2;
- (void)_commitChangesForRequest:(id)arg1;
- (void)_performChangesForRequest:(id)arg1 editModel:(id)arg2 editSource:(id)arg3;
- (void)_revertAssetForRequest:(id)arg1;
- (id)adjustmentQueue;
- (id)adjustmentRequests;
- (id)aggregateSession;
- (id)init;
- (id)loadRequestMap;
- (id)mediaDestination;
- (void)photoEditResourceLoadRequest:(id)arg1 didCompleteWithResult:(id)arg2;
- (void)setAdjustmentQueue:(id)arg1;
- (void)setAdjustmentRequests:(id)arg1;
- (void)setAggregateSession:(id)arg1;
- (void)setLoadRequestMap:(id)arg1;
- (void)setMediaDestination:(id)arg1;
- (void)submitRequest:(id)arg1;

@end
