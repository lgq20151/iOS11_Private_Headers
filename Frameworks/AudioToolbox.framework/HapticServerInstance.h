/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface HapticServerInstance : NSObject <ServerInterface> {
    unsigned long long  _clientID;
    HapticServer * _master;
    NSTimer * _timer;
}

@property (readonly) unsigned long long clientID;
@property (readonly) HapticServer *master;

- (void).cxx_destruct;
- (void)allocateClientResources:(id /* block */)arg1;
- (unsigned long long)clientID;
- (void)getClientID:(id /* block */)arg1;
- (void)getHapticLatency:(id /* block */)arg1;
- (void)handleConnectionError;
- (id)initWithMasterAndID:(id)arg1 id:(unsigned long long)arg2 outError:(id*)arg3;
- (void)loadHapticEvent:(id)arg1 reply:(id /* block */)arg2;
- (void)loadHapticPattern:(id)arg1 reply:(id /* block */)arg2;
- (void)loadHapticSequence:(id)arg1 reply:(id /* block */)arg2;
- (id)master;
- (void)prepareHapticSequence:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)prewarm:(id /* block */)arg1;
- (void)releaseClientResources;
- (void)requestChannels:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)setDoneReply:(id /* block */)arg1;
- (void)setPlayerBehavior:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)startRunning:(id /* block */)arg1;
- (void)stopPrewarm;
- (void)stopRunning;

@end
