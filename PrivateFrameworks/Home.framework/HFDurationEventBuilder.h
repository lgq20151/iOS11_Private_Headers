/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFDurationEventBuilder : HFEventBuilder {
    double  _duration;
}

@property (nonatomic) double duration;

- (id)buildNewEventFromCurrentState;
- (id)description;
- (double)duration;
- (id)initWithEvent:(id)arg1;
- (void)setDuration:(double)arg1;

@end