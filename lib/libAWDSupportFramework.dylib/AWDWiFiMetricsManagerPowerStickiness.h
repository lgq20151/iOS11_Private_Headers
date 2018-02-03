/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerPowerStickiness : PBCodable <NSCopying> {
    unsigned int  _enabled;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int enabled : 1; 
        unsigned int stickiness : 1; 
    }  _has;
    unsigned int  _stickiness;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int enabled;
@property (nonatomic) bool hasEnabled;
@property (nonatomic) bool hasStickiness;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int stickiness;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)enabled;
- (bool)hasEnabled;
- (bool)hasStickiness;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnabled:(unsigned int)arg1;
- (void)setHasEnabled:(bool)arg1;
- (void)setHasStickiness:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setStickiness:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)stickiness;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
