/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessoryAdvertisementInfo : NSObject {
    NSString * _deviceIdentifier;
}

@property (nonatomic, readonly, copy) NSString *deviceIdentifier;

- (void).cxx_destruct;
- (id)deviceIdentifier;
- (id)initWithAccessoryIdentifier:(id)arg1;

@end