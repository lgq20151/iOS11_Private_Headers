/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface EspressoInnerProductWeightsForMPS : NSObject <MPSCNNConvolutionDataSource> {
    struct shared_ptr<Espresso::blob<float, 1> > { 
        struct blob<float, 1> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _biases_blob;
    unsigned int  _data_type;
    <MTLDevice> * _dev;
    struct inner_product_uniforms { 
        unsigned int nC; 
        unsigned int nB; 
        int has_biases; 
        int has_relu; 
        int has_tanh; 
        float tanh_alpha; 
        float tanh_beta; 
        int has_prelu; 
        int is_lookup; 
        int quantization_mode; 
        int add_to_output; 
        int use_raw_buffers; 
        int fused_activation_mode; 
        float fused_activation_alpha; 
        float fused_activation_beta; 
        unsigned int m; 
        unsigned int k; 
        unsigned int n; 
        unsigned int Abytes; 
        unsigned int Bbytes; 
        unsigned int k4; 
        unsigned int n4; 
        unsigned int n8; 
        unsigned int n8_splitk; 
        int argmax_tree_n_clusters; 
        int argmax_tree_n_clusters_keep; 
    }  _params;
    struct shared_ptr<Espresso::blob<float, 2> > { 
        struct blob<float, 2> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _weights_blob;
    struct shared_ptr<Espresso::blob<unsigned short, 2> > { 
        struct blob<unsigned short, 2> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _weights_f16_blob;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{shared_ptr<Espresso::blob<float' */ struct  biases_blob; /* unknown property attribute:  1>}^{__shared_weak_count}} */
@property unsigned int data_type;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) <MTLDevice> *dev;
@property (readonly) unsigned long long hash;
@property struct inner_product_uniforms { unsigned int x1; unsigned int x2; int x3; int x4; int x5; float x6; float x7; int x8; int x9; int x10; int x11; int x12; int x13; float x14; float x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; int x25; int x26; } params;
@property (readonly) Class superclass;
@property (nonatomic) /* Warning: unhandled struct encoding: '{shared_ptr<Espresso::blob<float' */ struct  weights_blob; /* unknown property attribute:  2>}^{__shared_weak_count}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{shared_ptr<Espresso::blob<unsigned short' */ struct  weights_f16_blob; /* unknown property attribute:  2>}^{__shared_weak_count}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (float*)biasTerms;
- (struct shared_ptr<Espresso::blob<float, 1> > { struct blob<float, 1> {} *x1; struct __shared_weak_count {} *x2; })biases_blob;
- (unsigned int)dataType;
- (unsigned int)data_type;
- (id)descriptor;
- (id)dev;
- (id)initWithDevice:(id)arg1 params:(struct inner_product_uniforms { unsigned int x1; unsigned int x2; int x3; int x4; int x5; float x6; float x7; int x8; int x9; int x10; int x11; int x12; int x13; float x14; float x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; int x25; int x26; })arg2;
- (id)label;
- (bool)load;
- (struct inner_product_uniforms { unsigned int x1; unsigned int x2; int x3; int x4; int x5; float x6; float x7; int x8; int x9; int x10; int x11; int x12; int x13; float x14; float x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; int x25; int x26; })params;
- (void)purge;
- (bool)ready;
- (void)setBiases_blob:(struct shared_ptr<Espresso::blob<float, 1> > { struct blob<float, 1> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setData_type:(unsigned int)arg1;
- (void)setDev:(id)arg1;
- (void)setParams:(struct inner_product_uniforms { unsigned int x1; unsigned int x2; int x3; int x4; int x5; float x6; float x7; int x8; int x9; int x10; int x11; int x12; int x13; float x14; float x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; int x25; int x26; })arg1;
- (void)setWeights_blob:(struct shared_ptr<Espresso::blob<float, 2> > { struct blob<float, 2> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setWeights_f16_blob:(struct shared_ptr<Espresso::blob<unsigned short, 2> > { struct blob<unsigned short, 2> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void*)weights;
- (struct shared_ptr<Espresso::blob<float, 2> > { struct blob<float, 2> {} *x1; struct __shared_weak_count {} *x2; })weights_blob;
- (struct shared_ptr<Espresso::blob<unsigned short, 2> > { struct blob<unsigned short, 2> {} *x1; struct __shared_weak_count {} *x2; })weights_f16_blob;

@end