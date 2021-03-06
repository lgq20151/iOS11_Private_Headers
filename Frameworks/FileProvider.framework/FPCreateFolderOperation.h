/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPCreateFolderOperation : FPActionOperation {
    id /* block */  _createFolderCompletionBlock;
    NSString * _folderName;
    FPItem * _parentItem;
    FPItemID * _placeholderID;
}

@property (nonatomic, copy) id /* block */ createFolderCompletionBlock;

- (void).cxx_destruct;
- (id /* block */)createFolderCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithParentItem:(id)arg1 folderName:(id)arg2;
- (void)mainWithExtensionProxy:(id)arg1;
- (void)presendNotifications;
- (void)setCreateFolderCompletionBlock:(id /* block */)arg1;

@end
