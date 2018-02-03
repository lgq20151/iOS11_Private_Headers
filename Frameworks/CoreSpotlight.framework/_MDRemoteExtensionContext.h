/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface _MDRemoteExtensionContext : _MDExtensionContext <_MDRemoteExtensionContextProtocol> {
    CSIndexExtensionRequestHandler * _requestHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSIndexExtensionRequestHandler *requestHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)getLastUpdateTimeWithCompletionHandler:(id /* block */)arg1;
- (id)hostContext;
- (void)performJob:(id)arg1 acknowledgementHandler:(id /* block */)arg2;
- (id)requestHandler;
- (void)setRequestHandler:(id)arg1;

@end
