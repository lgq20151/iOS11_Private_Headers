/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiLTECoexTxBlanking : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int type4BlankingCount : 1; 
        unsigned int type4BlankingTimeInMS : 1; 
        unsigned int type4ResumeCount : 1; 
        unsigned int type7BlankingCount : 1; 
        unsigned int type7BlankingTimeInMS : 1; 
        unsigned int type7ResumeCount : 1; 
    }  _has;
    unsigned long long  _timestamp;
    unsigned long long  _type4BlankingCount;
    unsigned long long  _type4BlankingTimeInMS;
    unsigned long long  _type4ResumeCount;
    unsigned long long  _type7BlankingCount;
    unsigned long long  _type7BlankingTimeInMS;
    unsigned long long  _type7ResumeCount;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType4BlankingCount;
@property (nonatomic) bool hasType4BlankingTimeInMS;
@property (nonatomic) bool hasType4ResumeCount;
@property (nonatomic) bool hasType7BlankingCount;
@property (nonatomic) bool hasType7BlankingTimeInMS;
@property (nonatomic) bool hasType7ResumeCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long type4BlankingCount;
@property (nonatomic) unsigned long long type4BlankingTimeInMS;
@property (nonatomic) unsigned long long type4ResumeCount;
@property (nonatomic) unsigned long long type7BlankingCount;
@property (nonatomic) unsigned long long type7BlankingTimeInMS;
@property (nonatomic) unsigned long long type7ResumeCount;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (bool)hasType4BlankingCount;
- (bool)hasType4BlankingTimeInMS;
- (bool)hasType4ResumeCount;
- (bool)hasType7BlankingCount;
- (bool)hasType7BlankingTimeInMS;
- (bool)hasType7ResumeCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType4BlankingCount:(bool)arg1;
- (void)setHasType4BlankingTimeInMS:(bool)arg1;
- (void)setHasType4ResumeCount:(bool)arg1;
- (void)setHasType7BlankingCount:(bool)arg1;
- (void)setHasType7BlankingTimeInMS:(bool)arg1;
- (void)setHasType7ResumeCount:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType4BlankingCount:(unsigned long long)arg1;
- (void)setType4BlankingTimeInMS:(unsigned long long)arg1;
- (void)setType4ResumeCount:(unsigned long long)arg1;
- (void)setType7BlankingCount:(unsigned long long)arg1;
- (void)setType7BlankingTimeInMS:(unsigned long long)arg1;
- (void)setType7ResumeCount:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned long long)type4BlankingCount;
- (unsigned long long)type4BlankingTimeInMS;
- (unsigned long long)type4ResumeCount;
- (unsigned long long)type7BlankingCount;
- (unsigned long long)type7BlankingTimeInMS;
- (unsigned long long)type7ResumeCount;
- (void)writeTo:(id)arg1;

@end
