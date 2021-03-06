/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVDatabaseLockArbiter : NSObject {
    long long  _databaseLockCount;
    const void * _databaseRef;
}

@property (nonatomic, readonly) const void*databaseRef;

- (const void*)databaseRef;
- (void)dealloc;
- (bool)lockForClient:(id)arg1;
- (void)unlockForClient:(id)arg1;

@end
