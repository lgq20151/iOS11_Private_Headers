/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputSettings : NSObject <NSCopying> {
    NSDictionary * _outputSettingsDictionary;
}

@property (nonatomic, readonly) NSSet *compatibleMediaTypes;
@property (nonatomic, readonly) NSDictionary *outputSettingsDictionary;
@property (nonatomic, readonly) bool willYieldCompressedSamples;

+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
+ (unsigned long long)_validateOutputSettingsDictionary:(id)arg1 compatibilityDescription:(id*)arg2;
+ (id)defaultOutputSettingsForMediaType:(id)arg1;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)outputSettingsWithOutputSettingsDictionary:(id)arg1;
+ (id)registeredOutputSettingsClasses;
+ (unsigned long long)validateOutputSettingsDictionary:(id)arg1;

- (bool)canFullySpecifyOutputFormatReturningReason:(id*)arg1;
- (id)compatibleMediaTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1;
- (id)init;
- (id)initWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
- (id)outputSettingsDictionary;
- (bool)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2;
- (bool)willYieldCompressedSamples;

@end
