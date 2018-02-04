/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTXPCServiceClient : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _vtxConnection;
}

- (void).cxx_destruct;
- (id)_service;
- (void)clearVoiceTriggerCount;
- (void)dealloc;
- (void)enableVoiceTrigger:(bool)arg1 withAssertion:(id)arg2;
- (id)getFirstChanceAudioBuffer;
- (id)getFirstChanceTriggeredDate;
- (id)getFirstChanceVTEventInfo;
- (unsigned char)getLastTriggerType;
- (long long)getVoiceTriggerCount;
- (id)init;
- (long long)isLastTriggerFollowedBySpeech;
- (void)notifySecondChanceRequest;
- (void)notifyTriggerEventRequest;
- (void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1;
- (void)requestAudioCapture:(double)arg1;
- (id)requestCurrentVoiceTriggerAssetDictionary;
- (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)arg1;
- (void)resetAssertions;
- (void)setPhraseSpotterBypassing:(bool)arg1 timeout:(double)arg2;

@end