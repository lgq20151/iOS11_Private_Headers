/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPlayEventCollection : NSObject <NSCopying, NSMutableCopying> {
    NSString * _deviceName;
    NSMapTable * _stationInformationToPlayEvents;
}

@property (nonatomic, readonly, copy) NSString *deviceName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceName;
- (unsigned long long)hash;
- (id)initWithDeviceName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)playInfoDictionary;

@end
