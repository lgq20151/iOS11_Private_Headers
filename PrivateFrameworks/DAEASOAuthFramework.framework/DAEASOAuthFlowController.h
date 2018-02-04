/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

@interface DAEASOAuthFlowController : NSObject <SL_OOPAuthFlowDelegate, UIWebViewDelegate> {
    id /* block */  _completion;
    unsigned long long  _oauthType;
    NSString * _oauthURI;
    NSString * _tokenRequestURI;
    NSString * _username;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long oauthType;
@property (nonatomic, copy) NSString *oauthURI;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *tokenRequestURI;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (id)_accountDescription;
- (void)_exchangeAuthCode:(id)arg1 forTokensAndUsernameWithCompletion:(id /* block */)arg2;
- (void)_exchangeAuthCode:(id)arg1 forTokensWithCompletion:(id /* block */)arg2;
- (id)_urlRequestForOAuthTokenFromAuthCode:(id)arg1;
- (id)authURLForUsername:(id)arg1;
- (id)initWithOAuthType:(unsigned long long)arg1 authURI:(id)arg2 username:(id)arg3;
- (id)initialRedirectURL;
- (unsigned long long)oauthType;
- (id)oauthURI;
- (id)requestForAuthURL:(id)arg1;
- (void)setAuthFlowCompletion:(id /* block */)arg1;
- (void)setOauthType:(unsigned long long)arg1;
- (void)setOauthURI:(id)arg1;
- (void)setTokenRequestURI:(id)arg1;
- (void)setUsername:(id)arg1;
- (bool)shouldHideWebViewForLoadWithRequest:(id)arg1;
- (id)tokenRequestURI;
- (id)username;
- (void)webViewDidFinishLoadWithPageTitleSupplier:(id /* block */)arg1;

@end