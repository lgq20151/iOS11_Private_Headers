/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLItem : PBCodable <NSCopying> {
    bool  _currentLocation;
    struct { 
        unsigned int currentLocation : 1; 
    }  _has;
    GEOMapItemStorage * _mapItemStorage;
    GEOPlace * _place;
}

@property (nonatomic) bool currentLocation;
@property (nonatomic) bool hasCurrentLocation;
@property (nonatomic, readonly) bool hasMapItemStorage;
@property (nonatomic, readonly) bool hasPlace;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) GEOPlace *place;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)currentLocation;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrentLocation;
- (bool)hasMapItemStorage;
- (bool)hasPlace;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mapItem;
- (id)mapItemStorage;
- (void)mergeFrom:(id)arg1;
- (id)place;
- (bool)readFrom:(id)arg1;
- (void)setCurrentLocation:(bool)arg1;
- (void)setHasCurrentLocation:(bool)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setPlace:(id)arg1;
- (void)writeTo:(id)arg1;

@end