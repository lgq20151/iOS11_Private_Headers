/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDBltPrimaryDeviceSendTimeout : PBCodable <NSCopying> {
    unsigned int  _connectionType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int origConnectionType : 1; 
    }  _has;
    unsigned int  _origConnectionType;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int connectionType;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasOrigConnectionType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int origConnectionType;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConnectionType;
- (bool)hasOrigConnectionType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)origConnectionType;
- (bool)readFrom:(id)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasOrigConnectionType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOrigConnectionType:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
