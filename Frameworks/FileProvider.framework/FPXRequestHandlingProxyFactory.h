/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPXRequestHandlingProxyFactory : NSObject <FPXRequestHandlingProxyCreating> {
    FPXExtensionContext * _context;
    FPFileProviderService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchProxyForItemIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithService:(id)arg1 context:(id)arg2;

@end
