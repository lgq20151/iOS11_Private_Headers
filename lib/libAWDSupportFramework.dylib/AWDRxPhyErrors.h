/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDRxPhyErrors : PBCodable <NSCopying> {
    unsigned long long  _bphyBadplcp;
    unsigned long long  _bphyRxcrsglitch;
    struct { 
        unsigned int bphyBadplcp : 1; 
        unsigned int bphyRxcrsglitch : 1; 
        unsigned int rfdisable : 1; 
    }  _has;
    unsigned long long  _rfdisable;
}

@property (nonatomic) unsigned long long bphyBadplcp;
@property (nonatomic) unsigned long long bphyRxcrsglitch;
@property (nonatomic) bool hasBphyBadplcp;
@property (nonatomic) bool hasBphyRxcrsglitch;
@property (nonatomic) bool hasRfdisable;
@property (nonatomic) unsigned long long rfdisable;

- (unsigned long long)bphyBadplcp;
- (unsigned long long)bphyRxcrsglitch;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBphyBadplcp;
- (bool)hasBphyRxcrsglitch;
- (bool)hasRfdisable;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)rfdisable;
- (void)setBphyBadplcp:(unsigned long long)arg1;
- (void)setBphyRxcrsglitch:(unsigned long long)arg1;
- (void)setHasBphyBadplcp:(bool)arg1;
- (void)setHasBphyRxcrsglitch:(bool)arg1;
- (void)setHasRfdisable:(bool)arg1;
- (void)setRfdisable:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
