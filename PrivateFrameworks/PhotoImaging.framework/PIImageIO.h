/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIImageIO : NSObject

+ (bool)writeCGImage:(struct CGImage { }*)arg1 fileURL:(id)arg2 fileType:(id)arg3;
+ (bool)writeCGImage:(struct CGImage { }*)arg1 fileURL:(id)arg2 fileType:(id)arg3 options:(id)arg4;
+ (bool)writeImage:(id)arg1 fileURL:(id)arg2 fileType:(id)arg3;
+ (id)writeImage:(id)arg1 toTemporaryDirectoryWithBasename:(id)arg2;

@end
