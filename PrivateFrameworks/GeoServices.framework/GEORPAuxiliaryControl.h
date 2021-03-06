/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPAuxiliaryControl : PBCodable <NSCopying> {
    GEORPCarPlayAuxiliaryControl * _car;
    GEORPWatchAuxiliaryControl * _watch;
}

@property (nonatomic, retain) GEORPCarPlayAuxiliaryControl *car;
@property (nonatomic, readonly) bool hasCar;
@property (nonatomic, readonly) bool hasWatch;
@property (nonatomic, retain) GEORPWatchAuxiliaryControl *watch;

- (void).cxx_destruct;
- (id)car;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCar;
- (bool)hasWatch;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCar:(id)arg1;
- (void)setWatch:(id)arg1;
- (id)watch;
- (void)writeTo:(id)arg1;

@end
