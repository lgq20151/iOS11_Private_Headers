/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTGestureMonitor : NSObject {
    <VTGestureMonitorDelegate> * _delegate;
}

@property (nonatomic) <VTGestureMonitorDelegate> *delegate;

+ (id)defaultGestureMonitor;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)startObserving;

@end
