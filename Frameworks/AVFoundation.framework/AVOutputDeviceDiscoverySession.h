/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputDeviceDiscoverySession : NSObject {
    AVOutputDeviceDiscoverySessionInternal * _outputDeviceDiscoverySession;
}

@property (nonatomic, readonly) NSArray *availableOutputDevices;
@property (nonatomic, readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (nonatomic, readonly) bool devicePresenceDetected;
@property (nonatomic) long long discoveryMode;
@property (readonly) struct OpaqueFigRouteDiscoverer { }*routeDiscoverer;
@property (nonatomic, retain) AVAudioSession *targetAudioSession;

+ (void)initialize;
+ (id)outputDeviceDiscoverySessionFactory;

- (id)availableOutputDevices;
- (id)availableOutputDevicesObject;
- (void)dealloc;
- (bool)devicePresenceDetected;
- (long long)discoveryMode;
- (id)impl;
- (id)init;
- (id)initWithDeviceFeatures:(unsigned long long)arg1;
- (id)initWithOutputDeviceDiscoverySessionImpl:(id)arg1;
- (void)outputDeviceDiscoverySessionImpl:(id)arg1 didExpireWithReplacement:(id)arg2;
- (void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDevices:(id)arg1;
- (struct OpaqueFigRouteDiscoverer { }*)routeDiscoverer;
- (void)setDiscoveryMode:(long long)arg1;
- (void)setTargetAudioSession:(id)arg1;
- (id)targetAudioSession;

@end
