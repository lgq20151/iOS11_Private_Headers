/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDLocationDataCollector : NSObject <CLLocationManagerDelegate> {
    unsigned long long  _activityType;
    <HDLocationEventDelegate> * _delegate;
    bool  _didSaveLocationData;
    CMElevation * _elevation;
    unsigned long long  _elevationGain;
    CLInUseAssertion * _inUseAssertion;
    double  _lastPausedTime;
    int  _lastStatus;
    CLLocationManager * _locationManager;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HKLocationSeriesSample * _seriesSample;
    HDHealthStoreServer * _server;
    NSUUID * _workoutUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDLocationEventDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDHealthStoreServer *server;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleElevationData:(id)arg1 error:(id)arg2;
- (void)_pauseLocationUpdates;
- (void)_queue_createSeriesSample;
- (void)_queue_deleteCurrentRoute;
- (void)_queue_freezeCurrentLocationSeriesSample;
- (void)_queue_resumeWorkout;
- (void)_queue_start;
- (void)_queue_stopGPSUpdates;
- (id)delegate;
- (void)endWorkout;
- (id)initWithProfile:(id)arg1 server:(id)arg2 activityType:(unsigned long long)arg3 workoutUUID:(id)arg4;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)pauseWorkout;
- (void)resumeWorkout;
- (id)server;
- (void)setDelegate:(id)arg1;
- (void)setServer:(id)arg1;
- (void)startWorkout;

@end
