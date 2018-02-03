/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigEndpointPickerOutputDeviceDiscoverySessionImpl : NSObject <AVOutputDeviceDiscoverySessionImpl> {
    struct OpaqueFigEndpointPicker { } * _endpointPicker;
    unsigned long long  _features;
    AVOutputDeviceDiscoverySession * _parentSession;
    NSObject<OS_dispatch_queue> * _pickerQueue;
    AVWeakReference * _weakReference;
}

@property (nonatomic, readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool devicePresenceDetected;
@property (readonly) unsigned long long hash;
@property AVOutputDeviceDiscoverySession *parentOutputDeviceDiscoverySession;
@property (readonly) Class superclass;
@property (nonatomic, retain) AVAudioSession *targetAudioSession;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_addFigEndpointPickerNotifications;
- (int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1;
- (void)_handlePickerServerConnectionDiedNotification;
- (void)_removeFigEndpointPickerNotifications;
- (id)availableOutputDevicesObject;
- (void)dealloc;
- (bool)devicePresenceDetected;
- (id)init;
- (id)initWithDeviceFeatures:(unsigned long long)arg1;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1;
- (id)parentOutputDeviceDiscoverySession;
- (void)setParentOutputDeviceDiscoverySession:(id)arg1;
- (void)setTargetAudioSession:(id)arg1;
- (id)targetAudioSession;

@end
