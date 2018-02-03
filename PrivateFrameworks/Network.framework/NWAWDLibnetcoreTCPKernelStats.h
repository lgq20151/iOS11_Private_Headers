/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWAWDLibnetcoreTCPKernelStats : PBCodable <NSCopying> {
    struct { 
        unsigned int numTfoBlackholed : 1; 
        unsigned int numTfoCookieInvalid : 1; 
        unsigned int numTfoCookieRcv : 1; 
        unsigned int numTfoCookieReq : 1; 
        unsigned int numTfoCookieReqRcv : 1; 
        unsigned int numTfoCookieSent : 1; 
        unsigned int numTfoFallback : 1; 
        unsigned int numTfoSynDataAcked : 1; 
        unsigned int numTfoSynDataRcv : 1; 
        unsigned int numTfoSynDataSent : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _numTfoBlackholed;
    unsigned long long  _numTfoCookieInvalid;
    unsigned long long  _numTfoCookieRcv;
    unsigned long long  _numTfoCookieReq;
    unsigned long long  _numTfoCookieReqRcv;
    unsigned long long  _numTfoCookieSent;
    unsigned long long  _numTfoFallback;
    unsigned long long  _numTfoSynDataAcked;
    unsigned long long  _numTfoSynDataRcv;
    unsigned long long  _numTfoSynDataSent;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasNumTfoBlackholed;
@property (nonatomic) bool hasNumTfoCookieInvalid;
@property (nonatomic) bool hasNumTfoCookieRcv;
@property (nonatomic) bool hasNumTfoCookieReq;
@property (nonatomic) bool hasNumTfoCookieReqRcv;
@property (nonatomic) bool hasNumTfoCookieSent;
@property (nonatomic) bool hasNumTfoFallback;
@property (nonatomic) bool hasNumTfoSynDataAcked;
@property (nonatomic) bool hasNumTfoSynDataRcv;
@property (nonatomic) bool hasNumTfoSynDataSent;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long numTfoBlackholed;
@property (nonatomic) unsigned long long numTfoCookieInvalid;
@property (nonatomic) unsigned long long numTfoCookieRcv;
@property (nonatomic) unsigned long long numTfoCookieReq;
@property (nonatomic) unsigned long long numTfoCookieReqRcv;
@property (nonatomic) unsigned long long numTfoCookieSent;
@property (nonatomic) unsigned long long numTfoFallback;
@property (nonatomic) unsigned long long numTfoSynDataAcked;
@property (nonatomic) unsigned long long numTfoSynDataRcv;
@property (nonatomic) unsigned long long numTfoSynDataSent;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumTfoBlackholed;
- (bool)hasNumTfoCookieInvalid;
- (bool)hasNumTfoCookieRcv;
- (bool)hasNumTfoCookieReq;
- (bool)hasNumTfoCookieReqRcv;
- (bool)hasNumTfoCookieSent;
- (bool)hasNumTfoFallback;
- (bool)hasNumTfoSynDataAcked;
- (bool)hasNumTfoSynDataRcv;
- (bool)hasNumTfoSynDataSent;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numTfoBlackholed;
- (unsigned long long)numTfoCookieInvalid;
- (unsigned long long)numTfoCookieRcv;
- (unsigned long long)numTfoCookieReq;
- (unsigned long long)numTfoCookieReqRcv;
- (unsigned long long)numTfoCookieSent;
- (unsigned long long)numTfoFallback;
- (unsigned long long)numTfoSynDataAcked;
- (unsigned long long)numTfoSynDataRcv;
- (unsigned long long)numTfoSynDataSent;
- (bool)readFrom:(id)arg1;
- (void)setHasNumTfoBlackholed:(bool)arg1;
- (void)setHasNumTfoCookieInvalid:(bool)arg1;
- (void)setHasNumTfoCookieRcv:(bool)arg1;
- (void)setHasNumTfoCookieReq:(bool)arg1;
- (void)setHasNumTfoCookieReqRcv:(bool)arg1;
- (void)setHasNumTfoCookieSent:(bool)arg1;
- (void)setHasNumTfoFallback:(bool)arg1;
- (void)setHasNumTfoSynDataAcked:(bool)arg1;
- (void)setHasNumTfoSynDataRcv:(bool)arg1;
- (void)setHasNumTfoSynDataSent:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNumTfoBlackholed:(unsigned long long)arg1;
- (void)setNumTfoCookieInvalid:(unsigned long long)arg1;
- (void)setNumTfoCookieRcv:(unsigned long long)arg1;
- (void)setNumTfoCookieReq:(unsigned long long)arg1;
- (void)setNumTfoCookieReqRcv:(unsigned long long)arg1;
- (void)setNumTfoCookieSent:(unsigned long long)arg1;
- (void)setNumTfoFallback:(unsigned long long)arg1;
- (void)setNumTfoSynDataAcked:(unsigned long long)arg1;
- (void)setNumTfoSynDataRcv:(unsigned long long)arg1;
- (void)setNumTfoSynDataSent:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
