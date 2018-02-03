/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWPBOpenConnection : PBCodable <NSCopying> {
    NSString * _clientUUID;
    NWPBEndpoint * _endpoint;
    NWPBParameters * _parameters;
}

@property (nonatomic, retain) NSString *clientUUID;
@property (nonatomic, retain) NWPBEndpoint *endpoint;
@property (nonatomic, readonly) bool hasClientUUID;
@property (nonatomic, readonly) bool hasEndpoint;
@property (nonatomic, readonly) bool hasParameters;
@property (nonatomic, retain) NWPBParameters *parameters;

- (void).cxx_destruct;
- (id)clientUUID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endpoint;
- (bool)hasClientUUID;
- (bool)hasEndpoint;
- (bool)hasParameters;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parameters;
- (bool)readFrom:(id)arg1;
- (void)setClientUUID:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)writeTo:(id)arg1;

@end
