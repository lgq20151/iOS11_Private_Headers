/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSDB.framework/CoreSDB
 */

@interface CSDBThreadedRecordStore : NSObject {
    NSString * _identifier;
    struct CSDBRecordStore { struct __CFString {} *x1; struct CSDBSqliteDatabase {} *x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; struct __CFDictionary {} *x5; struct __CFDictionary {} *x6; struct __CFSet {} *x7; bool x8; struct { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2 : 1; } x9; int (*x10)(); struct __CFSet {} *x11; struct __CFDictionary {} *x12; void *x13; int x14; struct { int x_15_1_1; int x_15_1_2; long long *x_15_1_3; struct __CFSet {} *x_15_1_4; } x15; } * _recordStore;
    NSObject<OS_dispatch_queue> * _recordStoreQueue;
    _CSDBThreadObject * _thread;
    bool  _wantsRegister;
}

- (void)_teardownDatabaseOnQueue;
- (void)dealloc;
- (id)initWithIdentifier:(struct __CFString { }*)arg1 qosClass:(unsigned short)arg2;
- (bool)ownsCurrentThreadOtherwiseAssert:(bool)arg1;
- (void)performBlock:(id /* block */)arg1 afterDelay:(double)arg2;
- (void)performBlock:(id /* block */)arg1 waitUntilDone:(bool)arg2;
- (void)registerClass:(const struct { char *x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); unsigned char x8; void *x9; int x10; struct { /* ? */ } *x11; void *x12; char *x13; int (*x14)(); int (*x15)(); int x16; struct { /* ? */ } *x17; int x18; int (*x19)(); }*)arg1;
- (void)setupDatabaseWithAllowLocalMigration:(bool)arg1 pathBlock:(id /* block */)arg2 setupStoreHandler:(int (*)arg3 connectionInitializer:(int (*)arg4 versionChecker:(int (*)arg5 migrationHandler:(int (*)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned int)arg8 registerBlock:(id /* block */)arg9;
- (void)setupDatabaseWithAllowLocalMigration:(bool)arg1 pathBlock:(id /* block */)arg2 setupStoreHandler:(int (*)arg3 connectionInitializer:(int (*)arg4 versionChecker:(int (*)arg5 migrationHandler:(int (*)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned int)arg8 registerBlock:(id /* block */)arg9 exclusiveOwnership:(bool)arg10;
- (void)teardownDatabase;

@end