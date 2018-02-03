/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl : NSObject <AVOutputDeviceAuthorizationRequestImpl> {
    id /* block */  _completionHandler;
    AVOutputDevice * _outputDevice;
    AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl * _parentSession;
    NSString * _tokenType;
    NSString * _uniqueID;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) NSString *authorizationTokenType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVOutputDevice *outputDevice;
@property AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl *parentAuthorizationSessionImpl;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)ID;
- (id)authorizationTokenType;
- (void)cancel;
- (void)dealloc;
- (void)enterTerminalStatus:(long long)arg1 error:(id)arg2;
- (id)initWithID:(id)arg1 outputDevice:(id)arg2 authorizationTokenType:(id)arg3;
- (id)outputDevice;
- (id)parentAuthorizationSessionImpl;
- (void)respondWithAuthorizationToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setParentAuthorizationSessionImpl:(id)arg1;

@end
