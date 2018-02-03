/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLFunctionConstantInternal : MTLFunctionConstant {
    unsigned long long  _index;
    NSString * _name;
    bool  _required;
    unsigned long long  _type;
}

- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)index;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 required:(bool)arg4;
- (id)name;
- (bool)required;
- (unsigned long long)type;

@end
