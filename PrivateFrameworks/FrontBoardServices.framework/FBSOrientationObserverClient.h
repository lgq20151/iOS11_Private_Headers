/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSOrientationObserverClient : FBSSystemServiceFacilityClient {
    <FBSOrientationObserverClientDelegate> * _delegate;
    unsigned int  _interest;
}

- (void)activeInterfaceOrientationWithCompletion:(id /* block */)arg1;
- (void)configureConnectMessage:(id)arg1;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (id)initWithDelegate:(id)arg1 calloutQueue:(id)arg2;
- (void)invalidate;
- (void)registerOrientationInterest:(unsigned int)arg1;

@end
