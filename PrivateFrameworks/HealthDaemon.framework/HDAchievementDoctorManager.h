/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementDoctorManager : NSObject <HDDiagnosticObject, HDNanoSyncManagerObserver, HDPeriodicActivityDelegate> {
    HDAchievementDoctor * _achievementDoctor;
    NSObject<OS_dispatch_queue> * _doctorQueue;
    HDProfile * _profile;
    HDPeriodicActivity * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_definitionIdentifiersModifiedPerFixupVersion;

- (void).cxx_destruct;
- (long long)_activityInterval;
- (void)_generateCrashReportForMissingAchievements:(id)arg1;
- (long long)_lastSuccessfulFixupVersion;
- (bool)_multipleWatchesArePaired;
- (void)_performAchievementsFixupWithCompletion:(id /* block */)arg1;
- (void)_queue_setupSchedulerIfNecessaryWithPairedDevicesSnapshot:(id)arg1;
- (void)_setLastSuccessfulFixupVersion:(long long)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;
- (void)nanoSyncManager:(id)arg1 pairedDevicesChanged:(id)arg2;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (bool)periodicActivityRequiresProtectedData:(id)arg1;
- (void)requestAchievementDoctorRun;

@end
