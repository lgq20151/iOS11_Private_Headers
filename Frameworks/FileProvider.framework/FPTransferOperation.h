/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPTransferOperation : FPActionOperation <NSProgressReporting> {
    FPItem * _destinationFolder;
    NSMutableDictionary * _errorsByItem;
    bool  _isCopyOperation;
    NSArray * _items;
    unsigned long long  _lastUsageUpdatePolicy;
    NSArray * _nameURLList;
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _placeholderIDsByURLOrItemID;
    FPAggregateProgress * _progress;
    bool  _shouldBounceOnCollision;
    NSMutableDictionary * _transferResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *errorsByItem;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lastUsageUpdatePolicy;
@property (readonly) NSProgress *progress;
@property (nonatomic) bool shouldBounceOnCollision;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *transferResults;

- (void).cxx_destruct;
- (id)_initWithNamesAndURLsList:(id)arg1 destinationFolder:(id)arg2 copyItems:(bool)arg3;
- (id)errorsByItem;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItems:(id)arg1 destinationFolder:(id)arg2 copyItems:(bool)arg3;
- (id)initWithNamesAndSourceURLs:(id)arg1 destinationFolder:(id)arg2 copyItems:(bool)arg3;
- (id)initWithSourceURLs:(id)arg1 destinationFolder:(id)arg2 copyItems:(bool)arg3;
- (id)initWithSourceURLsAndNames:(id)arg1 destinationFolder:(id)arg2 copyItems:(bool)arg3;
- (unsigned long long)lastUsageUpdatePolicy;
- (void)mainWithExtensionProxy:(id)arg1;
- (id)operationDescription;
- (void)presendNotifications;
- (id)progress;
- (void)setLastUsageUpdatePolicy:(unsigned long long)arg1;
- (void)setShouldBounceOnCollision:(bool)arg1;
- (bool)shouldBounceOnCollision;
- (id)transferResults;

@end
