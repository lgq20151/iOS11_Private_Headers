/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface EspressoMetalKernelsCache : NSObject {
    <MTLDevice> * _device;
    NSString * _kernelPrefix;
    NSDictionary * _m_kernelCache;
    NSMutableDictionary * _m_kernelCache_rw;
    NSMutableDictionary * auxLibraries;
    NSObject<OS_dispatch_queue> * dictionary_write_queue;
    bool  isSupportingiOSGPUFamilyV2;
    <MTLLibrary> * m_DefaultLibrary;
    <MTLLibrary> * m_ShaderLibrary;
}

@property (nonatomic, retain) NSString *kernelPrefix;
@property (retain) NSDictionary *m_kernelCache;
@property (nonatomic, retain) NSMutableDictionary *m_kernelCache_rw;

- (void).cxx_destruct;
- (void)addLibraryAtPath:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)kernelForFunction:(const char *)arg1;
- (id)kernelForFunction:(const char *)arg1 cacheString:(const char *)arg2 withConstants:(id)arg3;
- (id)kernelPrefix;
- (void)loadLibraryNamed:(id)arg1;
- (id)m_kernelCache;
- (id)m_kernelCache_rw;
- (void)setKernelPrefix:(id)arg1;
- (void)setM_kernelCache:(id)arg1;
- (void)setM_kernelCache_rw:(id)arg1;
- (bool)shouldUseTexArray;

@end
