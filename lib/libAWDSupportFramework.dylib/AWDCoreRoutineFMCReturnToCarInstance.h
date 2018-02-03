/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineFMCReturnToCarInstance : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int horizontalAccuracy : 1; 
        unsigned int horizontalDistance : 1; 
    }  _has;
    int  _horizontalAccuracy;
    int  _horizontalDistance;
    NSString * _parkingId;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasHorizontalAccuracy;
@property (nonatomic) bool hasHorizontalDistance;
@property (nonatomic, readonly) bool hasParkingId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int horizontalAccuracy;
@property (nonatomic) int horizontalDistance;
@property (nonatomic, retain) NSString *parkingId;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHorizontalAccuracy;
- (bool)hasHorizontalDistance;
- (bool)hasParkingId;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (int)horizontalAccuracy;
- (int)horizontalDistance;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parkingId;
- (bool)readFrom:(id)arg1;
- (void)setHasHorizontalAccuracy:(bool)arg1;
- (void)setHasHorizontalDistance:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHorizontalAccuracy:(int)arg1;
- (void)setHorizontalDistance:(int)arg1;
- (void)setParkingId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
