/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetClimateSettingsInCarIntent : PBCodable <NSCopying> {
    int  _airCirculationMode;
    int  _climateZone;
    bool  _enableAirConditioner;
    bool  _enableAutoMode;
    bool  _enableClimateControl;
    bool  _enableFan;
    _INPBInteger * _fanSpeedIndex;
    _INPBDouble * _fanSpeedPercentage;
    struct { 
        unsigned int airCirculationMode : 1; 
        unsigned int climateZone : 1; 
        unsigned int relativeFanSpeedSetting : 1; 
        unsigned int relativeTemperatureSetting : 1; 
        unsigned int enableAirConditioner : 1; 
        unsigned int enableAutoMode : 1; 
        unsigned int enableClimateControl : 1; 
        unsigned int enableFan : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _relativeFanSpeedSetting;
    int  _relativeTemperatureSetting;
    _INPBTemperature * _temperature;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int airCirculationMode;
@property (nonatomic) int climateZone;
@property (nonatomic) bool enableAirConditioner;
@property (nonatomic) bool enableAutoMode;
@property (nonatomic) bool enableClimateControl;
@property (nonatomic) bool enableFan;
@property (nonatomic, retain) _INPBInteger *fanSpeedIndex;
@property (nonatomic, retain) _INPBDouble *fanSpeedPercentage;
@property (nonatomic) bool hasAirCirculationMode;
@property (nonatomic) bool hasClimateZone;
@property (nonatomic) bool hasEnableAirConditioner;
@property (nonatomic) bool hasEnableAutoMode;
@property (nonatomic) bool hasEnableClimateControl;
@property (nonatomic) bool hasEnableFan;
@property (nonatomic, readonly) bool hasFanSpeedIndex;
@property (nonatomic, readonly) bool hasFanSpeedPercentage;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasRelativeFanSpeedSetting;
@property (nonatomic) bool hasRelativeTemperatureSetting;
@property (nonatomic, readonly) bool hasTemperature;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int relativeFanSpeedSetting;
@property (nonatomic) int relativeTemperatureSetting;
@property (nonatomic, retain) _INPBTemperature *temperature;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsAirCirculationMode:(id)arg1;
- (int)StringAsClimateZone:(id)arg1;
- (int)StringAsRelativeFanSpeedSetting:(id)arg1;
- (int)StringAsRelativeTemperatureSetting:(id)arg1;
- (int)airCirculationMode;
- (id)airCirculationModeAsString:(int)arg1;
- (int)climateZone;
- (id)climateZoneAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enableAirConditioner;
- (bool)enableAutoMode;
- (bool)enableClimateControl;
- (bool)enableFan;
- (id)fanSpeedIndex;
- (id)fanSpeedPercentage;
- (bool)hasAirCirculationMode;
- (bool)hasClimateZone;
- (bool)hasEnableAirConditioner;
- (bool)hasEnableAutoMode;
- (bool)hasEnableClimateControl;
- (bool)hasEnableFan;
- (bool)hasFanSpeedIndex;
- (bool)hasFanSpeedPercentage;
- (bool)hasIntentMetadata;
- (bool)hasRelativeFanSpeedSetting;
- (bool)hasRelativeTemperatureSetting;
- (bool)hasTemperature;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)relativeFanSpeedSetting;
- (id)relativeFanSpeedSettingAsString:(int)arg1;
- (int)relativeTemperatureSetting;
- (id)relativeTemperatureSettingAsString:(int)arg1;
- (void)setAirCirculationMode:(int)arg1;
- (void)setClimateZone:(int)arg1;
- (void)setEnableAirConditioner:(bool)arg1;
- (void)setEnableAutoMode:(bool)arg1;
- (void)setEnableClimateControl:(bool)arg1;
- (void)setEnableFan:(bool)arg1;
- (void)setFanSpeedIndex:(id)arg1;
- (void)setFanSpeedPercentage:(id)arg1;
- (void)setHasAirCirculationMode:(bool)arg1;
- (void)setHasClimateZone:(bool)arg1;
- (void)setHasEnableAirConditioner:(bool)arg1;
- (void)setHasEnableAutoMode:(bool)arg1;
- (void)setHasEnableClimateControl:(bool)arg1;
- (void)setHasEnableFan:(bool)arg1;
- (void)setHasRelativeFanSpeedSetting:(bool)arg1;
- (void)setHasRelativeTemperatureSetting:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setRelativeFanSpeedSetting:(int)arg1;
- (void)setRelativeTemperatureSetting:(int)arg1;
- (void)setTemperature:(id)arg1;
- (id)temperature;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
