/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWPBUpdateBrowse : PBCodable <NSCopying> {
    NSString * _clientUUID;
    NSMutableArray * _discoveredEndpoints;
}

@property (nonatomic, retain) NSString *clientUUID;
@property (nonatomic, retain) NSMutableArray *discoveredEndpoints;
@property (nonatomic, readonly) bool hasClientUUID;

+ (Class)discoveredEndpointsType;

- (void).cxx_destruct;
- (void)addDiscoveredEndpoints:(id)arg1;
- (void)clearDiscoveredEndpoints;
- (id)clientUUID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)discoveredEndpoints;
- (id)discoveredEndpointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)discoveredEndpointsCount;
- (bool)hasClientUUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientUUID:(id)arg1;
- (void)setDiscoveredEndpoints:(id)arg1;
- (void)writeTo:(id)arg1;

@end
