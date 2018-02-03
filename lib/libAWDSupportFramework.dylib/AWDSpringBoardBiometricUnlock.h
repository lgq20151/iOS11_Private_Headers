/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSpringBoardBiometricUnlock : PBCodable <NSCopying> {
    struct { 
        unsigned int machTimestampInMilliseconds : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _machTimestampInMilliseconds;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasMachTimestampInMilliseconds;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long machTimestampInMilliseconds;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMachTimestampInMilliseconds;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)machTimestampInMilliseconds;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMachTimestampInMilliseconds:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMachTimestampInMilliseconds:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
