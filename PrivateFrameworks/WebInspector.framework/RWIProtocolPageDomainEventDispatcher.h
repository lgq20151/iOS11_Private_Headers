/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolPageDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { int (**x1)(); } * _controller;
}

- (void)domContentEventFiredWithTimestamp:(double)arg1;
- (void)frameClearedScheduledNavigationWithFrameId:(id)arg1;
- (void)frameDetachedWithFrameId:(id)arg1;
- (void)frameNavigatedWithFrame:(id)arg1;
- (void)frameScheduledNavigationWithFrameId:(id)arg1 delay:(double)arg2;
- (void)frameStartedLoadingWithFrameId:(id)arg1;
- (void)frameStoppedLoadingWithFrameId:(id)arg1;
- (id)initWithController:(struct AugmentableInspectorController { int (**x1)(); }*)arg1;
- (void)loadEventFiredWithTimestamp:(double)arg1;

@end