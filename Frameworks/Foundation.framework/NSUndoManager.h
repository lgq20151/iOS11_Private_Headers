/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUndoManager : NSObject {
    unsigned long long  _NSUndoManagerPrivate1;
    void * _NSUndoManagerPrivate2;
    void * _NSUndoManagerPrivate3;
    id  _proxy;
    id  _redoStack;
    NSArray * _runLoopModes;
    id  _target;
    id  _undoStack;
}

@property (readonly) bool canRedo;
@property (readonly) bool canUndo;
@property (readonly) long long groupingLevel;
@property bool groupsByEvent;
@property unsigned long long levelsOfUndo;
@property (readonly) bool redoActionIsDiscardable;
@property (readonly, copy) NSString *redoActionName;
@property (readonly, copy) NSString *redoMenuItemTitle;
@property (getter=isRedoing, readonly) bool redoing;
@property (copy) NSArray *runLoopModes;
@property (readonly) bool undoActionIsDiscardable;
@property (readonly, copy) NSString *undoActionName;
@property (readonly, copy) NSString *undoMenuItemTitle;
@property (getter=isUndoRegistrationEnabled, readonly) bool undoRegistrationEnabled;
@property (getter=isUndoing, readonly) bool undoing;

+ (void)_endTopLevelGroupings;
+ (void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(bool)arg1;

- (void)_cancelAutomaticTopLevelGroupEnding;
- (void)_commitUndoGrouping;
- (void)_delayAutomaticTermination:(double)arg1;
- (bool)_endUndoGroupRemovingIfEmpty:(bool)arg1;
- (void)_forwardTargetInvocation:(id)arg1;
- (id)_methodSignatureForTargetSelector:(SEL)arg1;
- (void)_postCheckpointNotification;
- (void)_prepareEventGrouping;
- (void)_processEndOfEventNotification:(id)arg1;
- (void)_registerUndoObject:(id)arg1;
- (void)_rollbackUndoGrouping;
- (void)_scheduleAutomaticTopLevelGroupEnding;
- (void)_setGroupIdentifier:(id)arg1;
- (bool)_shouldCoalesceTypingForText:(id)arg1 :(id)arg2;
- (id)_undoStack;
- (void)beginUndoGrouping;
- (bool)canRedo;
- (bool)canUndo;
- (void)dealloc;
- (void)disableUndoRegistration;
- (void)enableUndoRegistration;
- (void)endUndoGrouping;
- (long long)groupingLevel;
- (bool)groupsByEvent;
- (id)init;
- (bool)isRedoing;
- (bool)isUndoRegistrationEnabled;
- (bool)isUndoing;
- (unsigned long long)levelsOfUndo;
- (id)prepareWithInvocationTarget:(id)arg1;
- (void)redo;
- (bool)redoActionIsDiscardable;
- (id)redoActionName;
- (id)redoMenuItemTitle;
- (id)redoMenuTitleForUndoActionName:(id)arg1;
- (void)registerUndoWithTarget:(id)arg1 handler:(id /* block */)arg2;
- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)removeAllActions;
- (void)removeAllActionsWithTarget:(id)arg1;
- (id)runLoopModes;
- (void)setActionIsDiscardable:(bool)arg1;
- (void)setActionName:(id)arg1;
- (void)setGroupsByEvent:(bool)arg1;
- (void)setLevelsOfUndo:(unsigned long long)arg1;
- (void)setRunLoopModes:(id)arg1;
- (void)undo;
- (bool)undoActionIsDiscardable;
- (id)undoActionName;
- (id)undoMenuItemTitle;
- (id)undoMenuTitleForUndoActionName:(id)arg1;
- (void)undoNestedGroup;

@end
