/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerLooper : NSObject {
    AVPlayerLooperInternal * _looper;
}

@property (readonly) NSError *error;
@property (readonly) long long loopCount;
@property (nonatomic, readonly) NSArray *loopingPlayerItems;
@property (readonly) long long status;

+ (void)initialize;
+ (id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2;
+ (id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;

- (int)_calculateNumberOfCopiesNeeded;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (void)_cleanupAfterPlayingLastLoopingCopy;
- (void)_configureLoopingItem:(id)arg1;
- (bool)_isWaitingForLastCopyToFinishSet;
- (bool)_setupLoopingReturningError:(id*)arg1;
- (void)_turnOffLooping;
- (void)dealloc;
- (void)disableLooping;
- (id)error;
- (id)init;
- (id)initWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (long long)loopCount;
- (id)loopingPlayerItems;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)status;

@end
