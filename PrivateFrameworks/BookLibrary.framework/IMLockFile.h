/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

@interface IMLockFile : NSObject {
    int  _fd;
    bool  _locked;
    NSString * _path;
}

@property (nonatomic, readonly) bool locked;
@property (nonatomic, readonly) NSString *path;

+ (id)iTunesSyncLockFile;
+ (id)iTunesSyncLockFilePath;

- (void).cxx_destruct;
- (bool)_lock:(bool)arg1 blocking:(bool)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (bool)lock:(bool)arg1;
- (bool)locked;
- (id)path;
- (bool)tryLock:(bool)arg1;
- (void)unlock;

@end
