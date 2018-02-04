/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairServiceMapMessage : IDSSocketPairMessage {
    unsigned short  _mappedStreamID;
    unsigned char  _reason;
    NSString * _serviceName;
}

@property (nonatomic, readonly) unsigned short mappedStreamID;
@property (nonatomic, readonly) unsigned char reason;
@property (nonatomic, readonly) NSString *serviceName;

- (void).cxx_destruct;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithReason:(unsigned char)arg1 mappedStreamID:(unsigned short)arg2 serviceName:(id)arg3;
- (unsigned short)mappedStreamID;
- (unsigned char)reason;
- (id)serviceName;

@end