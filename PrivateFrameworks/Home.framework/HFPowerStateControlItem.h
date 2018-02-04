/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFPowerStateControlItem : HFPrimaryStateControlItem <HFPrimaryStateWriter> {
    NSSet * _auxiliaryTargetValueTuples;
}

@property (nonatomic, readonly) NSSet *auxiliaryTargetValueTuples;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_powerStateTargetValues;
+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_allTargetValues;
- (id)auxiliaryTargetValueTuples;
- (bool)canCopyWithCharacteristicTypeSubset:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;
- (bool)supportsItemRepresentingServices:(id)arg1;
- (id)togglePrimaryState;
- (id)toggleValue;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)writePrimaryState:(long long)arg1;

@end