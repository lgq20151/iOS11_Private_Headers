/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOIdPlacementBaseOperation : TSKCOAbstractOperation <TSKCOIdOperation, TSKCOTransforming> {
    TSKCOIdAddress * mAddress;
    bool  mDominating;
    int  mFromIndex;
    int  mPlacementType;
    int  mToIndex;
}

@property (nonatomic, readonly) TSKCOIdAddress *address;
@property (nonatomic, readonly) int fromIndex;
@property (nonatomic, readonly) bool isDominating;
@property (nonatomic, readonly) int placementType;
@property (nonatomic, readonly) int toIndex;

- (id)address;
- (void)dealloc;
- (id)description;
- (int)fromIndex;
- (unsigned long long)hash;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(bool)arg4 noop:(bool)arg5;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg2;
- (bool)isDominating;
- (bool)isEqual:(id)arg1;
- (id)operationWithNewFromIndex:(int)arg1 toIndex:(int)arg2 dominating:(bool)arg3;
- (id)operationWithNewNoop:(bool)arg1;
- (bool)p_isFromToIndexEqual;
- (id)p_transformAdd:(id)arg1 isHigherPriority:(bool)arg2;
- (struct pair<int, int> { int x1; int x2; })p_transformBothIndexesByAdd:(int)arg1 opToIndex:(int)arg2 isHigherPriority:(bool)arg3;
- (struct pair<int, int> { int x1; int x2; })p_transformBothIndexesByRearrange:(int)arg1 opToIndex:(int)arg2 isHigherPriority:(bool)arg3;
- (struct pair<int, int> { int x1; int x2; })p_transformBothIndexesByRemove:(int)arg1 opToIndex:(int)arg2 isHigherPriority:(bool)arg3;
- (int)p_transformFromIndexByRearrange:(int)arg1 isHigherPriority:(bool)arg2;
- (int)p_transformIndexByAdd:(int)arg1 isHigherPriority:(bool)arg2 isFromIndex:(bool)arg3;
- (int)p_transformIndexByRemove:(int)arg1 isHigherPriority:(bool)arg2 isFromIndex:(bool)arg3;
- (id)p_transformPlacement:(id)arg1 isHigherPriority:(bool)arg2;
- (id)p_transformRearrange:(id)arg1 isHigherPriority:(bool)arg2;
- (id)p_transformRemove:(id)arg1 isHigherPriority:(bool)arg2;
- (int)p_transformToIndexByRearrange:(int)arg1 isHigherPriority:(bool)arg2;
- (int)placementType;
- (void)saveToArchiver:(id)arg1 message:(struct Operation { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg2;
- (int)toIndex;
- (id)transformDynamicByAnyOperation:(id)arg1 byHigherPriority:(bool)arg2;
- (id)transformIdPlacementBaseOperation:(id)arg1 isHigherPriority:(bool)arg2;
- (id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(bool)arg2;
- (id)transformStaticByAnyOperation:(id)arg1 byHigherPriority:(bool)arg2;
- (id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(bool)arg2;
- (id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(bool)arg2;
- (id)ut_transformByTransformer:(id)arg1;

@end
