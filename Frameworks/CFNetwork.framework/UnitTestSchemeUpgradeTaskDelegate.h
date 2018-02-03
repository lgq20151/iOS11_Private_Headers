/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface UnitTestSchemeUpgradeTaskDelegate : NSObject <NSURLSessionTaskDelegatePrivate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 task:(id)arg2 _schemeUpgraded:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithTestDisposition:(int)arg1;
- (bool)testPassed:(id)arg1;

@end
