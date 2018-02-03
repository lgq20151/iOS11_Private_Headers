/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
    void * _priv;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)lock;
- (void)lockForReading;
- (bool)lockForReadingBeforeDate:(id)arg1;
- (void)lockForWriting;
- (bool)lockForWritingBeforeDate:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (bool)tryLockForReading;
- (bool)tryLockForWriting;
- (void)unlock;

@end
