/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLVertexAttributeInternal : MTLVertexAttribute {
    unsigned long long  _attributeIndex;
    unsigned long long  _attributeType;
    unsigned char  _flags;
    NSString * _name;
}

- (unsigned long long)attributeIndex;
- (unsigned long long)attributeType;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 attributeIndex:(unsigned long long)arg2 attributeType:(unsigned long long)arg3 flags:(struct MTLAttributeFlags { union { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 5; } x_1_1_1; unsigned char x_1_1_2; } x1; })arg4;
- (bool)isActive;
- (bool)isPatchControlPointData;
- (bool)isPatchData;
- (id)name;
- (void)setAttributeType:(unsigned long long)arg1;

@end
