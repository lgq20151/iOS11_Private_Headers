/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPUntrashOperation : FPActionOperation {
    NSArray * _items;
    FPItem * _restoreDirectory;
    id /* block */  _untrashCompletionBlock;
}

@property (nonatomic, copy) id /* block */ untrashCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItems:(id)arg1 restoreDirectory:(id)arg2;
- (void)mainWithExtensionProxy:(id)arg1;
- (void)presendNotifications;
- (id)replicateForItems:(id)arg1;
- (void)setUntrashCompletionBlock:(id /* block */)arg1;
- (id /* block */)untrashCompletionBlock;

@end
