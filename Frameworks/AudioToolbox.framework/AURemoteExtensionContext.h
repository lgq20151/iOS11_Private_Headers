/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AURemoteExtensionContext : NSExtensionContext <AUAudioUnitXPCProtocol> {
    AUAudioUnit * _audioUnit;
    AUParameterTree * _cachedParameterTree;
    struct AudioComponentDescription { 
        unsigned int componentType; 
        unsigned int componentSubType; 
        unsigned int componentManufacturer; 
        unsigned int componentFlags; 
        unsigned int componentFlagsMask; 
    }  _componentDescription;
    int  _deferPropertyChangeNotifications;
    NSObject<OS_voucher> * _initializationVoucher;
    bool  _isUIExtension;
    NSMutableArray * _pendingChangedProperties;
    NSObject<OS_dispatch_queue> * _propertyObserverQueue;
    <AUAudioUnitHostProtocol> * _remoteHost;
    struct AUExtRenderingServer { int (**x1)(); unsigned int x2; struct XMachPortSendRight { unsigned int x_3_1_1; } x3; int x4; struct IOThread {} *x5; bool x6; unsigned int x7; int x8; int x9; struct IPCAUSharedMemory { int (**x_10_1_1)(); bool x_10_1_2; bool x_10_1_3; unsigned long long x_10_1_4; void *x_10_1_5; unsigned int x_10_1_6; int x_10_1_7; int x_10_1_8; id x_10_1_9; struct vector<IPCAUSharedMemoryBase::Element, std::__1::allocator<IPCAUSharedMemoryBase::Element> > { struct Element {} *x_10_2_1; struct Element {} *x_10_2_2; struct __compressed_pair<IPCAUSharedMemoryBase::Element *, std::__1::allocator<IPCAUSharedMemoryBase::Element> > { struct Element {} *x_3_3_1; } x_10_2_3; } x_10_1_10; unsigned int x_10_1_11; bool x_10_1_12; unsigned int x_10_1_13; } x10; struct unique_ptr<SemaphoreIOMessenger_Receiver, std::__1::default_delete<SemaphoreIOMessenger_Receiver> > { struct __compressed_pair<SemaphoreIOMessenger_Receiver *, std::__1::default_delete<SemaphoreIOMessenger_Receiver> > { struct SemaphoreIOMessenger_Receiver {} *x_1_2_1; } x_11_1_1; } x11; } * _renderServer;
    AUAudioUnitViewService * _viewService;
}

@property (nonatomic) AUAudioUnitViewService *viewService;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)_fetchAndClearPendingChangedProperties;
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id*)arg3;
- (bool)_identifyBus:(id)arg1 scope:(unsigned int*)arg2 element:(unsigned int*)arg3;
- (void)addPropertyObserver:(id)arg1 context:(unsigned long long)arg2;
- (void)close:(id /* block */)arg1;
- (id)currentParameterTree;
- (void)dealloc;
- (void)getBusses:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)getParameter:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)getParameterTree:(id /* block */)arg1;
- (id)iOSViewController;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)initialize2:(int)arg1 formats:(id)arg2 maxFrames:(unsigned long long)arg3 buffer:(id)arg4 bufferSize:(unsigned int)arg5 beginSem:(id)arg6 endSem:(id)arg7 reply:(id /* block */)arg8;
- (void)initialize:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)open:(id /* block */)arg1;
- (void)parameterNode:(id)arg1 displayNameWithLength:(long long)arg2 reply:(id /* block */)arg3;
- (void)parameterStringFromValue:(float)arg1 currentValue:(bool)arg2 address:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)parameterValueFromString:(id)arg1 address:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)parametersForOverviewWithCount:(long long)arg1 reply:(id /* block */)arg2;
- (void)removePropertyObserver:(id)arg1 context:(unsigned long long)arg2;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)reset;
- (void)selectViewConfiguration:(id)arg1;
- (void)setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)setBusFormat:(unsigned int)arg1 scope:(unsigned int)arg2 format:(id)arg3 reply:(id /* block */)arg4;
- (void)setBusName:(unsigned int)arg1 scope:(unsigned int)arg2 name:(id)arg3 reply:(id /* block */)arg4;
- (void)setValue:(id)arg1 forKey:(id)arg2 reply:(id /* block */)arg3;
- (void)setValue:(id)arg1 forProperty:(id)arg2 reply:(id /* block */)arg3;
- (void)setViewService:(id)arg1;
- (void)setWorkIntervalPort:(id)arg1;
- (void)supportedViewConfigurations:(id)arg1 reply:(id /* block */)arg2;
- (void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;
- (void)uninitialize:(id /* block */)arg1;
- (void)valueForKey:(id)arg1 reply:(id /* block */)arg2;
- (void)valueForProperty:(id)arg1 reply:(id /* block */)arg2;
- (id)viewService;

@end
