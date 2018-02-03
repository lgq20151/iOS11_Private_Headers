/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSZeroData : NSData

+ (id)data;

- (id)_dispatchData;
- (bool)_isCompact;
- (bool)_providesConcreteBacking;
- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 deallocator:(id /* block */)arg4;
- (unsigned long long)length;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
