/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAuthenticationClientAsChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {
    struct AuthenticationClient { int (**x1)(); } * m_client;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cancelAuthenticationChallenge:(id)arg1;
- (struct AuthenticationClient { int (**x1)(); }*)client;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)detachClient;
- (id)initWithAuthenticationClient:(struct AuthenticationClient { int (**x1)(); }*)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;

@end
