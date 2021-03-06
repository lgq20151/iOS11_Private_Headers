/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVisualLaneGuidance : PBCodable <NSCopying> {
    NSMutableArray * _instructions;
    NSMutableArray * _laneInfos;
}

@property (nonatomic, retain) NSMutableArray *instructions;
@property (nonatomic, retain) NSMutableArray *laneInfos;

+ (Class)instructionType;
+ (Class)laneInfoType;

- (void).cxx_destruct;
- (void)addInstruction:(id)arg1;
- (void)addLaneInfo:(id)arg1;
- (void)clearInstructions;
- (void)clearLaneInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)instructionAtIndex:(unsigned long long)arg1;
- (id)instructions;
- (unsigned long long)instructionsCount;
- (bool)isEqual:(id)arg1;
- (id)laneInfoAtIndex:(unsigned long long)arg1;
- (id)laneInfos;
- (unsigned long long)laneInfosCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setLaneInfos:(id)arg1;
- (void)writeTo:(id)arg1;

@end
