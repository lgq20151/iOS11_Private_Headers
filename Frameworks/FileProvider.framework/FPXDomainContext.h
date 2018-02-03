/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPXDomainContext : NSObject {
    NSFileProviderDomain * _domain;
    FPXExtensionContext * _extensionContext;
    FPXSpotlightIndexer * _spotlightIndexer;
    NSFileProviderExtension * _vendorInstance;
}

@property (nonatomic, readonly) NSFileProviderDomain *domain;
@property (nonatomic, readonly) FPXExtensionContext *extensionContext;
@property (nonatomic, readonly) FPXSpotlightIndexer *spotlightIndexer;
@property (nonatomic, readonly) NSFileProviderExtension *vendorInstance;

- (void).cxx_destruct;
- (id)domain;
- (id)extensionContext;
- (id)initWithVendorInstance:(id)arg1 domain:(id)arg2 extensionContext:(id)arg3;
- (id)internalErrorFromVendorError:(id)arg1;
- (id)itemFromVendorItem:(id)arg1;
- (id)itemIDFromVendorItemID:(id)arg1;
- (id)itemIDsFromVendorItemIDs:(id)arg1;
- (id)itemsFromVendorItems:(id)arg1;
- (void)prepareForDomainRemovalWithCompletionHandler:(id /* block */)arg1;
- (id)spotlightIndexer;
- (id)vendorInstance;

@end
