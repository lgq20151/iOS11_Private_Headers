/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureExternalEAControlPipe : NSObject <NSStreamDelegate> {
    id  _clientAssertion;
    unsigned char  _controlMode;
    unsigned int  _currentIncomingPacketBytesRead;
    unsigned int  _currentIncomingPacketLength;
    NSData * _currentOutgoingPacket;
    unsigned int  _currentOutgoingPacketLength;
    unsigned int  _currentPacketBytesWritten;
    <FigCaptureExternalEAControlPipeDelegate> * _delegate;
    struct _EAFrameBufferPacket { 
        NSMutableData *frameBufferData; 
        unsigned int frameTimeStamp; 
        unsigned int frameBytesRead; 
        unsigned char frameTypeIndex; 
    }  _frameBuffers;
    NSMutableData * _incomingPacket;
    NSRunLoop * _inputRunLoop;
    NSObject<OS_dispatch_queue> * _inputRunQueue;
    NSInputStream * _inputStream;
    NSObject<OS_dispatch_queue> * _inputStreamQueue;
    bool  _isEAOpen;
    NSMutableArray * _outgoingPackets;
    NSRunLoop * _outputRunLoop;
    NSObject<OS_dispatch_queue> * _outputRunQueue;
    NSOutputStream * _outputStream;
    NSObject<OS_dispatch_queue> * _outputStreamQueue;
    bool  _readData;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FigCaptureExternalEAControlPipeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool readData;
@property (readonly) Class superclass;

+ (void)initialize;

- (id)_packetToData:(struct _IAPPacket { unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; void *x5; }*)arg1;
- (void)_readIAPOverEAPacket:(struct _IAPPacket { unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; void *x5; }*)arg1;
- (void)_readOnce;
- (void)_readVideoBufferOverEA:(void*)arg1;
- (void)_writeOnce;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 clientAssert:(id)arg3 controlMode:(unsigned char)arg4;
- (bool)readData;
- (bool)sendPacket:(struct _IAPPacket { unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; void *x5; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReadData:(bool)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end
