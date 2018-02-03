/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSItemProviderExtensionVendorLoadOperator : NSObject <_NSItemProviderLoading> {
    NSUUID * _extensionContextIdentifier;
    NSUUID * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSUUID *extensionContextIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *identifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionContextIdentifier;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionContextIdentifier:(id)arg1;
- (void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2 expectedValueClass:(Class)arg3 options:(id)arg4;
- (void)loadPreviewImageWithCompletionHandler:(id /* block */)arg1 expectedValueClass:(Class)arg2 options:(id)arg3;
- (void)setExtensionContextIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
