/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface UnitTestRedirectTaskDelegate : NSObject <NSURLSessionTaskDelegate> {
    bool  _correctRequestURLSent;
}

@property bool correctRequestURLSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)correctRequestURLSent;
- (void)setCorrectRequestURLSent:(bool)arg1;

@end
