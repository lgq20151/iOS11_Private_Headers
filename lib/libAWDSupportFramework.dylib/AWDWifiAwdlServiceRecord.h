/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWifiAwdlServiceRecord : PBCodable <NSCopying> {
    unsigned long long  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int opcode : 1; 
        unsigned int serviceId : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned int  _opcode;
    unsigned int  _serviceId;
    NSData * _serviceKey;
    unsigned int  _type;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasOpcode;
@property (nonatomic) bool hasServiceId;
@property (nonatomic, readonly) bool hasServiceKey;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned int opcode;
@property (nonatomic) unsigned int serviceId;
@property (nonatomic, retain) NSData *serviceKey;
@property (nonatomic) unsigned int type;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (bool)hasDuration;
- (bool)hasOpcode;
- (bool)hasServiceId;
- (bool)hasServiceKey;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)opcode;
- (bool)readFrom:(id)arg1;
- (unsigned int)serviceId;
- (id)serviceKey;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasOpcode:(bool)arg1;
- (void)setHasServiceId:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setOpcode:(unsigned int)arg1;
- (void)setServiceId:(unsigned int)arg1;
- (void)setServiceKey:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end
