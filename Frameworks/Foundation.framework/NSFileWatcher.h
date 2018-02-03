/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileWatcher : NSObject {
    NSObject<OS_dispatch_source> * _eventSource;
    struct __FSEventStream { } * _eventStream;
    bool  _eventsAreAboutDirectory;
    NSURL * _fileReferenceURL;
    NSString * _formerPath;
    NSURL * _formerURL;
    bool  _isUnsettled;
    bool  _isWatching;
    NSFileWatcherObservations * _itemObservations;
    unsigned long long  _lastObservedEventID;
    id /* block */  _observer;
    int  _pid;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _subitemObservationsByEventPath;
    NSURL * _url;
}

- (void)_coalesceSubitemObservations;
- (void)dealloc;
- (void)handleFSEventPath:(id)arg1 flags:(unsigned int)arg2 id:(unsigned long long)arg3;
- (id)initWithQueue:(id)arg1 forProcessIdentifier:(int)arg2;
- (void)setLastObservedEventID:(unsigned long long)arg1;
- (void)setObserver:(id /* block */)arg1;
- (void)setURL:(id)arg1;
- (void)settle;
- (void)start;
- (void)stop;
- (void)unsettle;
- (void)watchItem;

@end
