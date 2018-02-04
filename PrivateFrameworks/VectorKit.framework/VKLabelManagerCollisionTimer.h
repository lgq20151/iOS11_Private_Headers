/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelManagerCollisionTimer : NSObject {
    bool  _isTimerStarted;
    struct LabelManager { int (**x1)(); struct weak_ptr<md::LabelManager> { struct LabelManager {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<VKSharedResources *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; } * _manager;
    VKTimer * _timer;
}

- (void)_timerFired:(id)arg1;
- (void)cancelTimer;
- (void)dealloc;
- (id)initWithManager:(struct LabelManager { int (**x1)(); struct weak_ptr<md::LabelManager> { struct LabelManager {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<VKSharedResources *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1;
- (void)killTimer;
- (void)startTimer;

@end