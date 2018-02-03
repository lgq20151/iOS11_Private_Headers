/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLBEndpointsFetchReport : PBCodable <NSCopying> {
    int  _connectionCellularFallbackCount;
    int  _endpointsFetchTaskBadReplyCount;
    int  _endpointsFetchTaskCount;
    int  _endpointsFetchTaskFailureCount;
    int  _endpointsFetchTaskSuccessCount;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionCellularFallbackCount : 1; 
        unsigned int endpointsFetchTaskBadReplyCount : 1; 
        unsigned int endpointsFetchTaskCount : 1; 
        unsigned int endpointsFetchTaskFailureCount : 1; 
        unsigned int endpointsFetchTaskSuccessCount : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) int connectionCellularFallbackCount;
@property (nonatomic) int endpointsFetchTaskBadReplyCount;
@property (nonatomic) int endpointsFetchTaskCount;
@property (nonatomic) int endpointsFetchTaskFailureCount;
@property (nonatomic) int endpointsFetchTaskSuccessCount;
@property (nonatomic) bool hasConnectionCellularFallbackCount;
@property (nonatomic) bool hasEndpointsFetchTaskBadReplyCount;
@property (nonatomic) bool hasEndpointsFetchTaskCount;
@property (nonatomic) bool hasEndpointsFetchTaskFailureCount;
@property (nonatomic) bool hasEndpointsFetchTaskSuccessCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (int)connectionCellularFallbackCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)endpointsFetchTaskBadReplyCount;
- (int)endpointsFetchTaskCount;
- (int)endpointsFetchTaskFailureCount;
- (int)endpointsFetchTaskSuccessCount;
- (bool)hasConnectionCellularFallbackCount;
- (bool)hasEndpointsFetchTaskBadReplyCount;
- (bool)hasEndpointsFetchTaskCount;
- (bool)hasEndpointsFetchTaskFailureCount;
- (bool)hasEndpointsFetchTaskSuccessCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConnectionCellularFallbackCount:(int)arg1;
- (void)setEndpointsFetchTaskBadReplyCount:(int)arg1;
- (void)setEndpointsFetchTaskCount:(int)arg1;
- (void)setEndpointsFetchTaskFailureCount:(int)arg1;
- (void)setEndpointsFetchTaskSuccessCount:(int)arg1;
- (void)setHasConnectionCellularFallbackCount:(bool)arg1;
- (void)setHasEndpointsFetchTaskBadReplyCount:(bool)arg1;
- (void)setHasEndpointsFetchTaskCount:(bool)arg1;
- (void)setHasEndpointsFetchTaskFailureCount:(bool)arg1;
- (void)setHasEndpointsFetchTaskSuccessCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
