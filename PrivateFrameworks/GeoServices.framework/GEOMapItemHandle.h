/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemHandle : PBCodable <NSCopying> {
    NSData * _compressedMapItemStorage;
    int  _handleType;
    struct { 
        unsigned int handleType : 1; 
    }  _has;
    GEOPDPlaceRefinementParameters * _placeRefinementParameters;
    GEOMapItemInitialRequestData * _placeRequestData;
}

@property (nonatomic, retain) NSData *compressedMapItemStorage;
@property (nonatomic) int handleType;
@property (nonatomic, readonly) bool hasCompressedMapItemStorage;
@property (nonatomic) bool hasHandleType;
@property (nonatomic, readonly) bool hasPlaceRefinementParameters;
@property (nonatomic, readonly) bool hasPlaceRequestData;
@property (nonatomic, retain) GEOPDPlaceRefinementParameters *placeRefinementParameters;
@property (nonatomic, retain) GEOMapItemInitialRequestData *placeRequestData;

- (void).cxx_destruct;
- (int)StringAsHandleType:(id)arg1;
- (id)compressedMapItemStorage;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)handleType;
- (id)handleTypeAsString:(int)arg1;
- (bool)hasCompressedMapItemStorage;
- (bool)hasHandleType;
- (bool)hasPlaceRefinementParameters;
- (bool)hasPlaceRequestData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeRefinementParameters;
- (id)placeRequestData;
- (bool)readFrom:(id)arg1;
- (void)setCompressedMapItemStorage:(id)arg1;
- (void)setHandleType:(int)arg1;
- (void)setHasHandleType:(bool)arg1;
- (void)setPlaceRefinementParameters:(id)arg1;
- (void)setPlaceRequestData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
