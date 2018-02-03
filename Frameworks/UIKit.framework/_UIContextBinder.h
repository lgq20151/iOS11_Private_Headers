/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIContextBinder : NSObject <_UIAnimationFenceCoordinating> {
    NSMutableArray * __preCommitHandlers;
    id /* block */  __realPostCommitHandler;
    id /* block */  __realPreCommitHandler;
    bool  __registeredPreCommitHandler;
    NSPointerArray * _attachedBindables;
    long long  _contextManagementPolicy;
    NSMutableOrderedSet * _contexts;
    NSPointerArray * _enrolledBindables;
    <_UICanvasLifecycleStateMonitoring> * _lifecycleMonitor;
    <_UIContextBinding> * _substrate;
}

@property (nonatomic, readonly) NSArray *attachedBindables;
@property (nonatomic) long long contextManagementPolicy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *enrolledBindables;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <_UICanvasLifecycleStateMonitoring> *lifecycleMonitor;
@property (nonatomic, readonly) <_UIContextBinding> *substrate;
@property (readonly) Class superclass;

+ (id)createContextForBindable:(id)arg1 withSubstrate:(id)arg2;

- (void).cxx_destruct;
- (id)_attachedBindablePointersAsCopy:(bool)arg1;
- (id)_contextForBindable:(id)arg1;
- (id)_enrolledBindablePointersAsCopy:(bool)arg1;
- (void)_synchronizeDrawing;
- (unsigned int)_synchronizeDrawingAcrossProcesses;
- (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1;
- (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1 withPreCommitHandler:(id /* block */)arg2;
- (void)_synchronizeDrawingWithFence:(id)arg1;
- (void)_synchronizeDrawingWithFence:(id)arg1 preCommitHandler:(id /* block */)arg2;
- (void)_synchronizeDrawingWithPreCommitHandler:(id /* block */)arg1;
- (id)_synchronizedDrawingFence;
- (void)attachBindable:(id)arg1;
- (id)attachedBindables;
- (bool)bindableIsTopmostAttached:(id)arg1;
- (bool)bindbleEnrolled:(id)arg1;
- (long long)contextManagementPolicy;
- (void)createContextsWithTest:(id /* block */)arg1 creationAction:(id /* block */)arg2;
- (void)detachBindable:(id)arg1;
- (void)enrollBindable:(id)arg1;
- (id)enrolledBindables;
- (void)expellBindable:(id)arg1;
- (id)initWithSubstrate:(id)arg1 stateMonitor:(id)arg2;
- (id)lifecycleMonitor;
- (bool)permitContextCreationForBindable:(id)arg1;
- (void)purgeContextsWithPurgeAction:(id /* block */)arg1;
- (void)recreateContextForBindable:(id)arg1;
- (void)setContextManagementPolicy:(long long)arg1;
- (id)substrate;
- (void)updateBindable:(id)arg1;
- (void)updateBindableOrderWithTest:(id /* block */)arg1;
- (void)updateBindableOrderWithTest:(id /* block */)arg1 force:(bool)arg2;

@end
