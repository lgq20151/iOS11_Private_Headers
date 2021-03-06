/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPaletteColorEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long paletteColor;

+ (id)__orderedValues;
+ (id)_localizedNameForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_orderedValuesRestrictedByCurrentDeviceCollection;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)optionWithPaletteColor:(unsigned long long)arg1;

- (id)_valueToFaceBundleStringDict;
- (unsigned long long)paletteColor;
- (long long)swatchStyle;

@end
