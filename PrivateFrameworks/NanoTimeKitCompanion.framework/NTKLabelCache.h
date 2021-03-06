/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKLabelCache : NSObject {
    NSMutableDictionary * _atlases;
    NSMutableSet * _preloadSet;
}

+ (void)_purgeCache;
+ (id)labelForFaceStyle:(long long)arg1 number:(unsigned long long)arg2 fontSize:(double)arg3 paddedWithZeros:(bool)arg4;
+ (id)labelForText:(id)arg1 font:(long long)arg2 fontSize:(double)arg3 padWithZeroes:(bool)arg4 filter:(bool)arg5;
+ (bool)localeChanged;
+ (id)numeralsSetFromCurrentLocale;
+ (void)prime;
+ (bool)setNumeralsSet:(id)arg1;
+ (id)versionFilePath;
+ (void)wipe;

- (void).cxx_destruct;
- (bool)_localeChanged;
- (void)checkVersion;
- (void)dealloc;
- (void)exportTextureAtlas:(long long)arg1;
- (void)exportTextureAtlas:(double)arg1 font:(long long)arg2 values:(id)arg3 padWithZeroes:(bool)arg4 preload:(bool)arg5;
- (id)init;
- (id)keyForLabelWithFont:(long long)arg1 fontSize:(double)arg2 padWithZeroes:(bool)arg3;
- (id)labelForFaceStyle:(long long)arg1 number:(unsigned long long)arg2 fontSize:(double)arg3 paddedWithZeros:(bool)arg4;
- (id)labelForText:(id)arg1 font:(long long)arg2 fontSize:(double)arg3 padWithZeroes:(bool)arg4 filter:(bool)arg5;
- (void)loadAtlases;
- (id)nameForFaceStyle:(long long)arg1;
- (void)primeFontSize:(double)arg1 font:(long long)arg2 from:(unsigned long long)arg3 to:(unsigned long long)arg4 step:(unsigned long long)arg5;
- (void)primeFontSize:(double)arg1 font:(long long)arg2 values:(id)arg3;
- (void)primeFontSize:(double)arg1 font:(long long)arg2 values:(id)arg3 padWithZeroes:(bool)arg4;
- (void)primeFontSize:(double)arg1 font:(long long)arg2 values:(id)arg3 padWithZeroes:(bool)arg4 preload:(bool)arg5;
- (void)primeFontSize:(double)arg1 font:(long long)arg2 values:(id)arg3 preload:(bool)arg4;
- (id)textureFor:(id)arg1 font:(long long)arg2 fontSize:(double)arg3 padWithZeroes:(bool)arg4;

@end
