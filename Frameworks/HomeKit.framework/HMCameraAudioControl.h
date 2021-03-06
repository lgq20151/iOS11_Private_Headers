/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCameraAudioControl : HMCameraControl {
    _HMCameraAudioControl * _audioControl;
}

@property (nonatomic, retain) _HMCameraAudioControl *audioControl;
@property (nonatomic, readonly) HMCharacteristic *mute;
@property (nonatomic, readonly) HMCharacteristic *volume;

- (void).cxx_destruct;
- (id)audioControl;
- (id)initWithAudioControl:(id)arg1;
- (id)mute;
- (void)setAudioControl:(id)arg1;
- (id)volume;

@end
