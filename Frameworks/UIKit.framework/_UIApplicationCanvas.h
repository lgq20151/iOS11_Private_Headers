/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIApplicationCanvas : _UICanvas <_UICanvasLifecycleStateTransitioning, _UICanvasUILifecycleStateMonitoring> {
    _UICanvasLifecycleMonitor * _lifecycleMonitor;
    bool  _respondingToLifecycleEvent;
    bool  _suspendedEventsOnly;
    bool  _suspendedUnderLock;
    bool  runningInTaskSwitcher;
}

@property (getter=_isActive, setter=_setIsActive:, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_hasLifecycle, nonatomic, readonly) bool hasLifecycle;
@property (readonly) unsigned long long hash;
@property (getter=_isRespondingToLifecycleEvent, setter=_setIsRespondingToLifecycleEvent:, nonatomic) bool respondingToLifecycleEvent;
@property (getter=_runningInTaskSwitcher, setter=_setRunningInTaskSwitcher:, nonatomic) bool runningInTaskSwitcher;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) UIStatusBarWindow *statusBarWindow;
@property (readonly) Class superclass;
@property (getter=_suspendedEventsOnly, setter=_setSuspendedEventsOnly:, nonatomic) bool suspendedEventsOnly;
@property (getter=_suspendedUnderLock, setter=_setSuspendedUnderLock:, nonatomic) bool suspendedUnderLock;

+ (id)_settingsDiffActions;
+ (id)canvases;
+ (id)mostActiveCanvas;

- (void).cxx_destruct;
- (bool)_hasLifecycle;
- (bool)_isMainSceneCanvas;
- (bool)_isRespondingToLifecycleEvent;
- (bool)_runningInTaskSwitcher;
- (void)_setIsRespondingToLifecycleEvent:(bool)arg1;
- (void)_setOverscanCompensation:(long long)arg1;
- (void)_setRunningInTaskSwitcher:(bool)arg1;
- (void)_setSuspendedEventsOnly:(bool)arg1;
- (void)_setSuspendedUnderLock:(bool)arg1;
- (bool)_suspendedEventsOnly;
- (bool)_suspendedUnderLock;
- (void)_transitionLifecycleStateWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_willAttach;
- (void)_willResignActive;
- (void)forceDeactivateWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithScene:(id)arg1;
- (long long)state;
- (id)statusBarWindow;

@end
