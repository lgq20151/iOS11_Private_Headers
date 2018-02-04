/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStationSkipController : NSObject {
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    NSObject<OS_dispatch_source> * _availableSkipsInvalidationTimer;
    bool  _hasValidNumberOfAvailableSkips;
    bool  _hasValidSkipInvalidationDate;
    unsigned long long  _monitoringCount;
    long long  _numberOfAvailableSkips;
    NSDate * _skipInvalidationDate;
    unsigned int  _skipsEnabled;
    RadioStation * _station;
}

@property (nonatomic, readonly) long long numberOfAvailableSkips;
@property (getter=hasSkipsEnabled, nonatomic, readonly) bool skipsEnabled;
@property (nonatomic, readonly) RadioStation *station;

- (void).cxx_destruct;
- (void)_cancelAvailableSkipsInvalidationTimer;
- (void)_createAvailableSkipsInvalidationTimer;
- (void)_modelDidChangeNotification:(id)arg1;
- (void)_rebuildState;
- (void)_updateForInvalidatedModel;
- (void)beginMonitoring;
- (void)dealloc;
- (void)endMonitoring;
- (bool)hasSkipsEnabled;
- (id)initWithStation:(id)arg1;
- (bool)isMonitoring;
- (long long)numberOfAvailableSkips;
- (id)station;

@end