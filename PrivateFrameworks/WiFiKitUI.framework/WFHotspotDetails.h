/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFHotspotDetails : NSObject {
    NSNumber * _batteryLife;
    NSString * _cellularProtocolString;
    NSNumber * _signalStrength;
}

@property (nonatomic, retain) NSNumber *batteryLife;
@property (nonatomic, copy) NSString *cellularProtocolString;
@property (nonatomic, retain) NSNumber *signalStrength;

- (void).cxx_destruct;
- (id)batteryLife;
- (id)cellularProtocolString;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualHotspotDetails:(id)arg1;
- (void)setBatteryLife:(id)arg1;
- (void)setCellularProtocolString:(id)arg1;
- (void)setSignalStrength:(id)arg1;
- (id)signalStrength;

@end