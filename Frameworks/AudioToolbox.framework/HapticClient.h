/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface HapticClient : NSObject <NSXPCListenerDelegate> {
    NSArray * _channelKeys;
    unsigned long long  _clientID;
    bool  _connected;
    NSXPCConnection * _connection;
    bool  _prewarmed;
    bool  _running;
    <ServerInterface> * _serverDelegate;
    int  _serverProcessID;
    int  _serverTimeout;
    struct HapticSharedMemory { 
        int (**_vptr$SharableMemoryBase)(); 
        bool mIsOwner; 
        bool mWasMapped; 
        unsigned long long mSize; 
        void *mBuffer; 
        unsigned int mPort; 
        int mFileDesc; 
        int mSerial; 
        NSObject<OS_xpc_object> *mXPCObject; 
    }  _sharedBuffer;
    struct unique_ptr<ClientSyncCaller, std::__1::default_delete<ClientSyncCaller> > { 
        struct __compressed_pair<ClientSyncCaller *, std::__1::default_delete<ClientSyncCaller> > { 
            struct ClientSyncCaller {} *__first_; 
        } __ptr_; 
    }  _syncCaller;
    unsigned long long  _uniqueID;
}

@property (readonly) NSArray *channelKeys;
@property (readonly) unsigned long long clientID;
@property bool connected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double hapticLatency;
@property (readonly) unsigned long long hash;
@property (readonly) bool prewarmed;
@property (readonly) bool running;
@property (retain) <ServerInterface> *serverDelegate;
@property int serverProcessID;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allocateResources:(id /* block */)arg1;
- (id)channelKeys;
- (bool)clearEventsFromTime:(double)arg1 channel:(unsigned long long)arg2;
- (unsigned long long)clientID;
- (bool)connected;
- (void)dealloc;
- (void)destroySharedMemory;
- (bool)detachHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (void)disconnect;
- (void)doInit;
- (bool)enableSequenceLooping:(unsigned long long)arg1 enable:(bool)arg2 error:(id*)arg3;
- (bool)finish:(id /* block */)arg1;
- (void)handleConnectionError;
- (void)handleHapticServerCrash;
- (double)hapticLatency;
- (id)initAndReturnError:(id*)arg1;
- (bool)loadHapticEvent:(id)arg1 reply:(id /* block */)arg2;
- (bool)loadHapticPattern:(id)arg1 reply:(id /* block */)arg2;
- (bool)loadHapticSequence:(id)arg1 reply:(id /* block */)arg2;
- (bool)prepareHapticSequence:(unsigned long long)arg1 error:(id*)arg2;
- (void)prewarm:(id /* block */)arg1;
- (bool)prewarmed;
- (void)releaseResources;
- (bool)running;
- (bool)sendEvents:(id)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 outToken:(unsigned long long*)arg4 error:(id*)arg5;
- (id)serverDelegate;
- (int)serverProcessID;
- (bool)setChannelEventBehavior:(unsigned long long)arg1 channel:(unsigned long long)arg2;
- (void)setChannelKeys:(id)arg1;
- (void)setConnected:(bool)arg1;
- (bool)setNumberOfChannels:(unsigned long long)arg1 error:(id*)arg2;
- (bool)setParameter:(unsigned long long)arg1 atTime:(double)arg2 value:(float)arg3 channel:(unsigned long long)arg4;
- (bool)setPlayerBehavior:(unsigned long long)arg1 error:(id*)arg2;
- (bool)setSequenceParameter:(unsigned long long)arg1 atTime:(double)arg2 value:(float)arg3 sequenceID:(unsigned long long)arg4 channel:(unsigned long long)arg5;
- (void)setServerDelegate:(id)arg1;
- (void)setServerProcessID:(int)arg1;
- (bool)setupConnectionAndReturnError:(id*)arg1;
- (int)setupSharedMemory:(id)arg1 size:(unsigned int)arg2;
- (bool)startEventAndReturnToken:(unsigned long long)arg1 type:(unsigned long long)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 eventToken:(unsigned long long*)arg5;
- (bool)startHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 withOffset:(double)arg3;
- (void)startRunning:(id /* block */)arg1;
- (bool)stopEventWithToken:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3;
- (bool)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (void)stopPrewarm;
- (void)stopRunning;

@end
