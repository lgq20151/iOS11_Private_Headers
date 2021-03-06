/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARSessionMetrics : NSObject {
    unsigned long long  _badFrameCount;
    Class  _configClass;
    unsigned long long  _frameCount;
    NSDate * _frameStartDate;
    bool  _initializingVIO;
    void _maxPos;
    void _minPos;
    bool  _positionInitialized;
    NSObject<OS_dispatch_queue> * _queue;
    double  _sessionTimeForLastBadFrameRecording;
    NSDate * _startDate;
}

- (void).cxx_destruct;
- (id)_baseKey;
- (void)_recordBadFramePercentageFinal:(bool)arg1;
- (void)_recordBadFramePercentageWithBucket:(id)arg1;
- (id)init;
- (void)sessionDidUpdateFrame:(id)arg1;
- (void)sessionStartedWithConfiguration:(id)arg1;
- (void)sessionStopped;

@end
