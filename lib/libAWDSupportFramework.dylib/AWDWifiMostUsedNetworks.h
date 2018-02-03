/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWifiMostUsedNetworks : PBCodable <NSCopying> {
    unsigned int  _apOUI;
    NSData * _apOui;
    struct { 
        unsigned int timeUsed : 1; 
        unsigned int apOUI : 1; 
        unsigned int securityType : 1; 
        unsigned int timeUsedMinutes : 1; 
    }  _has;
    unsigned int  _securityType;
    double  _timeUsed;
    unsigned int  _timeUsedMinutes;
}

@property (nonatomic) unsigned int apOUI;
@property (nonatomic, retain) NSData *apOui;
@property (nonatomic) bool hasApOUI;
@property (nonatomic, readonly) bool hasApOui;
@property (nonatomic) bool hasSecurityType;
@property (nonatomic) bool hasTimeUsed;
@property (nonatomic) bool hasTimeUsedMinutes;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) double timeUsed;
@property (nonatomic) unsigned int timeUsedMinutes;

- (unsigned int)apOUI;
- (id)apOui;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApOUI;
- (bool)hasApOui;
- (bool)hasSecurityType;
- (bool)hasTimeUsed;
- (bool)hasTimeUsedMinutes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)securityType;
- (void)setApOUI:(unsigned int)arg1;
- (void)setApOui:(id)arg1;
- (void)setHasApOUI:(bool)arg1;
- (void)setHasSecurityType:(bool)arg1;
- (void)setHasTimeUsed:(bool)arg1;
- (void)setHasTimeUsedMinutes:(bool)arg1;
- (void)setSecurityType:(unsigned int)arg1;
- (void)setTimeUsed:(double)arg1;
- (void)setTimeUsedMinutes:(unsigned int)arg1;
- (double)timeUsed;
- (unsigned int)timeUsedMinutes;
- (void)writeTo:(id)arg1;

@end
