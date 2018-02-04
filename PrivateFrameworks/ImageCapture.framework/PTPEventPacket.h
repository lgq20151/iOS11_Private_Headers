/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPEventPacket : NSObject {
    unsigned short  _eventCode;
    int  _numParameters;
    unsigned int  _parameters;
    unsigned int  _transactionID;
}

- (id)contentForTCP;
- (id)contentForUSB;
- (id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned int)arg2;
- (id)description;
- (unsigned short)eventCode;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned int)arg2;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4;
- (id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4 parameter3:(unsigned int)arg5;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)initWithUSBBuffer:(void*)arg1;
- (unsigned int)parameter1;
- (unsigned int)parameter2;
- (unsigned int)parameter3;
- (void)setEventCode:(unsigned short)arg1;
- (void)setParameter1:(unsigned int)arg1;
- (void)setParameter2:(unsigned int)arg1;
- (void)setParameter3:(unsigned int)arg1;
- (void)setTransactionID:(unsigned int)arg1;
- (unsigned int)transactionID;

@end