/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISLivePhotoSettleBehavior : ISBehavior

@property (nonatomic) <ISLivePhotoSettleBehaviorDelegate> *delegate;

- (void)_didFinish;
- (long long)behaviorType;
- (void)settle:(bool)arg1;

@end
