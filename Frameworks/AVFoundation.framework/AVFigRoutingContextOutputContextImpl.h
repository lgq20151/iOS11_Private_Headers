/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigRoutingContextOutputContextImpl : NSObject <AVOutputContextImpl> {
    <AVFigRoutingContextCommunicationChannelManager> * _commChannelManager;
    id /* block */  _commChannelManagerCreator;
    NSDictionary * _destinationChangesForRouteChangeIDs;
    <AVFigRoutingContextOutputDeviceTranslator> * _deviceTranslator;
    NSObject<OS_dispatch_queue> * _ivarAccessQueue;
    AVOutputContext * _parentContext;
    struct OpaqueFigRoutingContext { } * _routingContext;
    id /* block */  _routingContextCreator;
    struct OpaqueFigVolumeControllerState { } * _volumeController;
    AVWeakReference * _weakObserver;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly, copy) NSString *associatedAudioDeviceID;
@property (readonly) bool canSetVolume;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct OpaqueFigRoutingContext { }*figRoutingContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;
@property (nonatomic, readonly) NSString *outputContextType;
@property (nonatomic, readonly) AVOutputDevice *outputDevice;
@property (readonly) NSArray *outputDevices;
@property AVOutputContext *parentOutputContext;
@property (readonly) bool providesControlForAllVolumeFeatures;
@property (readonly) Class superclass;
@property (readonly) float volume;

+ (id)auxiliaryOutputContext;
+ (struct OpaqueFigRoutingContext { }*)copySystemVideoRoutingContext;
+ (id)iTunesAudioContext;
+ (void)initialize;
+ (bool)outputContextExistsWithRemoteOutputDevice;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)arg1;
+ (id)outputContextImplForID:(id)arg1;
+ (id)platformDependentScreenOrVideoContext;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (struct { int (*x1)(); int (*x2)(); })routingContextFactory;
+ (id)sharedAudioPresentationOutputContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ID;
- (void)_canSetMasterVolumeDidChangeForRoutingContextWithID:(struct __CFString { }*)arg1;
- (void)_canUseForRoutingContextDidChangeForRoutingContextWIthID:(struct __CFString { }*)arg1;
- (void)_currentRouteChanged;
- (void)_groupConfigurationChanged;
- (void)_masterVolumeDidChangeForRoutingContextWithID:(struct __CFString { }*)arg1;
- (void)_remoteControlChannelAvailabilityChanged;
- (void)_routeChangeEndedWithID:(id)arg1 reason:(struct __CFString { }*)arg2;
- (void)_routeChangeStartedWithID:(id)arg1;
- (void)_serverConnectionDied;
- (void)_systemPickerVideoRouteChanged;
- (void)addOutputDevice:(id)arg1;
- (id)associatedAudioDeviceID;
- (bool)canSetVolume;
- (void)communicationChannelManager:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (void)communicationChannelManager:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (struct OpaqueFigRoutingContext { }*)figRoutingContext;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFigRoutingContextCreator:(id /* block */)arg1;
- (id)initWithFigRoutingContextCreator:(id /* block */)arg1 outputDeviceTranslator:(id)arg2 volumeController:(struct OpaqueFigVolumeControllerState { }*)arg3 communicationChannelManagerCreator:(id /* block */)arg4;
- (id)initWithRoutingContextUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)outgoingCommunicationChannel;
- (void)outputContextDidChangeApplicationProcessID:(id)arg1;
- (id)outputContextType;
- (id)outputDevice;
- (id)outputDevices;
- (id)parentOutputContext;
- (bool)providesControlForAllVolumeFeatures;
- (void)removeOutputDevice:(id)arg1;
- (id)routingContextUUID;
- (bool)setOutputDevice:(id)arg1 options:(id)arg2;
- (void)setOutputDevices:(id)arg1;
- (void)setParentOutputContext:(id)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;

@end
