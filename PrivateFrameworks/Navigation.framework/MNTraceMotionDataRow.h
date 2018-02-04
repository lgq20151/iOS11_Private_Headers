/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceMotionDataRow : NSObject <MNTracePlayerTimelineStreamObjectType> {
    unsigned long long  _confidence;
    unsigned long long  _exitType;
    unsigned long long  _motionType;
    double  _timestamp;
}

@property (nonatomic) unsigned long long confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long exitType;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long motionType;
@property (nonatomic, readonly) double position;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (unsigned long long)confidence;
- (unsigned long long)exitType;
- (unsigned long long)motionType;
- (double)position;
- (void)setConfidence:(unsigned long long)arg1;
- (void)setExitType:(unsigned long long)arg1;
- (void)setMotionType:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end