/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCRadioPlaybackIntentDataSource : NSObject <MPCPlaybackIntentDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)getPlaybackContextForIntent:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getRemotePlaybackQueueForIntent:(id)arg1 playerPath:(id)arg2 withCompletion:(id /* block */)arg3;

@end
