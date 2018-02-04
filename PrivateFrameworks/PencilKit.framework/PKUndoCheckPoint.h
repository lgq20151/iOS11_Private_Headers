/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKUndoCheckPoint : NSObject {
    NSString * _cacheFilename;
    struct CGImage { } * _image;
    bool  _isEraseAllCheckPoint;
    NSOrderedSet * _renderedStrokes;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSString *cacheFilename;
@property (nonatomic) struct CGImage { }*image;
@property (nonatomic, readonly) bool isEraseAllCheckPoint;
@property (nonatomic, readonly) NSOrderedSet *renderedStrokes;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)cacheDirectory;
+ (unsigned long long)cacheSize;
+ (void)deleteAllCacheFiles;

- (void).cxx_destruct;
- (id)cacheFilename;
- (void)dealloc;
- (bool)ensureCacheDirectoryExists;
- (void)flushFromMemoryIfPossible;
- (struct CGImage { }*)image;
- (id)initWithImage:(struct CGImage { }*)arg1 andMask:(struct CGImage { }*)arg2 renderedStrokes:(id)arg3;
- (bool)isEraseAllCheckPoint;
- (bool)isInMemory;
- (void)reloadImage;
- (id)renderedStrokes;
- (struct CGImage { }*)retainedImage;
- (void)setImage:(struct CGImage { }*)arg1;
- (id)uuid;
- (void)writeToDiskAndFreeMemory;

@end