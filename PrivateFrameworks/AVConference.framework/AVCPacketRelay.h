/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCPacketRelay : NSObject {
    NSArray * _connections;
    <AVCPacketRelayDelegate> * _delegate;
    <AVCPacketRelayConnectionProtocol> * _multiplexedConnection;
    AVCPacketRelayDriver * _packetDriver;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSArray *connections;
@property (nonatomic) <AVCPacketRelayDelegate> *delegate;
@property (retain) <AVCPacketRelayConnectionProtocol> *multiplexedConnection;

- (id)connections;
- (void)dealloc;
- (id)delegate;
- (id)findConnectionToForwardData:(const void*)arg1 size:(int)arg2;
- (id)initWithConnection:(id)arg1 connection:(id)arg2 error:(id*)arg3;
- (id)initWithConnections:(id)arg1 multiplexedConnection:(id)arg2 error:(id*)arg3;
- (bool)isAllConnectionTypeValid:(id)arg1;
- (id)multiplexedConnection;
- (void)setConnections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMultiplexedConnection:(id)arg1;
- (void)start;
- (int)startAllConnections;
- (void)stop;
- (bool)stopAllConnections;

@end