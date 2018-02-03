/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLFunctionConstantValuesInternal : MTLFunctionConstantValues <MTLFunctionConstantSPI> {
    struct MTLConstantStorage { struct map<std::__1::basic_string<char>, MTLConstantStorage::ConstantData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MTLConstantStorage::ConstantData> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, MTLConstantStorage::ConstantData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, MTLConstantStorage::ConstantData>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, MTLConstantStorage::ConstantData> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, MTLConstantStorage::ConstantData>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, MTLConstantStorage::ConstantData>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; } * _constantStorage;
}

- (const void*)constantValueWithFunctionConstant:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)newIndexedConstantArray;
- (id)newNamedConstantArray;
- (void)reset;
- (void*)serializedConstantDataForFunction:(id)arg1 dataSize:(unsigned long long*)arg2 errorMessage:(id*)arg3;
- (void)setConstantValue:(const void*)arg1 type:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setConstantValue:(const void*)arg1 type:(unsigned long long)arg2 withName:(id)arg3;
- (void)setConstantValues:(const void*)arg1 type:(unsigned long long)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end