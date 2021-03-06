/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBasePhotoFace : NTKFace

+ (bool)_customEditModeIsRows:(long long)arg1;
+ (id)_defaultSelectedComplicationSlot;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1;

- (bool)_allowsEditing;
- (id)_complicationSlotDescriptors;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (id)_orderedComplicationSlots;
- (id)_resourceDirectorySnapshotKey;
- (long long)complicationPickerStyle;

@end
