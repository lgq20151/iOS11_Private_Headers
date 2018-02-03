/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSMagnetCorruptionDetailed : PBCodable <NSCopying> {
    unsigned long long  _correctFramesSinceLastCorruption;
    unsigned long long  _correctRawBytesSinceLastCorruption;
    unsigned long long  _discardedRawBytes;
    struct { 
        unsigned int correctFramesSinceLastCorruption : 1; 
        unsigned int correctRawBytesSinceLastCorruption : 1; 
        unsigned int discardedRawBytes : 1; 
        unsigned int linkType : 1; 
        unsigned int recoveryTimeInMs : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _linkType;
    unsigned long long  _recoveryTimeInMs;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long correctFramesSinceLastCorruption;
@property (nonatomic) unsigned long long correctRawBytesSinceLastCorruption;
@property (nonatomic) unsigned long long discardedRawBytes;
@property (nonatomic) bool hasCorrectFramesSinceLastCorruption;
@property (nonatomic) bool hasCorrectRawBytesSinceLastCorruption;
@property (nonatomic) bool hasDiscardedRawBytes;
@property (nonatomic) bool hasLinkType;
@property (nonatomic) bool hasRecoveryTimeInMs;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long linkType;
@property (nonatomic) unsigned long long recoveryTimeInMs;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)correctFramesSinceLastCorruption;
- (unsigned long long)correctRawBytesSinceLastCorruption;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)discardedRawBytes;
- (bool)hasCorrectFramesSinceLastCorruption;
- (bool)hasCorrectRawBytesSinceLastCorruption;
- (bool)hasDiscardedRawBytes;
- (bool)hasLinkType;
- (bool)hasRecoveryTimeInMs;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)linkType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)recoveryTimeInMs;
- (void)setCorrectFramesSinceLastCorruption:(unsigned long long)arg1;
- (void)setCorrectRawBytesSinceLastCorruption:(unsigned long long)arg1;
- (void)setDiscardedRawBytes:(unsigned long long)arg1;
- (void)setHasCorrectFramesSinceLastCorruption:(bool)arg1;
- (void)setHasCorrectRawBytesSinceLastCorruption:(bool)arg1;
- (void)setHasDiscardedRawBytes:(bool)arg1;
- (void)setHasLinkType:(bool)arg1;
- (void)setHasRecoveryTimeInMs:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLinkType:(unsigned long long)arg1;
- (void)setRecoveryTimeInMs:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
