/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRideVehicle : PBCodable <NSCopying> {
    GEOLocation * _location;
    NSString * _manufacturer;
    _INPBImageValue * _mapAnnotationImage;
    NSString * _model;
    NSString * _registrationPlate;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) bool hasManufacturer;
@property (nonatomic, readonly) bool hasMapAnnotationImage;
@property (nonatomic, readonly) bool hasModel;
@property (nonatomic, readonly) bool hasRegistrationPlate;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic, retain) NSString *manufacturer;
@property (nonatomic, retain) _INPBImageValue *mapAnnotationImage;
@property (nonatomic, retain) NSString *model;
@property (nonatomic, retain) NSString *registrationPlate;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocation;
- (bool)hasManufacturer;
- (bool)hasMapAnnotationImage;
- (bool)hasModel;
- (bool)hasRegistrationPlate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)manufacturer;
- (id)mapAnnotationImage;
- (void)mergeFrom:(id)arg1;
- (id)model;
- (bool)readFrom:(id)arg1;
- (id)registrationPlate;
- (void)setLocation:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setMapAnnotationImage:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setRegistrationPlate:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
