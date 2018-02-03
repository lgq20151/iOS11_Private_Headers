/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPActionOperation : FPOperation {
    id /* block */  _actionCompletionBlock;
    id /* block */  _closeRemoteService;
    FPItemManager * _itemManager;
    NSDictionary * _itemsByProviderAndDomain;
    unsigned long long * _logSection;
    bool  _multiProviders;
    NSString * _providerIdentifier;
    FPStitchingSession * _stitcher;
}

@property (nonatomic, copy) id /* block */ actionCompletionBlock;
@property (nonatomic, copy) FPItemManager *itemManager;
@property (nonatomic, copy) FPStitchingSession *stitcher;

- (void).cxx_destruct;
- (void)_dispatchToSubOperations;
- (id /* block */)actionCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItemsOfDifferentProviders:(id)arg1;
- (id)initWithProvider:(id)arg1;
- (id)itemManager;
- (void)main;
- (void)mainWithExtensionProxy:(id)arg1;
- (void)presendNotifications;
- (id)replicateForItems:(id)arg1;
- (void)setActionCompletionBlock:(id /* block */)arg1;
- (void)setItemManager:(id)arg1;
- (void)setStitcher:(id)arg1;
- (id)stitcher;

@end
