/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface __UICanvasLifecycleMonitor_Compatability : _UICanvasLifecycleMonitor

- (bool)_scheduleFirstCommitForScene:(id)arg1 transition:(id)arg2 firstActivation:(bool)arg3 completion:(id /* block */)arg4;
- (void)activateEventsOnly:(bool)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)deactivateEventsOnly:(bool)arg1 withContext:(id)arg2 forceExit:(bool)arg3 completion:(id /* block */)arg4;
- (void)didResumeForEventsOnly;
- (void)didResumeUnderLock;
- (void)willSuspendForEventsOnly;
- (void)willSuspendUnderLock;

@end
