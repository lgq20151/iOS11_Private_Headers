/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPWeakTimer : NSObject {
    NSObject<OS_dispatch_source> * _timerSource;
}

+ (id)timerWithInterval:(double)arg1 block:(id /* block */)arg2;
+ (id)timerWithInterval:(double)arg1 queue:(id)arg2 block:(id /* block */)arg3;
+ (id)timerWithInterval:(double)arg1 repeats:(bool)arg2 block:(id /* block */)arg3;
+ (id)timerWithInterval:(double)arg1 repeats:(bool)arg2 queue:(id)arg3 block:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (id)initWithInterval:(double)arg1 repeats:(bool)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (void)invalidate;

@end