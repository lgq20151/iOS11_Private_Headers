/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSafariTwoFingerTappedOnLinkEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int outcome : 1; 
    }  _has;
    int  _outcome;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasOutcome;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int outcome;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsOutcome:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOutcome;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)outcome;
- (id)outcomeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasOutcome:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOutcome:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
