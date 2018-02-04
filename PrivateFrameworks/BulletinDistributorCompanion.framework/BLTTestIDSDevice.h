/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTTestIDSDevice : NSObject <BLTAbstractIDSDevice> {
    bool  _isCloudReachable;
    bool  _isConnected;
    bool  _isDefaultPairedDevice;
    bool  _isNearby;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCloudReachable;
@property (nonatomic) bool isConnected;
@property (nonatomic) bool isDefaultPairedDevice;
@property (nonatomic) bool isNearby;
@property (readonly) Class superclass;

- (bool)isCloudReachable;
- (bool)isConnected;
- (bool)isDefaultPairedDevice;
- (bool)isNearby;
- (void)setIsCloudReachable:(bool)arg1;
- (void)setIsConnected:(bool)arg1;
- (void)setIsDefaultPairedDevice:(bool)arg1;
- (void)setIsNearby:(bool)arg1;

@end