/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIndexedConstantValue : NSObject {
    char * _data;
    unsigned long long  _dataType;
    unsigned long long  _index;
}

@property (readonly) void*data;
@property (readonly) unsigned long long dataType;
@property (readonly) unsigned long long index;

- (void*)data;
- (unsigned long long)dataType;
- (void)dealloc;
- (id)describe;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)index;
- (id)initWithValue:(const void*)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3;

@end
