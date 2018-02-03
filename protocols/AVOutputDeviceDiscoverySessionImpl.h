/* made by EzioChiu.
 */

@protocol AVOutputDeviceDiscoverySessionImpl <NSObject>

@required

- (AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
- (bool)devicePresenceDetected;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(AVOutputDeviceDiscoverySession *)arg1;
- (AVOutputDeviceDiscoverySession *)parentOutputDeviceDiscoverySession;
- (void)setParentOutputDeviceDiscoverySession:(AVOutputDeviceDiscoverySession *)arg1;
- (void)setTargetAudioSession:(AVAudioSession *)arg1;
- (AVAudioSession *)targetAudioSession;

@end
