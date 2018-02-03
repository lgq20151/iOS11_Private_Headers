/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVContentKeySession : NSObject {
    AVContentKeySessionInternal * _session;
}

@property (readonly) NSData *contentProtectionSessionIdentifier;
@property (readonly) <AVContentKeySessionDelegate> *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (getter=isInternal, nonatomic, readonly) bool internal;
@property (readonly) NSString *keySystem;
@property (readonly) NSURL *storageURL;

+ (id)contentKeySessionWithKeySystem:(id)arg1;
+ (id)contentKeySessionWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2;
+ (id)pendingExpiredSessionReportsWithAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2;
+ (void)removePendingExpiredSessionReports:(id)arg1 withAppIdentifier:(id)arg2 storageDirectoryAtURL:(id)arg3;

- (const struct OpaqueFigContentKeySession { }*)_figContentKeySession;
- (void)_handleRequest:(struct __CFDictionary { }*)arg1 withRequestID:(unsigned long long)arg2 fromHandler:(struct OpaqueFigCustomURLHandler { }*)arg3 willHandleRequest:(bool*)arg4;
- (id)_weakReference;
- (void)_willDeallocOrFinalize;
- (void)addContentKeyRecipient:(id)arg1;
- (bool)clientCanReceivePersistableContentKeyRequest;
- (id)contentKeyRecipients;
- (id)contentProtectionSessionIdentifier;
- (const struct OpaqueFigCPECryptor { }*)copyDecryptorForIdentifier:(id)arg1 initializationData:(id)arg2;
- (int)createAndInstallCustomURLHandlerForAsset:(id)arg1 outHandler:(struct OpaqueFigCustomURLHandler {}**)arg2;
- (id)createCryptorOptionsForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3;
- (const struct OpaqueFigCPECryptor { }*)createDecryptorIfNecessaryForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 error:(id*)arg4;
- (void)createProtectorSessionIdentifierIfNecessary;
- (void)dealloc;
- (int)decodeKeyRequestInitializationData:(id)arg1 IntoSinfs:(id*)arg2 CodecType:(id*)arg3 MediaType:(id*)arg4 ContainerType:(id*)arg5;
- (id)delegate;
- (id)delegateQueue;
- (id)delegateStorage;
- (void)expire;
- (void)finalize;
- (bool)hasProtector;
- (id)init;
- (id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2;
- (id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 internal:(bool)arg3;
- (id)initWithStorageDirectoryAtURL:(id)arg1;
- (bool)isInternal;
- (id)issueContentKeyRequestForInitializationData:(id)arg1;
- (void)issueContentKeyRequestWithCustomURLHandler:(struct OpaqueFigCustomURLHandler { }*)arg1 identifier:(id)arg2 requestInfo:(struct __CFDictionary { }*)arg3 requestID:(unsigned long long)arg4 providesPersistableKey:(bool)arg5;
- (void)issueContentKeyRequestWithCustomURLProviderContext:(id)arg1 identifier:(id)arg2 initializationData:(id)arg3 providesPersistableKey:(bool)arg4;
- (id)keySystem;
- (void)makeSecureTokenForExpirationDateOfPersistableContentKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3;
- (void)removeContentKeyRecipient:(id)arg1;
- (void)renewExpiringResponseDataForContentKeyRequest:(id)arg1;
- (int)setAppIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setHLSMethod:(id)arg1;
- (id)storageURL;

@end
