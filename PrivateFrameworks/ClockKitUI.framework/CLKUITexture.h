/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUITexture : NSObject {
    unsigned long long  _height;
    unsigned long long  _status;
    NSString * _uuid;
    unsigned long long  _width;
}

@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic) unsigned long long status;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) unsigned long long width;

+ (id)textureWithProviderDelegate:(id)arg1 uuid:(id)arg2;

- (void).cxx_destruct;
- (id)backing;
- (unsigned long long)height;
- (id)initWithUuid:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;
- (id)uuid;
- (unsigned long long)width;

@end
