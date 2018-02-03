/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBTouchOrderedTaskList : NSObject {
    NSValue * _currentTouchPoint;
    bool  _ignoredOnBegin;
    double  _originalStartTime;
    unsigned long long  _pathIndex;
    NSMutableArray * _touchStateTasks;
    NSObject<OS_dispatch_queue> * _touchStateTasksQueue;
    NSUUID * _touchUUID;
}

@property (nonatomic, readonly, retain) NSValue *currentTouchPoint;
@property (nonatomic, readonly) bool hasTasks;
@property (nonatomic) bool ignoredOnBegin;
@property (nonatomic, readonly) double originalStartTime;
@property (nonatomic, readonly) unsigned long long pathIndex;
@property (nonatomic, readonly, retain) NSUUID *touchUUID;

+ (id)taskListForTouchUUID:(id)arg1 withPathIndex:(unsigned long long)arg2;

- (void)addTask:(id)arg1;
- (id)currentTouchPoint;
- (void)dealloc;
- (bool)executeTasksInView:(id)arg1 withBlock:(id /* block */)arg2;
- (id)firstTouchStateForUITouchPhase:(long long)arg1;
- (bool)hasTasks;
- (bool)ignoredOnBegin;
- (id)initWithTouchUUID:(id)arg1 withPathIndex:(unsigned long long)arg2;
- (bool)isExecutingFirstTask;
- (double)originalStartTime;
- (unsigned long long)pathIndex;
- (void)removeTasksMatchingFilter:(id /* block */)arg1;
- (void)setIgnoredOnBegin:(bool)arg1;
- (id)touchUUID;

@end
