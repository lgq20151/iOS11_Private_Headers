/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCHTTPRequestor : NSObject <NSURLSessionDataDelegate> {
    NSArray * _anchorCertificates;
    bool  _didFailDueToMissingCredentials;
    NSString * _password;
    id  _selfReference;
    NSString * _username;
}

@property (nonatomic, retain) NSArray *anchorCertificates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didFailDueToMissingCredentials;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, retain) id selfReference;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)anchorCertificates;
- (bool)didFailDueToMissingCredentials;
- (id)password;
- (id)selfReference;
- (void)setAnchorCertificates:(id)arg1;
- (void)setDidFailDueToMissingCredentials:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setSelfReference:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)startWithRequest:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)username;

@end
