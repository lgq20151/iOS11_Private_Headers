/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSendCommandMessageProtobuf : PBCodable <NSCopying> {
    int  _command;
    struct { 
        unsigned int command : 1; 
    }  _has;
    _MRCommandOptionsProtobuf * _options;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
}

@property (nonatomic) int command;
@property (nonatomic) bool hasCommand;
@property (nonatomic, readonly) bool hasOptions;
@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic, retain) _MRCommandOptionsProtobuf *options;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (int)StringAsCommand:(id)arg1;
- (int)command;
- (id)commandAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCommand;
- (bool)hasOptions;
- (bool)hasPlayerPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)options;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (void)setCommand:(int)arg1;
- (void)setHasCommand:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
