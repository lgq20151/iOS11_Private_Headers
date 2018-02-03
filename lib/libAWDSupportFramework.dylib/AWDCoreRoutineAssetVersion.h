/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineAssetVersion : PBCodable <NSCopying> {
    int  _contentVersion;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int contentVersion : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) int contentVersion;
@property (nonatomic) bool hasContentVersion;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (int)contentVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContentVersion;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContentVersion:(int)arg1;
- (void)setHasContentVersion:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
