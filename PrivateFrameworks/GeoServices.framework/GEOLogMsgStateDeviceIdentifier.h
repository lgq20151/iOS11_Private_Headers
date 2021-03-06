/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateDeviceIdentifier : PBCodable <NSCopying> {
    NSString * _deviceHwIdentifier;
    NSString * _deviceOsVersion;
}

@property (nonatomic, retain) NSString *deviceHwIdentifier;
@property (nonatomic, retain) NSString *deviceOsVersion;
@property (nonatomic, readonly) bool hasDeviceHwIdentifier;
@property (nonatomic, readonly) bool hasDeviceOsVersion;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceHwIdentifier;
- (id)deviceOsVersion;
- (id)dictionaryRepresentation;
- (bool)hasDeviceHwIdentifier;
- (bool)hasDeviceOsVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceHwIdentifier:(id)arg1;
- (void)setDeviceOsVersion:(id)arg1;
- (void)writeTo:(id)arg1;

@end
