/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLConnectionManager : NSObject {
    id /* block */  _filter;
    NSSQLCore * _sqlCore;
}

@property (nonatomic, copy) id /* block */ filter;

- (void)dealloc;
- (void)disconnectAllConnections;
- (id /* block */)filter;
- (bool)handleStoreRequest:(id)arg1;
- (id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3;
- (id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2;
- (id)initializationConnection;
- (void)scheduleBarrierBlock:(id /* block */)arg1;
- (void)scheduleConnectionsBarrier:(id /* block */)arg1;
- (void)setExclusiveLockingMode:(bool)arg1;
- (void)setFilter:(id /* block */)arg1;
- (id)sqlCore;
- (bool)willHandleStoreRequest:(id)arg1;

@end
