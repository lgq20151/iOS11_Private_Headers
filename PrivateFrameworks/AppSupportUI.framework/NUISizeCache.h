/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

@interface NUISizeCache : NSObject {
    struct nui_size_cache { 
        struct __tree<std::__1::__value_type<CGSize, CGSize>, std::__1::__map_value_compare<CGSize, std::__1::__value_type<CGSize, CGSize>, std::__1::less<CGSize>, true>, std::__1::allocator<std::__1::__value_type<CGSize, CGSize> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<CGSize, CGSize>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<CGSize, std::__1::__value_type<CGSize, CGSize>, std::__1::less<CGSize>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _sizeCache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (bool)getSize:(struct CGSize { double x1; double x2; }*)arg1 forItem:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3;
- (void)insertSize:(struct CGSize { double x1; double x2; })arg1 forTargetSize:(struct CGSize { double x1; double x2; })arg2;
- (void)invalidateCache;

@end
