/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPContentTasteController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _pendingUpdateRecordByPlaylistGlobalID;
    NSMutableDictionary * _pendingUpdateRecordByStoreAdamID;
}

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)_mediaLibrary;
+ (id)sharedController;

- (void).cxx_destruct;
- (id)_ML3QueryWithEntityClass:(Class)arg1 predicate:(id)arg2 options:(long long)arg3;
- (id)_addPendingUpdateRecordForPlaylistGlobalID:(id)arg1 contentTasteType:(long long)arg2;
- (id)_addPendingUpdateRecordForStoreAdamID:(long long)arg1 contentTasteType:(long long)arg2;
- (void)_deviceMediaLibraryDidChangeNotification:(id)arg1;
- (id)_libraryEntityForModel:(id)arg1;
- (id)_libraryEntityWithStoreID:(long long)arg1 contentType:(long long)arg2;
- (id)_libraryPlaylistWithGlobalID:(id)arg1;
- (void)_removePendingUpdateRecordForPlaylistGlobalID:(id)arg1 token:(id)arg2;
- (void)_removePendingUpdateRecordForStoreAdamID:(long long)arg1 token:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)setTasteType:(long long)arg1 forMediaEntity:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setTasteType:(long long)arg1 forModel:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setTasteType:(long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setTasteType:(long long)arg1 forStoreAdamID:(long long)arg2 withContentType:(long long)arg3 completionHandler:(id /* block */)arg4;
- (long long)tasteTypeForMediaEntity:(id)arg1;
- (long long)tasteTypeForModel:(id)arg1;
- (long long)tasteTypeForPlaylistGlobalID:(id)arg1;
- (long long)tasteTypeForStoreAdamID:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

+ (bool)MPU_tasteTypeSupportedForContentItemIdentifierCollection:(id)arg1;

- (void)MPU_setTasteType:(unsigned long long)arg1 forContentItemIdentifierCollection:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (unsigned long long)MPU_tasteTypeForContentItemIdentifierCollection:(id)arg1;

@end