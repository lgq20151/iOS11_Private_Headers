/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPStitchingSession : NSObject {
    NSMutableDictionary * _deletedItems;
    NSMutableDictionary * _originalItems;
    bool  _started;
    NSMutableDictionary * _stitchedItems;
    NSMutableDictionary * _stitchedPlaceholders;
}

- (void).cxx_destruct;
- (void)attachProgress:(id)arg1 toPlaceholder:(id)arg2;
- (id)createPlaceholderWithCopyOfExistingItem:(id)arg1 lastUsageUpdatePolicy:(unsigned long long)arg2 underParent:(id)arg3 inProvider:(id)arg4;
- (id)createPlaceholderWithName:(id)arg1 isFolder:(bool)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProvider:(id)arg5;
- (void)deleteItems:(id)arg1;
- (void)flush;
- (id)init;
- (void)operationCompletedWithItem:(id)arg1 error:(id)arg2;
- (void)operationCompletedWithItems:(id)arg1 error:(id)arg2;
- (void)replacePlaceholderWith:(id)arg1;
- (void)start;
- (void)stop;
- (void)transformItems:(id)arg1 handler:(id /* block */)arg2;

@end
