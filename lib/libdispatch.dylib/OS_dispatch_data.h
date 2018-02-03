/* made by EzioChiu
   Image: /usr/lib/system/libdispatch.dylib
 */

@interface OS_dispatch_data : _NSDispatchData <OS_dispatch_data>

@property (nonatomic, readonly) const void*bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long length;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)_activate;
- (bool)_bytesAreVM;
- (void*)_getContext;
- (bool)_isCompact;
- (void)_resume;
- (void)_setContext:(void*)arg1;
- (void)_setFinalizer:(int (*)arg1;
- (void)_setTargetQueue:(id)arg1;
- (void)_suspend;
- (const void*)bytes;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 freeWhenDone:(bool)arg4 bytesAreVM:(bool)arg5;
- (unsigned long long)length;

@end
