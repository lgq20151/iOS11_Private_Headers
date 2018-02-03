/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSFileWatcherFileHandleInfo : NSObject {
    bool  closed;
    int  fileHandle;
}

@property (readonly) bool isDirectory;

+ (id)openFileWithPath:(id)arg1;

- (void)close;
- (void)dealloc;
- (id)description;
- (bool)isDirectory;
- (bool)verifyAccessByProcessIdentifier:(int)arg1;

@end
