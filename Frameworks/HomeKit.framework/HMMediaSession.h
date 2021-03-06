/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMediaSession : NSObject <HMObjectMerge, NSSecureCoding, _HMMediaSessionDelegate> {
    HMAudioControl * _audioControl;
    <HMMediaSessionDelegate> * _delegate;
    HMMediaProfile * _mediaProfile;
    _HMMediaSession * _mediaSession;
    long long  _playbackState;
    NSUUID * _uuid;
}

@property (readonly) HMAudioControl *audioControl;
@property (readonly, copy) NSString *debugDescription;
@property <HMMediaSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMMediaProfile *mediaProfile;
@property (nonatomic, retain) _HMMediaSession *mediaSession;
@property (readonly) long long playbackState;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)audioControl;
- (void)configure:(id)arg1 messageTargetUUID:(id)arg2;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 playbackState:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)mediaProfile;
- (id)mediaSession;
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;
- (id)messageTargetUUID;
- (void)pauseWithCompletionHandler:(id /* block */)arg1;
- (long long)playbackState;
- (id)playbackStateDescription;
- (void)resumeWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMediaProfile:(id)arg1;
- (void)setMediaSession:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uniqueIdentifier;
- (void)updatePlaybackState:(id)arg1;
- (id)uuid;

@end
