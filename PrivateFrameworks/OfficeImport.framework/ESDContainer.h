/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ESDContainer : ESDObject {
    NSMutableArray * mChildren;
}

+ (void)pbReadChildrenOfObject:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1 toArray:(id)arg2 state:(id)arg3;
+ (void)readChildrenOfObject:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1 reader:(struct OcReader { }*)arg2 toArray:(id)arg3;

- (struct EshObject { int (**x1)(); unsigned short x2; }*)addAtomChildOfType:(unsigned short)arg1;
- (void)addCStringWithChar2String:(const unsigned short*)arg1 instance:(int)arg2;
- (void)addCStringWithNSString:(id)arg1 instance:(int)arg2;
- (void)addChild:(id)arg1;
- (id)addChildOfType:(unsigned short)arg1;
- (id)addContainerChildOfType:(unsigned short)arg1;
- (id)addEshChild:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1;
- (struct EshObject { int (**x1)(); unsigned short x2; }*)addPptAtomChildOfType:(unsigned short)arg1;
- (id)addPptContainerChildOfType:(unsigned short)arg1;
- (id)addPptEshClientChildOfType:(unsigned short)arg1;
- (id)childAt:(unsigned long long)arg1;
- (unsigned long long)childCount;
- (id)childOfType:(unsigned short)arg1 instance:(short)arg2;
- (id)containerChildAt:(unsigned long long)arg1;
- (id)containerChildOfType:(unsigned short)arg1 instance:(short)arg2 mustExist:(bool)arg3;
- (id)containerFromObject:(id)arg1 mustExist:(bool)arg2;
- (void)dealloc;
- (id)ebInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;
- (struct EshContainer { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; struct ChVector<EshHeader *> { struct EshHeader {} **x_4_1_1; struct EshHeader {} **x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; } x4; }*)eshContainer;
- (struct EshGroup { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<unsigned int, EshOpt::Value, CsLess<unsigned int> > { struct map<unsigned int, EshOpt::Value, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, EshOpt::Value> > > { struct __tree<std::__1::__value_type<unsigned int, EshOpt::Value>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, EshOpt::Value> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_5_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, EshOpt::Value>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_7_1; } x_2_6_1; } x_1_5_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true> > { unsigned long long x_3_6_1; } x_1_5_3; } x_1_4_1; } x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; }*)eshGroup;
- (id)firstChildOfType:(unsigned short)arg1;
- (id)firstChildOfType:(unsigned short)arg1 afterChild:(id)arg2;
- (id)firstChildOfType:(unsigned short)arg1 afterIndex:(unsigned long long)arg2;
- (id)firstContainerChildOfType:(unsigned short)arg1 mustExist:(bool)arg2;
- (unsigned long long)indexOfFirstChildOfType:(unsigned short)arg1 afterIndex:(unsigned long long)arg2;
- (id)initFromReader:(struct OcReader { }*)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3;
- (id)initWithEshObject:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1;
- (void)insertChild:(id)arg1 at:(unsigned long long)arg2;
- (id)insertEshChild:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1 at:(unsigned long long)arg2;
- (id)pbInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;
- (void)removeChild:(id)arg1;
- (id)shapeContainer;
- (void)writeToWriter:(struct OcWriter { }*)arg1;

@end