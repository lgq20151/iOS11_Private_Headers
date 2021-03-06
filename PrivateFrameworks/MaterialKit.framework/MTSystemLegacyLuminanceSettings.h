/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTSystemLegacyLuminanceSettings : MTSystemModuleMaterialSettings <_MTLuminanceMapConfiguring>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_luminanceColorMapName, nonatomic, readonly, copy) NSString *luminanceColorMapName;
@property (readonly) Class superclass;

+ (id)sharedMaterialSettings;

- (id)_luminanceColorMapName;
- (double)blurRadius;
- (double)brightness;
- (double)luminanceAlpha;
- (long long)materialVersion;
- (double)saturation;

@end
