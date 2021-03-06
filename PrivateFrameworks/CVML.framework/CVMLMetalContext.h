/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLMetalContext : NSObject {
    <MTLDevice> * _metalDevice;
    bool  _useGPU;
    NSDictionary * _wisdomParams;
}

@property (readonly) <MTLDevice> *metalDevice;
@property (readonly) bool useGPU;
@property (readonly) NSDictionary *wisdomParams;

+ (id)mapMetalDeviceNameToWisdomParams;

- (void).cxx_destruct;
- (void)initWisdomParams;
- (id)initWithMetalDevice:(id)arg1;
- (id)metalDevice;
- (void)setMetalDevice:(id)arg1;
- (bool)useGPU;
- (id)wisdomParams;

@end
