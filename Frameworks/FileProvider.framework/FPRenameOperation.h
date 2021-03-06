/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPRenameOperation : FPActionOperation {
    FPItem * _item;
    NSString * _newName;
}

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItem:(id)arg1 newName:(id)arg2;
- (void)mainWithExtensionProxy:(id)arg1;
- (void)presendNotifications;

@end
