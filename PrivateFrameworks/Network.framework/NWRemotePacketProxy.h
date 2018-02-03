/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWRemotePacketProxy : NSObject {
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * _defaultOutputHandler;
    NSObject<NWRemotePacketProxyDelegate> * _delegate;
    struct nw_hash_table { } * _packetHashTable;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * _packetProtocol;
    unsigned int  _receiveWindowPacketCount;
    NSMutableArray * _writeRequests;
}

@property struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*defaultOutputHandler;
@property NSObject<NWRemotePacketProxyDelegate> *delegate;
@property struct nw_hash_table { }*packetHashTable;
@property struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*packetProtocol;
@property (nonatomic, readonly) struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*protocol;
@property (nonatomic) unsigned int receiveWindowPacketCount;
@property (retain) NSMutableArray *writeRequests;

- (void).cxx_destruct;
- (void)dealloc;
- (struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)defaultOutputHandler;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)outputHandlerForPacket:(id)arg1 inbound:(bool)arg2;
- (struct nw_hash_table { }*)packetHashTable;
- (struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)packetProtocol;
- (struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)protocol;
- (bool)receiveRemotePacket:(id)arg1;
- (unsigned int)receiveWindowPacketCount;
- (void)setDefaultOutputHandler:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg1;
- (void)setDefaultOutputProtocolHandler:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOutputProtocolHandler:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg1 local:(id)arg2 remote:(id)arg3 ipProtocol:(unsigned char)arg4;
- (void)setPacketHashTable:(struct nw_hash_table { }*)arg1;
- (void)setPacketProtocol:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg1;
- (void)setReceiveWindowPacketCount:(unsigned int)arg1;
- (void)setWriteRequests:(id)arg1;
- (id)writeRequests;

@end
