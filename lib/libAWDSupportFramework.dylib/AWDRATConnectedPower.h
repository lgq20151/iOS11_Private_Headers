/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDRATConnectedPower : PBCodable <NSCopying> {
    struct { 
        unsigned int powerConnSetupMicroWatt : 1; 
        unsigned int powerConnectedMicroWatt : 1; 
        unsigned int rAT : 1; 
    }  _has;
    unsigned int  _powerConnSetupMicroWatt;
    unsigned int  _powerConnectedMicroWatt;
    int  _rAT;
}

@property (nonatomic) bool hasPowerConnSetupMicroWatt;
@property (nonatomic) bool hasPowerConnectedMicroWatt;
@property (nonatomic) bool hasRAT;
@property (nonatomic) unsigned int powerConnSetupMicroWatt;
@property (nonatomic) unsigned int powerConnectedMicroWatt;
@property (nonatomic) int rAT;

- (int)StringAsRAT:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPowerConnSetupMicroWatt;
- (bool)hasPowerConnectedMicroWatt;
- (bool)hasRAT;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)powerConnSetupMicroWatt;
- (unsigned int)powerConnectedMicroWatt;
- (int)rAT;
- (id)rATAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPowerConnSetupMicroWatt:(bool)arg1;
- (void)setHasPowerConnectedMicroWatt:(bool)arg1;
- (void)setHasRAT:(bool)arg1;
- (void)setPowerConnSetupMicroWatt:(unsigned int)arg1;
- (void)setPowerConnectedMicroWatt:(unsigned int)arg1;
- (void)setRAT:(int)arg1;
- (void)writeTo:(id)arg1;

@end
