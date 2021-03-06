/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICanvasLifecycleMonitor : NSObject {
    _UICanvas<_UICanvasUILifecycleStateMonitoring> * _canvas;
}

@property (nonatomic) _UICanvas<_UICanvasUILifecycleStateMonitoring> *canvas;

+ (id)compatabilityLifecycleMonitorForCanvas:(id)arg1;
+ (id)lifecycleMonitorForCanvas:(id)arg1;

- (void).cxx_destruct;
- (void)activateEventsOnly:(bool)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (id)canvas;
- (void)deactivateEventsOnly:(bool)arg1 withContext:(id)arg2 forceExit:(bool)arg3 completion:(id /* block */)arg4;
- (void)didResumeForEventsOnly;
- (void)didResumeUnderLock;
- (id)initWithCanvas:(id)arg1;
- (void)setCanvas:(id)arg1;
- (void)willSuspendForEventsOnly;
- (void)willSuspendUnderLock;

@end
