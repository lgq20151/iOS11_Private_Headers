/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTemperatureUnitControlItem : HFControlItem {
    NSString * _temperatureUnitCharacteristicType;
}

@property (nonatomic, readonly, copy) NSString *temperatureUnitCharacteristicType;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)temperatureUnitCharacteristicType;
- (id)valueForCharacteristicValues:(id)arg1;

@end
