/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVictoryColorEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long victoryColor;

+ (id)_localizedNameForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_orderedValuesRestrictedByCurrentDeviceCollection;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)optionWithVictoryColor:(unsigned long long)arg1;

- (id)_valueToFaceBundleStringDict;
- (bool)optionExistsInOSVersion:(unsigned int)arg1;
- (long long)swatchStyle;
- (unsigned long long)victoryColor;

@end
