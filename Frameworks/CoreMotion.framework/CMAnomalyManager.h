/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAnomalyManager : NSObject {
    <CMAnomalyDelegate> * _delegate;
}

@property (nonatomic) <CMAnomalyDelegate> *delegate;

+ (bool)isAnomalyDetectionAvailable;

- (void)ackAnomalyEvent:(id)arg1 withResolution:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)startAnomalyDetection;
- (void)stopAnomalyDetection;

@end
