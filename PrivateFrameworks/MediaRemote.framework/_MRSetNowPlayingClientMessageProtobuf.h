/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSetNowPlayingClientMessageProtobuf : PBCodable <NSCopying> {
    _MRNowPlayingClientProtobuf * _client;
}

@property (nonatomic, retain) _MRNowPlayingClientProtobuf *client;
@property (nonatomic, readonly) bool hasClient;

- (id)client;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClient;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClient:(id)arg1;
- (void)writeTo:(id)arg1;

@end
