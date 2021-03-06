/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUUUIDSelectionManager : PXObservable <PUMutableUUIDSelectionManager> {
    NSMutableSet * __mutableSelectedUUIDs;
}

@property (nonatomic, readonly, copy) NSMutableSet *_mutableSelectedUUIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *selectedUUIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_mutableSelectedUUIDs;
- (void)addSelectedUUID:(id)arg1;
- (void)deselectAllUUIDs;
- (id)init;
- (id)initWithSelectedUUIDs:(id)arg1;
- (bool)isSelectedUUID:(id)arg1;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (void)removeSelectedUUID:(id)arg1;
- (id)selectedUUIDs;
- (void)setSelectedUUIDs:(id)arg1;

@end
