/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMemoryObserver : NSObject {
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
    SEL  _selector;
    /* Warning: unhandled struct encoding: '{_geo_weak_ptr<id>="_p"@}' */ struct _geo_weak_ptr<id> { 
        id _p; 
    }  _target;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_receivedMemoryNotification;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 taskContext:(const struct TaskContext { id x1; id x2; struct unique_ptr<geo::TaskQueue, std::__1::default_delete<geo::TaskQueue> > { struct __compressed_pair<geo::TaskQueue *, std::__1::default_delete<geo::TaskQueue> > { struct TaskQueue {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<geo::TaskQueue, std::__1::default_delete<geo::TaskQueue> > { struct __compressed_pair<geo::TaskQueue *, std::__1::default_delete<geo::TaskQueue> > { struct TaskQueue {} *x_1_2_1; } x_4_1_1; } x4; }*)arg3;
- (void)triggerMemoryNotification:(bool)arg1;

@end