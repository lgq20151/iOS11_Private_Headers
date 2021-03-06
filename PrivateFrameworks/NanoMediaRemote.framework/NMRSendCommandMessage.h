/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRSendCommandMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRSendCommandMessageProtobuf * _protobuf;
}

@property (nonatomic, readonly) unsigned int command;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) Class superclass;

+ (id)messageWithCommand:(unsigned int)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (unsigned int)command;
- (id)initWithCommand:(unsigned int)arg1 options:(id)arg2;
- (id)initWithProtobufData:(id)arg1;
- (id)options;
- (id)protobufData;
- (id)serializationDate;

@end
