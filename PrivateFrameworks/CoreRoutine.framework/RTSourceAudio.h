/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTSourceAudio : RTSource <NSCopying, NSSecureCoding> {
    long long  _audioSource;
    NSString * _deviceName;
}

@property (nonatomic, readonly) long long audioSource;
@property (nonatomic, readonly) NSString *deviceName;

+ (id)stringFromAudioSource:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)audioSource;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceName:(id)arg1 audioSource:(long long)arg2;
- (bool)isEqual:(id)arg1;

@end
