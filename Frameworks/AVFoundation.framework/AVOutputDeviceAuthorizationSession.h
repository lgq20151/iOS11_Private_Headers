/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputDeviceAuthorizationSession : NSObject {
    AVOutputDeviceAuthorizationSessionInternal * _ivars;
}

@property <AVOutputDeviceAuthorizationSessionDelegate> *delegate;

+ (void)initialize;
+ (id)outputDeviceAuthorizationSessionWithEndpointUIAgent:(struct OpaqueFigEndpointUIAgent { }*)arg1;
+ (id)sharedAuthorizationSession;

- (void)dealloc;
- (id)delegate;
- (id)impl;
- (id)initWithOutputDeviceAuthorizationSessionImpl:(id)arg1;
- (void)outputDeviceAuthorizationSessionImpl:(id)arg1 didProvideAuthorizationRequest:(id)arg2;
- (bool)outputDeviceAuthorizationSessionImpl:(id)arg1 shouldRetryAuthorizationRequest:(id)arg2 reason:(id)arg3;
- (void)outputDeviceAuthorizationSessionImplDidExpireWithReplacementImpl:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
