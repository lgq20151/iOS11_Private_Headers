/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVContentKeyRequest : NSObject {
    AVContentKeyRequestInternal * _contentKeyRequest;
}

@property (readonly) bool canProvidePersistableContentKey;
@property (readonly) NSError *error;
@property (readonly) id identifier;
@property (nonatomic, readonly) NSData *initializationData;
@property (readonly) long long status;

- (void)_clearContext;
- (void)_ensureResponseInfoSentToCustomURLHandler;
- (id)_getRetryReasonForError:(int)arg1;
- (void)_handleKeyResponseError:(int)arg1;
- (void)_handleUpdateToPersistentKey:(id)arg1;
- (id)_keySystem;
- (int)_prepareForKeyRenewal;
- (void)_sendDataToCustomURLHandler:(id)arg1;
- (void)_sendDictionaryForURLRequest:(id)arg1;
- (void)_sendFinishLoadingToCustomURLHandler;
- (void)_sendFinishLoadingToCustomURLHandlerWithError:(id)arg1;
- (void)_sendResponseInfoToCustomURLHandler;
- (struct OpaqueFigCPECryptor { }*)_setCryptorWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 error:(id*)arg2;
- (void)_setError:(id)arg1;
- (void)_setStatus:(long long)arg1;
- (void)addFigCryptorListeners;
- (bool)canProvidePersistableContentKey;
- (id)contentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)error;
- (struct OpaqueFigCPECryptor { }*)figCryptor;
- (id)identifier;
- (id)initWithContentKeySession:(id)arg1 customURLHandler:(struct OpaqueFigCustomURLHandler { }*)arg2 identifier:(id)arg3 requestInfo:(struct __CFDictionary { }*)arg4 requestID:(unsigned long long)arg5 providesPersistableKey:(bool)arg6;
- (id)initWithContentKeySession:(id)arg1 customURLProviderContext:(id)arg2 identifier:(id)arg3 initializationData:(id)arg4 providesPersistableKey:(bool)arg5;
- (id)initWithContentKeySession:(id)arg1 identifier:(id)arg2 initializationData:(id)arg3 providesPersistableKey:(bool)arg4;
- (id)initializationData;
- (void)makeStreamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)processContentKeyResponse:(id)arg1;
- (void)processContentKeyResponseData:(id)arg1;
- (void)processContentKeyResponseError:(id)arg1;
- (void)removeFigCryptorListeners;
- (void)renewExpiringContentKeyResponseData;
- (void)respondByRequestingPersistableContentKeyRequest;
- (long long)status;

@end
