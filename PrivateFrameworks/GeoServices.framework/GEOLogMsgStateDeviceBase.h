/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateDeviceBase : PBCodable <NSCopying> {
    int  _deviceBatteryState;
    bool  _deviceInVehicle;
    int  _deviceInterfaceOrientation;
    struct { 
        unsigned int deviceBatteryState : 1; 
        unsigned int deviceInterfaceOrientation : 1; 
        unsigned int deviceInVehicle : 1; 
    }  _has;
}

@property (nonatomic) int deviceBatteryState;
@property (nonatomic) bool deviceInVehicle;
@property (nonatomic) int deviceInterfaceOrientation;
@property (nonatomic) bool hasDeviceBatteryState;
@property (nonatomic) bool hasDeviceInVehicle;
@property (nonatomic) bool hasDeviceInterfaceOrientation;

- (int)StringAsDeviceBatteryState:(id)arg1;
- (int)StringAsDeviceInterfaceOrientation:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)deviceBatteryState;
- (id)deviceBatteryStateAsString:(int)arg1;
- (bool)deviceInVehicle;
- (int)deviceInterfaceOrientation;
- (id)deviceInterfaceOrientationAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasDeviceBatteryState;
- (bool)hasDeviceInVehicle;
- (bool)hasDeviceInterfaceOrientation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceBatteryState:(int)arg1;
- (void)setDeviceInVehicle:(bool)arg1;
- (void)setDeviceInterfaceOrientation:(int)arg1;
- (void)setHasDeviceBatteryState:(bool)arg1;
- (void)setHasDeviceInVehicle:(bool)arg1;
- (void)setHasDeviceInterfaceOrientation:(bool)arg1;
- (void)writeTo:(id)arg1;

@end