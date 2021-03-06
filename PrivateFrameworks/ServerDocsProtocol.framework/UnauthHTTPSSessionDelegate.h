/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface UnauthHTTPSSessionDelegate : NSObject <NSURLSessionDataDelegate> {
    unsigned int  _pkiEvaluationResult;
    bool  _pkiIsTrusted;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned int pkiEvaluationResult;
@property bool pkiIsTrusted;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned int)pkiEvaluationResult;
- (bool)pkiIsTrusted;
- (void)setPkiEvaluationResult:(unsigned int)arg1;
- (void)setPkiIsTrusted:(bool)arg1;

@end
