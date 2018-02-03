/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationSound : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _alertTopic;
    long long  _alertType;
    NSString * _audioCategory;
    NSNumber * _audioVolume;
    double  _maximumDuration;
    bool  _shouldIgnoreRingerSwitch;
    bool  _shouldRepeat;
    NSString * _toneFileName;
    NSString * _toneIdentifier;
    unsigned long long  _toneMediaLibraryItemIdentifier;
    NSString * _vibrationIdentifier;
    NSDictionary * _vibrationPattern;
}

@property (nonatomic, readonly, copy) NSString *alertTopic;
@property (nonatomic, readonly) long long alertType;
@property (nonatomic, readonly, copy) NSString *audioCategory;
@property (nonatomic, readonly, copy) NSNumber *audioVolume;
@property (nonatomic, readonly) double maximumDuration;
@property (nonatomic, readonly) bool shouldIgnoreRingerSwitch;
@property (nonatomic, readonly) bool shouldRepeat;
@property (nonatomic, readonly, copy) NSString *toneFileName;
@property (nonatomic, readonly, copy) NSString *toneIdentifier;
@property (nonatomic, readonly) unsigned long long toneMediaLibraryItemIdentifier;
@property (nonatomic, readonly, copy) NSString *vibrationIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *vibrationPattern;

+ (id)_soundWithAlertType:(long long)arg1 toneFileName:(id)arg2;
+ (id)defaultSound;
+ (id)soundNamed:(id)arg1;
+ (id)soundWithAlertType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2 audioCategory:(id)arg3 audioVolume:(id)arg4 maximumDuration:(double)arg5 shouldIgnoreRingerSwitch:(bool)arg6 shouldRepeat:(bool)arg7 toneFileName:(id)arg8 toneIdentifier:(id)arg9 toneMediaLibraryItemIdentifier:(unsigned long long)arg10 vibrationIdentifier:(id)arg11 vibrationPattern:(id)arg12;
- (id)alertTopic;
- (long long)alertType;
- (id)audioCategory;
- (id)audioVolume;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)maximumDuration;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)shouldIgnoreRingerSwitch;
- (bool)shouldRepeat;
- (id)toneFileName;
- (id)toneIdentifier;
- (unsigned long long)toneMediaLibraryItemIdentifier;
- (id)vibrationIdentifier;
- (id)vibrationPattern;

@end
