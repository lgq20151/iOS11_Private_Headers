/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLLibrary : NSObject <MTLLibrarySPI> {
    /* Warning: unhandled struct encoding: '{MTLLibraryContainer=i{?=[32C]}^{MTLLibraryData}@@@@@}' */ struct MTLLibraryContainer { int x1; struct { unsigned char x_2_1_1[32]; } x2; struct MTLLibraryData {} *x3; id x4; id x5; id x6; } * _cacheEntry;
    <MTLDevice> * _device;
    NSArray * _externFunctionNames;
    NSMutableDictionary * _functionDictionary;
    NSArray * _functionNames;
    NSString * _label;
    struct MTLLibraryData { int (**x1)(); int x2; id x3; } * _libraryData;
    struct MTLPipelineCollection { struct unordered_map<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *, std::__1::hash<_MTLLibrary *>, std::__1::equal_to<_MTLLibrary *>, std::__1::allocator<std::__1::pair<_MTLLibrary *const, MTLPipelineLibrarySerializer::LibraryDescriptor *> > > { struct __hash_table<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, std::__1::__unordered_map_hasher<_MTLLibrary *, std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, std::__1::hash<_MTLLibrary *>, true>, std::__1::__unordered_map_equal<_MTLLibrary *, std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, std::__1::equal_to<_MTLLibrary *>, true>, std::__1::allocator<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; } * _pipelineCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly, retain) NSArray *externFunctionNames;
@property (nonatomic, readonly, retain) NSMutableDictionary *functionDictionary;
@property (readonly, retain) NSArray *functionNames;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) struct MTLLibraryData { int (**x1)(); int x2; id x3; }*libraryData;
@property (copy) NSString *overrideTriple;
@property /* Warning: unhandled struct encoding: '{MTLPipelineCollection={unordered_map<_MTLLibrary *' */ struct *pipelineCollection; /* unknown property attribute:  std::__1::allocator<MTLRenderPipelineDescriptor *> >=^@}}@} */
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)device;
- (id)externFunctionNames;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)functionDictionary;
- (id)functionNames;
- (id)initWithLibraryContainer:(/* Warning: unhandled struct encoding: '{MTLLibraryContainer=i{?=[32C]}^{MTLLibraryData}@@@@@}' */ struct MTLLibraryContainer { int x1; struct { unsigned char x_2_1_1[32]; } x2; struct MTLLibraryData {} *x3; id x4; id x5; id x6; }*)arg1 device:(id)arg2;
- (id)label;
- (struct MTLLibraryData { int (**x1)(); int x2; id x3; }*)libraryData;
- (id)newExternFunctionWithName:(id)arg1;
- (id)newFunctionWithName:(id)arg1;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 error:(id*)arg4;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4;
- (id)newFunctionWithNameInternal:(id)arg1;
- (id)overrideTriple;
- (struct MTLPipelineCollection { struct unordered_map<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *, std::__1::hash<_MTLLibrary *>, std::__1::equal_to<_MTLLibrary *>, std::__1::allocator<std::__1::pair<_MTLLibrary *const, MTLPipelineLibrarySerializer::LibraryDescriptor *> > > { struct __hash_table<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, std::__1::__unordered_map_hasher<_MTLLibrary *, std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, std::__1::hash<_MTLLibrary *>, true>, std::__1::__unordered_map_equal<_MTLLibrary *, std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, std::__1::equal_to<_MTLLibrary *>, true>, std::__1::allocator<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; }*)pipelineCollection;
- (void)setLabel:(id)arg1;
- (void)setOverrideTriple:(id)arg1;
- (void)setPipelineCollection:(struct MTLPipelineCollection { struct unordered_map<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *, std::__1::hash<_MTLLibrary *>, std::__1::equal_to<_MTLLibrary *>, std::__1::allocator<std::__1::pair<_MTLLibrary *const, MTLPipelineLibrarySerializer::LibraryDescriptor *> > > { struct __hash_table<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, std::__1::__unordered_map_hasher<_MTLLibrary *, std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, std::__1::hash<_MTLLibrary *>, true>, std::__1::__unordered_map_equal<_MTLLibrary *, std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, std::__1::equal_to<_MTLLibrary *>, true>, std::__1::allocator<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_MTLLibrary *, MTLPipelineLibrarySerializer::LibraryDescriptor *>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; }*)arg1;

@end
