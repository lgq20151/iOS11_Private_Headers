/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface AVEditSerializedOutput : NSObject

+ (void)initialize;
+ (id)sharedSerialOutput;

- (void)exportSerializedToURL:(id)arg1 withComposition:(id)arg2 andVideoComposition:(id)arg3 andAudioMix:(id)arg4;
- (id)serializeAudioMix:(id)arg1;
- (id)serializeComposition:(id)arg1 containingAssetURLs:(id)arg2;
- (id)serializeVideoComposition:(id)arg1;

@end
