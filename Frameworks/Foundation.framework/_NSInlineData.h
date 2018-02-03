/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSInlineData : NSData {
    unsigned short  _length;
}

- (id)_createDispatchData;
- (bool)_isCompact;
- (bool)_providesConcreteBacking;
- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (unsigned long long)length;

@end
