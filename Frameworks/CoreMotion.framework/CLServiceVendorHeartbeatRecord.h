/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLServiceVendorHeartbeatRecord : NSObject {
    int  _ackCount;
    int  _residentCount;
    CLSilo * _silo;
    Class  _svcClass;
    int  _synCount;
}

@property (nonatomic, readonly) int ackCount;
@property (nonatomic) int residentCount;
@property (nonatomic, readonly) CLSilo *silo;
@property (nonatomic, readonly) Class svcClass;
@property (nonatomic, readonly) int synCount;

- (void).cxx_destruct;
- (void)ack;
- (int)ackCount;
- (id)initTrackingServiceClass:(Class)arg1;
- (int)residentCount;
- (void)setResidentCount:(int)arg1;
- (id)silo;
- (Class)svcClass;
- (void)syn;
- (int)synCount;

@end
