/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOnceTimebaseObserver : AVTimebaseObserver {
    id /* block */  _block;
    bool  _didFire;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _fireTime;
}

@property (nonatomic, readonly) bool didFire;

- (void)_effectiveRateChanged;
- (void)_fireBlock;
- (void)_handleTimeDiscontinuity;
- (void)_resetNextFireTime;
- (void)dealloc;
- (bool)didFire;
- (id)initWithTimebase:(struct OpaqueCMTimebase { }*)arg1 fireTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (void)invalidate;

@end
