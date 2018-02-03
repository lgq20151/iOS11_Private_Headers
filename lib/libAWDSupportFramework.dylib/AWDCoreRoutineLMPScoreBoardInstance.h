/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineLMPScoreBoardInstance : PBCodable <NSCopying> {
    int  _corrects;
    struct { 
        unsigned int corrects : 1; 
        unsigned int incorrects : 1; 
        unsigned int invalids : 1; 
        unsigned int unknowns : 1; 
    }  _has;
    int  _incorrects;
    int  _invalids;
    NSString * _keyword;
    int  _unknowns;
}

@property (nonatomic) int corrects;
@property (nonatomic) bool hasCorrects;
@property (nonatomic) bool hasIncorrects;
@property (nonatomic) bool hasInvalids;
@property (nonatomic, readonly) bool hasKeyword;
@property (nonatomic) bool hasUnknowns;
@property (nonatomic) int incorrects;
@property (nonatomic) int invalids;
@property (nonatomic, retain) NSString *keyword;
@property (nonatomic) int unknowns;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)corrects;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCorrects;
- (bool)hasIncorrects;
- (bool)hasInvalids;
- (bool)hasKeyword;
- (bool)hasUnknowns;
- (unsigned long long)hash;
- (int)incorrects;
- (int)invalids;
- (bool)isEqual:(id)arg1;
- (id)keyword;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCorrects:(int)arg1;
- (void)setHasCorrects:(bool)arg1;
- (void)setHasIncorrects:(bool)arg1;
- (void)setHasInvalids:(bool)arg1;
- (void)setHasUnknowns:(bool)arg1;
- (void)setIncorrects:(int)arg1;
- (void)setInvalids:(int)arg1;
- (void)setKeyword:(id)arg1;
- (void)setUnknowns:(int)arg1;
- (int)unknowns;
- (void)writeTo:(id)arg1;

@end
