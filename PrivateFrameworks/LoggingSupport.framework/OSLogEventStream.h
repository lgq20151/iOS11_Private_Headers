/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSLogEventStream : NSObject {
    NSPredicate * _filterPredicate;
    unsigned long long  _flags;
    _OSLogIndex * _index;
    unsigned int  _invalidated;
    id /* block */  _invalidationHandler;
    NSObject<OS_dispatch_queue> * _queue;
    OSLogEventSource * _source;
    id /* block */  _streamHandler;
    NSObject<OS_dispatch_queue> * _target;
    struct _os_timesync_db_s { } * _tsdb;
}

@property (nonatomic, copy) NSPredicate *filterPredicate;
@property (nonatomic) unsigned long long flags;
@property (nonatomic, retain) _OSLogIndex *index;
@property (nonatomic) unsigned int invalidated;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) OSLogEventSource *source;
@property (nonatomic, copy) id /* block */ streamHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *target;
@property (nonatomic) struct _os_timesync_db_s { }*tsdb;

- (void).cxx_destruct;
- (void)_activateStreamInRange:(struct os_timesync_range_s { struct os_trace_uuid_map_s {} *x1; unsigned long long x2; unsigned long long x3; unsigned char x4[0][16]; }*)arg1;
- (void)activateStreamFromDate:(id)arg1;
- (void)activateStreamFromLastBoot;
- (void)activateStreamFromPosition:(id)arg1;
- (void)dealloc;
- (id)filterPredicate;
- (unsigned long long)flags;
- (id)index;
- (id)initWithSource:(id)arg1;
- (void)invalidate;
- (unsigned int)invalidated;
- (id /* block */)invalidationHandler;
- (id)queue;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setIndex:(id)arg1;
- (void)setInvalidated:(unsigned int)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setStreamHandler:(id /* block */)arg1;
- (void)setTarget:(id)arg1;
- (void)setTsdb:(struct _os_timesync_db_s { }*)arg1;
- (id)source;
- (id /* block */)streamHandler;
- (id)target;
- (struct _os_timesync_db_s { }*)tsdb;

@end
