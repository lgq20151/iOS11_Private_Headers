/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineFMCViewedInstance : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int uiPlacement : 1; 
    }  _has;
    NSString * _parkingId;
    unsigned long long  _timestamp;
    int  _uiPlacement;
}

@property (nonatomic, readonly) bool hasParkingId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUiPlacement;
@property (nonatomic, retain) NSString *parkingId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int uiPlacement;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasParkingId;
- (bool)hasTimestamp;
- (bool)hasUiPlacement;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parkingId;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUiPlacement:(bool)arg1;
- (void)setParkingId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUiPlacement:(int)arg1;
- (unsigned long long)timestamp;
- (int)uiPlacement;
- (void)writeTo:(id)arg1;

@end
