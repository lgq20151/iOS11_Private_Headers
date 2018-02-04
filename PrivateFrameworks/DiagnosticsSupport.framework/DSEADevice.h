/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

@interface DSEADevice : NSObject {
    EAAccessory * _device;
}

@property (nonatomic, retain) EAAccessory *device;

+ (id)deviceWithModelNumber:(id)arg1;
+ (id)deviceWithSerialNumber:(id)arg1;

- (void).cxx_destruct;
- (id)device;
- (id)information;
- (id)initWithModelNumber:(id)arg1;
- (id)initWithSerialNumber:(id)arg1;
- (void)setDevice:(id)arg1;

@end