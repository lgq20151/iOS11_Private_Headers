/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKEnumeratedEditOption : NTKValueEditOption

@property (nonatomic, readonly) unsigned long long _value;

+ (id)_orderedValues;
+ (id)_orderedValuesRestrictedByCurrentDeviceCollection;
+ (bool)_valueIsValid:(unsigned long long)arg1;
+ (unsigned long long)indexOfOption:(id)arg1;
+ (unsigned long long)numberOfOptions;
+ (id)optionAtIndex:(unsigned long long)arg1;
+ (id)optionsRestrictedByCurrentDeviceCollection;

@end