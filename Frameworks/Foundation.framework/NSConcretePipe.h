/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcretePipe : NSPipe {
    NSFileHandle * _readHandle;
    NSFileHandle * _writeHandle;
}

- (void)_closeOnDealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)fileHandleForReading;
- (id)fileHandleForWriting;
- (id)init;

@end
