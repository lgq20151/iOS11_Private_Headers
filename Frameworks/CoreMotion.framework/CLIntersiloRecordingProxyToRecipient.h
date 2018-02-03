/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloRecordingProxyToRecipient : CLIntersiloRecordingProxy {
    CLIntersiloRecordingProxy * _peer;
}

@property (nonatomic, readonly) CLIntersiloRecordingProxy *peer;

- (void).cxx_destruct;
- (id)initWithProxiedInterface:(id)arg1 andUninitializedPeer:(id)arg2;
- (id)peer;

@end
