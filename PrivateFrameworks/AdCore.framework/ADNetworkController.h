/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADNetworkController : NSObject {
    bool  _canReachTheNetwork;
    bool  _isUpdating;
    double  _localBandwidth;
    double  _localBandwidthBytes;
    double  _localBandwidthStddev;
    double  _localLatency;
    int  _localLatencyCount;
    double  _localLatencyStddev;
    int  _networkType;
    NSTimer * _notificationTimer;
    NSObject<OS_dispatch_queue> * _queue;
    struct __SCNetworkReachability { } * _reachability;
    unsigned int  _reachabilityFlags;
    struct __SCDynamicStore { } * _store;
}

@property (nonatomic) bool canReachTheNetwork;
@property bool isUpdating;
@property (nonatomic, readonly) double localBandwidth;
@property (nonatomic, readonly) double localBandwidthBytes;
@property (nonatomic, readonly) double localBandwidthStddev;
@property (nonatomic, readonly) double localLatency;
@property (nonatomic, readonly) int localLatencyCount;
@property (nonatomic, readonly) double localLatencyStddev;

+ (id)sharedNetworkController;

- (void).cxx_destruct;
- (void)_checkForNetwork;
- (void)_checkForNetworkAndNotify;
- (void)_recordBandwidth:(double)arg1 bytes:(double)arg2;
- (void)_recordLatency:(double)arg1;
- (void)_updateStatus:(bool)arg1;
- (bool)canReachTheNetwork;
- (bool)isUpdating;
- (double)localBandwidth;
- (double)localBandwidthBytes;
- (double)localBandwidthStddev;
- (double)localLatency;
- (int)localLatencyCount;
- (double)localLatencyStddev;
- (int)networkType;
- (void)resetNetworkStatistics;
- (void)setCanReachTheNetwork:(bool)arg1;
- (void)setIsUpdating:(bool)arg1;
- (void)start;

@end
