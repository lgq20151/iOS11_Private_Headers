/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSynchronizedData : NSObject {
    AVCaptureSynchronizedDataInternal * _synchronizedDataInternal;
}

@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;

- (id)_initWithTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })adjustedTimestamp;
- (void)dealloc;
- (bool)hasCorrespondingDepthData;
- (void)setAdjustedTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;

@end
