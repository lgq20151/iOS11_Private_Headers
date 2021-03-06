/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVideoThemeEditOption : NTKEnumeratedEditOption

@property (nonatomic, readonly) unsigned long long videoTheme;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)optionWithVideoTheme:(unsigned long long)arg1;

- (id)_valueToFaceBundleStringDict;
- (long long)swatchStyle;
- (unsigned long long)videoTheme;

@end
