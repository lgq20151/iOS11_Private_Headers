/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageCaptureStreamSettings : NSObject {
    BWBracketSettings * _bracketSettings;
    int  _captureType;
    NSString * _portType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _preferredTimeMachinePTS;
    int  _timeMachineFrameCount;
    NSArray * _validBracketedCaptureSequenceNumbers;
}

@property (nonatomic, readonly) BWBracketSettings *bracketSettings;
@property (nonatomic, readonly) int captureType;
@property (nonatomic, readonly) int expectedFrameCaptureCount;
@property (nonatomic, readonly) int expectedFrameCount;
@property (nonatomic, readonly) int expectedTimeMachineFrameCaptureCount;
@property (nonatomic, readonly) NSString *portType;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } preferredTimeMachinePTS;
@property (nonatomic, readonly) int timeMachineFrameCount;
@property (nonatomic, readonly) NSArray *validBracketedCaptureSequenceNumbers;

- (id)bracketSettings;
- (int)captureType;
- (void)dealloc;
- (id)description;
- (int)expectedFrameCaptureCount;
- (int)expectedFrameCount;
- (int)expectedTimeMachineFrameCaptureCount;
- (id)initWithPortType:(id)arg1 captureType:(int)arg2 timeMachineFrameCount:(int)arg3 bracketSettings:(id)arg4 validBracketedCaptureSequenceNumbers:(id)arg5;
- (id)portType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredTimeMachinePTS;
- (void)setPreferredTimeMachinePTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)timeMachineFrameCount;
- (id)validBracketedCaptureSequenceNumbers;

@end
