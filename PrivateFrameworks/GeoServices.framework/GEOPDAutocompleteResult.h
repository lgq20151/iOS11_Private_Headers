/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteResult : PBCodable <NSCopying> {
    bool  _enableRap;
    struct { 
        unsigned int enableRap : 1; 
    }  _has;
    NSMutableArray * _sections;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool enableRap;
@property (nonatomic) bool hasEnableRap;
@property (nonatomic, retain) NSMutableArray *sections;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)sectionsType;

- (void).cxx_destruct;
- (void)addSections:(id)arg1;
- (void)clearSections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enableRap;
- (bool)hasEnableRap;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sections;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)setEnableRap:(bool)arg1;
- (void)setHasEnableRap:(bool)arg1;
- (void)setSections:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
