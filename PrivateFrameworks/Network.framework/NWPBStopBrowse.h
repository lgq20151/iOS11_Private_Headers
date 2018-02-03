/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWPBStopBrowse : PBCodable <NSCopying> {
    NSString * _clientUUID;
}

@property (nonatomic, retain) NSString *clientUUID;
@property (nonatomic, readonly) bool hasClientUUID;

- (void).cxx_destruct;
- (id)clientUUID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientUUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientUUID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
