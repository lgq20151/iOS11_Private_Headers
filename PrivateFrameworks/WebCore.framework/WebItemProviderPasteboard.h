/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebItemProviderPasteboard : NSObject <AbstractPasteboard> {
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _cachedTypeIdentifiers;
    long long  _changeCount;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _itemProviders;
    long long  _numberOfItems;
    long long  _pendingOperationCount;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _registrationInfoLists;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _supportedTypeIdentifiers;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _typeToFileURLMaps;
}

@property (nonatomic) long long changeCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *fileURLsForDataInteraction;
@property (nonatomic, readonly) bool hasPendingOperation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *itemProviders;
@property (nonatomic, readonly) long long numberOfFiles;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long pendingOperationCount;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_preLoadedDataConformingToType:(id)arg1 forItemProviderAtIndex:(unsigned long long)arg2;
- (long long)changeCount;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (void)decrementPendingOperationCount;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(id /* block */)arg1;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(id /* block */)arg1 synchronousTimeout:(double)arg2;
- (void)enumerateItemProvidersWithBlock:(id /* block */)arg1;
- (id)fileURLsForDataInteraction;
- (bool)hasPendingOperation;
- (void)incrementPendingOperationCount;
- (id)init;
- (id)itemProviderAtIndex:(unsigned long long)arg1;
- (id)itemProviders;
- (long long)numberOfFiles;
- (long long)numberOfItems;
- (id)pasteboardTypes;
- (id)pasteboardTypesByFidelityForItemAtIndex:(unsigned long long)arg1;
- (long long)pendingOperationCount;
- (id)registrationInfoAtIndex:(unsigned long long)arg1;
- (void)setChangeCount:(long long)arg1;
- (void)setItemProviders:(id)arg1;
- (void)setItemsUsingRegistrationInfoLists:(id)arg1;
- (void)setNumberOfItems:(long long)arg1;
- (void)setPendingOperationCount:(long long)arg1;
- (id)typeIdentifierToLoadForRegisteredTypeIdentfiers:(id)arg1;
- (void)updateSupportedTypeIdentifiers:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

@end