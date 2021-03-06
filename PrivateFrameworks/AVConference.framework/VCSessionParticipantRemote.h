/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionParticipantRemote : VCSessionParticipant

- (id)initWithIDSDestination:(id)arg1 opaqueData:(id)arg2 delegate:(id)arg3 processId:(int)arg4;
- (id)newStreamConfigurationForRemoteSSRC:(unsigned int)arg1;
- (bool)processParticipantInfo;
- (void)setFrequencyMeteringEnabled:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (id)setupAudioStreamRTP:(id)arg1;
- (bool)setupParticipantStreamInfoWithAudioSettings:(id)arg1 multiwayStream:(id)arg2 idsDestination:(id)arg3;
- (bool)setupStreamConfiguration:(id)arg1 audioRules:(id)arg2;
- (bool)setupStreamsFromMediaBlobWithIDSDestination:(id)arg1;

@end
