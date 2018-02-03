/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWAWDLibnetcoreRNFActivityNotification : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int hasRnfActivity : 1; 
    }  _has;
    bool  _hasRnfActivity;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasHasRnfActivity;
@property (nonatomic) bool hasRnfActivity;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHasRnfActivity;
- (bool)hasRnfActivity;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHasRnfActivity:(bool)arg1;
- (void)setHasRnfActivity:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
