/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricIPv4DHCPLatency : PBCodable <NSCopying> {
    unsigned int  _dhcpLatencyMilliSecs;
    unsigned int  _dhcpLeaseMins;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int dhcpLatencyMilliSecs : 1; 
        unsigned int dhcpLeaseMins : 1; 
        unsigned int securityType : 1; 
    }  _has;
    unsigned int  _securityType;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int dhcpLatencyMilliSecs;
@property (nonatomic) unsigned int dhcpLeaseMins;
@property (nonatomic) bool hasDhcpLatencyMilliSecs;
@property (nonatomic) bool hasDhcpLeaseMins;
@property (nonatomic) bool hasSecurityType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)dhcpLatencyMilliSecs;
- (unsigned int)dhcpLeaseMins;
- (id)dictionaryRepresentation;
- (bool)hasDhcpLatencyMilliSecs;
- (bool)hasDhcpLeaseMins;
- (bool)hasSecurityType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)securityType;
- (void)setDhcpLatencyMilliSecs:(unsigned int)arg1;
- (void)setDhcpLeaseMins:(unsigned int)arg1;
- (void)setHasDhcpLatencyMilliSecs:(bool)arg1;
- (void)setHasDhcpLeaseMins:(bool)arg1;
- (void)setHasSecurityType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSecurityType:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
