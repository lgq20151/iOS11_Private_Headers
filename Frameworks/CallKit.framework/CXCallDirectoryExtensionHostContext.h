/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryExtensionHostContext : NSExtensionContext <CXCallDirectoryProviderHostProtocol> {
    <CXCallDirectoryProviderHostProtocol> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXCallDirectoryProviderHostProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)activate;
- (oneway void)addBlockingEntriesWithData:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)addIdentificationEntriesWithData:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)completeRequestWithReply:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (oneway void)isIncrementalLoadingAllowed:(id /* block */)arg1;
- (id)queue;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (oneway void)removeAllBlockingEntriesWithReply:(id /* block */)arg1;
- (oneway void)removeAllIdentificationEntriesWithReply:(id /* block */)arg1;
- (oneway void)removeBlockingEntriesWithData:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)removeIdentificationEntriesWithData:(id)arg1 reply:(id /* block */)arg2;
- (void)requestFailedWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end