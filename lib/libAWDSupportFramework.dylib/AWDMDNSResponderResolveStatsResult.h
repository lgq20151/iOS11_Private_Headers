/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMDNSResponderResolveStatsResult : PBCodable <NSCopying> {
    unsigned int  _count;
    NSData * _data;
    struct { 
        unsigned int count : 1; 
        unsigned int serverID : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned int  _serverID;
    int  _type;
}

@property (nonatomic) unsigned int count;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) bool hasCount;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic) bool hasServerID;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned int serverID;
@property (nonatomic) int type;

- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCount;
- (bool)hasData;
- (bool)hasServerID;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)serverID;
- (void)setCount:(unsigned int)arg1;
- (void)setData:(id)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasServerID:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setServerID:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
