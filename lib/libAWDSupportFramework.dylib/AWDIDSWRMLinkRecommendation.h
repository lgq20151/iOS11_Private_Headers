/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSWRMLinkRecommendation : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int infraWiFiState : 1; 
        unsigned int magnetState : 1; 
        unsigned int primaryLinkType : 1; 
        unsigned int recommendedLinkType : 1; 
    }  _has;
    unsigned int  _infraWiFiState;
    unsigned int  _magnetState;
    unsigned int  _primaryLinkType;
    unsigned int  _recommendedLinkType;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasInfraWiFiState;
@property (nonatomic) bool hasMagnetState;
@property (nonatomic) bool hasPrimaryLinkType;
@property (nonatomic) bool hasRecommendedLinkType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int infraWiFiState;
@property (nonatomic) unsigned int magnetState;
@property (nonatomic) unsigned int primaryLinkType;
@property (nonatomic) unsigned int recommendedLinkType;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInfraWiFiState;
- (bool)hasMagnetState;
- (bool)hasPrimaryLinkType;
- (bool)hasRecommendedLinkType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (unsigned int)infraWiFiState;
- (bool)isEqual:(id)arg1;
- (unsigned int)magnetState;
- (void)mergeFrom:(id)arg1;
- (unsigned int)primaryLinkType;
- (bool)readFrom:(id)arg1;
- (unsigned int)recommendedLinkType;
- (void)setHasInfraWiFiState:(bool)arg1;
- (void)setHasMagnetState:(bool)arg1;
- (void)setHasPrimaryLinkType:(bool)arg1;
- (void)setHasRecommendedLinkType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInfraWiFiState:(unsigned int)arg1;
- (void)setMagnetState:(unsigned int)arg1;
- (void)setPrimaryLinkType:(unsigned int)arg1;
- (void)setRecommendedLinkType:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
