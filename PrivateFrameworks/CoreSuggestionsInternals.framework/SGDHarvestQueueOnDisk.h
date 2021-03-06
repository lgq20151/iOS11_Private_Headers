/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDHarvestQueueOnDisk : SGDHarvestQueue {
    NSObject<OS_dispatch_queue> * _backingQueue;
    unsigned long long  _count;
    SGSqliteDatabase * _db;
    NSString * _dirPath;
    long long  _idCounter;
    id  _lockStateChangeToken;
    unsigned long long  _maxQueueItems;
    NSObject<OS_dispatch_queue> * _queue;
    SGDHarvestQueueFileReader * _reader;
    SGDHarvestQueueFileWriter * _writerHighPriority;
    SGDHarvestQueueFileWriter * _writerLowPriority;
}

@property (nonatomic) unsigned long long maxQueueItems;

- (void).cxx_destruct;
- (void)_garbageCollectFilesAsync;
- (id)_getDb;
- (void)_initIdCounter;
- (bool)_migrateDb:(id)arg1;
- (void)_openFilesForProcessingWhileLocked;
- (void)_popWithStringAfterWhereClause:(id)arg1 binder:(id /* block */)arg2 callback:(id /* block */)arg3;
- (void)_read:(struct { int x1; int x2; unsigned int x3; })arg1 fileId:(int)arg2 callback:(id /* block */)arg3;
- (id)_recreateDb;
- (void)_trimPermafailDirectory;
- (void)_unlinkFileWithIdLocked:(int)arg1;
- (void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(bool)arg3 item:(id)arg4 callback:(id /* block */)arg5;
- (void)close;
- (unsigned long long)count;
- (void)countHighPriorityItems:(unsigned long long*)arg1 lowPriorityItems:(unsigned long long*)arg2;
- (void)dealloc;
- (void)deleteWithItemId:(long long)arg1 fileId:(int)arg2;
- (id)initWithDirectory:(id)arg1;
- (void)markAsFailedWithId:(long long)arg1;
- (unsigned long long)maxQueueItems;
- (void)pop:(id /* block */)arg1;
- (void)popByItemId:(long long)arg1 callback:(id /* block */)arg2;
- (void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(id /* block */)arg3;
- (void)popHighPriority:(id /* block */)arg1;
- (void)setMaxQueueItems:(unsigned long long)arg1;
- (void)writePermafail:(id)arg1;

@end
