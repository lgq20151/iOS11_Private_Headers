/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoStream : VCMediaStream <VCMediaStreamSyncDestination, VCVideoStreamReceiverDelegate> {
    struct __CVBuffer { } * _cachedRemoteVideoFrame;
    NSObject<OS_dispatch_queue> * _lastDecodedFrameQueue;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _localLayerLock;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _remoteLayerLock;
    VCImageQueue * _remoteQueue;
    struct opaqueRTCReporting { } * _reportingAgent;
    NSObject<OS_dispatch_source> * _rtcpSendHeartBeat;
    long long  _streamToken;
    unsigned int  _uplinkOperatingBitrate;
    VCVideoStreamReceiver * _videoReceiver;
    VCVideoStreamTransmitter * _videoTransmitter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long streamToken;
@property (readonly) Class superclass;

+ (id)capabilities;
+ (id)supportedVideoPayloads;

- (void)cacheRemoteVideoFrame:(struct __CVBuffer { }*)arg1;
- (void)checkPacketTimeouts;
- (void)collectVideoConfigMetrics:(struct __CFDictionary { }*)arg1;
- (void)collectVideoStreamStartMetrics:(struct __CFDictionary { }*)arg1;
- (void)dealloc;
- (void)destroyVideoModules;
- (void)destroyVideoReceiver;
- (void)destroyVideoTransmitter;
- (unsigned int)generateStreamToken;
- (id)init;
- (void)initVideoTransmitter:(id)arg1;
- (void)onCallIDChanged;
- (bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id*)arg2;
- (void)onPause;
- (void)onResume;
- (void)onRtcpEnabledChanged;
- (void)onRtcpSendIntervalChanged;
- (void)onStart;
- (void)onStop;
- (void)overrideConfigWithDefaults;
- (void)reportRTCPPackets:(struct _RTCPPacketList { union tagNTP { unsigned long long x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; } x1; unsigned char x2; struct tagRTCPPACKET {} *x3[10]; unsigned char x4[1472]; unsigned int x5; unsigned char x6[1472]; }*)arg1;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (void)requestLastDecodedFrame;
- (void)resetRtcpSendHeartBeatTimer:(unsigned long long)arg1;
- (void)sendLastRemoteVideoFrame:(struct __CVBuffer { }*)arg1;
- (bool)setRTPPayloads:(int*)arg1 numPayloads:(int)arg2 withError:(id*)arg3;
- (void)setupRTPPayloads;
- (void)startRtcpSendHeartBeat;
- (bool)startSynchronization:(id)arg1;
- (void)stopRtcpSendHeartBeat;
- (void)stopSynchronization;
- (long long)streamToken;
- (id)supportedPayloads;
- (void)updateVideoConfig:(id)arg1;
- (void)updateVideoReceiver:(id)arg1;
- (bool)vcVideoStreamReceiver:(id)arg1 didReceiveRemoteFrame:(struct __CVBuffer { }*)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 newVideoAttributes:(id)arg4 isFirstFrame:(bool)arg5;
- (void)vcVideoStreamReceiver:(id)arg1 downlinkQualityDidChange:(id)arg2;
- (unsigned int)vcVideoStreamReceiver:(id)arg1 receivedTMMBR:(unsigned int)arg2;
- (void)vcVideoStreamReceiverRequestKeyFrame:(id)arg1 rtcpPSFBType:(unsigned int)arg2;

@end
