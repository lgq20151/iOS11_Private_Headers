/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageTimeMachine : NSObject {
    int  _capacity;
    struct opaqueCMSampleBuffer {} ** _frames;
    bool  _suspended;
    struct OpaqueFigSimpleMutex { } * _timeMachineMutex;
}

@property (nonatomic, readonly) int capacity;

+ (bool)afComplete:(struct opaqueCMSampleBuffer { }*)arg1;
+ (void)initialize;

- (void)_drain;
- (int)capacity;
- (struct opaqueCMSampleBuffer { }*)copyBestFrame;
- (void)dealloc;
- (void)drain;
- (id)initWithCapacity:(int)arg1;
- (int)insertFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)resume;
- (void)suspendAndDrain;

@end
