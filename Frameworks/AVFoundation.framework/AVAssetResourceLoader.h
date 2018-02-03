/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoader : NSObject <NSURLAuthenticationChallengeSender> {
    AVAssetResourceLoaderInternal * _resourceLoader;
}

@property (nonatomic, retain) NSURLSession *URLSession;
@property (nonatomic, readonly) <NSURLSessionDataDelegate> *URLSessionDataDelegate;
@property (nonatomic, readonly) NSOperationQueue *URLSessionDataDelegateQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <AVAssetResourceLoaderDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool preloadsEligibleContentKeys;
@property (readonly) Class superclass;

- (id)URLRequestHelper;
- (id)URLSession;
- (id)URLSessionDataDelegate;
- (id)URLSessionDataDelegateQueue;
- (struct OpaqueFigCustomURLHandler { }*)_authHandler;
- (void)_cancelRequest:(struct __CFDictionary { }*)arg1 requestID:(unsigned long long)arg2;
- (void)_cancelRequestWithKey:(id)arg1 fallbackHandler:(id /* block */)arg2;
- (void)_cancelRequestWithKey:(id)arg1 requestDictionary:(id)arg2 fallbackHandler:(id /* block */)arg3;
- (struct OpaqueFigCustomURLHandler { }*)_contentKeySessionCustomURLHandler;
- (struct OpaqueFigCustomURLHandler { }*)_customURLHandler;
- (struct OpaqueFigCustomURLLoader { }*)_customURLLoader;
- (id)_getDelegateOnStateQueue;
- (void)_handleRequest:(struct __CFDictionary { }*)arg1 requestID:(unsigned long long)arg2 willHandleRequest:(bool*)arg3;
- (void)_issueLoadingRequestWithKey:(id)arg1 loadingRequest:(id)arg2 isRenewalRequest:(bool)arg3 fallbackHandler:(id /* block */)arg4;
- (void)_issueLoadingRequestWithKey:(id)arg1 requestDictionary:(id)arg2 fallbackHandler:(id /* block */)arg3;
- (void)_makeURLSessionSupportGooIfNecessary;
- (void)_noteFinishingOfRequest:(id)arg1;
- (void)_performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:(id)arg1 delegateCallbackBlock:(id /* block */)arg2;
- (void)_performDelegateSelector:(SEL)arg1 withObject:(id)arg2 representingNewRequest:(bool)arg3 key:(id)arg4 fallbackHandler:(id /* block */)arg5;
- (void)_poseAuthenticationChallengeWithKey:(id)arg1 challenge:(id)arg2 fallbackHandler:(id /* block */)arg3;
- (void)_poseAuthenticationChallengeWithKey:(id)arg1 data:(id)arg2 requestDictionary:(id)arg3 fallbackHandler:(id /* block */)arg4;
- (void)_poseAuthenticationChallengeWithRequestInfo:(struct __CFDictionary { }*)arg1 requestID:(unsigned long long)arg2 challenge:(id)arg3;
- (void)_sendAuthResponseForChallenge:(id)arg1 disposition:(long long)arg2 credential:(id)arg3 error:(id)arg4;
- (void)_setContentKeySessionCustomURLHandler:(struct OpaqueFigCustomURLHandler { }*)arg1;
- (void)_setDelegateOnStateQueue:(id)arg1;
- (id)asset;
- (void)cacheContentInformation:(id)arg1 forURL:(id)arg2;
- (id)cachedContentInformationForURL:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)cancelLoading;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (id)customURLBridge;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)finalize;
- (id)init;
- (id)initWithURLRequestHelper:(id)arg1 asset:(id)arg2;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (bool)preloadsEligibleContentKeys;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)setCustomURLBridge:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setPreloadsEligibleContentKeys:(bool)arg1;
- (void)setURLSession:(id)arg1;
- (id)stateQueue;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;

@end
