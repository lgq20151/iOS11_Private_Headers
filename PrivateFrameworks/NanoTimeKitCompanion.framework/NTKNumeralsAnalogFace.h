/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKNumeralsAnalogFace : NTKFace

+ (id)_defaultSelectedComplicationSlot;

- (id)_complicationMigrationPaths;
- (id)_complicationSlotDescriptors;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_editModeForOldEncodingIndex:(long long)arg1;
- (void)_handleLocaleNumberSystemChange;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_option:(id)arg1 migratesToValidOption:(id*)arg2 forCustomEditMode:(long long)arg3;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (void)dealloc;
- (id)init;

@end
