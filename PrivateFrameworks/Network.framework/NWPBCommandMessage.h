/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWPBCommandMessage : PBCodable <NSCopying> {
    int  _command;
    struct { 
        unsigned int command : 1; 
    }  _has;
    NSData * _messageData;
}

@property (nonatomic) int command;
@property (nonatomic) bool hasCommand;
@property (nonatomic, readonly) bool hasMessageData;
@property (nonatomic, retain) NSData *messageData;

- (void).cxx_destruct;
- (int)StringAsCommand:(id)arg1;
- (int)command;
- (id)commandAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCommand;
- (bool)hasMessageData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageData;
- (bool)readFrom:(id)arg1;
- (void)setCommand:(int)arg1;
- (void)setHasCommand:(bool)arg1;
- (void)setMessageData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
