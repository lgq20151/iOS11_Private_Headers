/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCMultiStageGrowthAlgorithm : NSObject <PCGrowthAlgorithm> {
    NSString * _algorithmName;
    unsigned long long  _countOfGrowthActions;
    double  _currentKeepAliveInterval;
    int  _growthStage;
    double  _highWatermark;
    double  _initialGrowthStageHighWatermark;
    double  _initialGrowthStageLastAttempt;
    bool  _isServerOriginatedKeepAlive;
    double  _lastKeepAliveInterval;
    double  _lastSuccessfulKeepAliveInterval;
    NSDate * _leaveMinimumIntervalFallbackStateDate;
    NSDate * _leaveSteadyStateDate;
    NSObject<OS_os_log> * _logObject;
    double  _maximumKeepAliveInterval;
    bool  _minimumIntervalFallbackEnabled;
    double  _minimumKeepAliveInterval;
    double  _previousMaximumKeepAliveInterval;
}

@property (nonatomic, readonly, copy) NSDictionary *cacheInfo;
@property (nonatomic, readonly) unsigned long long countOfGrowthActions;
@property (nonatomic, readonly) double currentKeepAliveInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int growthStage;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isServerOriginatedKeepAlive;
@property (nonatomic) double lastSuccessfulKeepAliveInterval;
@property (nonatomic) double maximumKeepAliveInterval;
@property (nonatomic) bool minimumIntervalFallbackEnabled;
@property (nonatomic) double minimumKeepAliveInterval;
@property (readonly) Class superclass;

+ (void)_loadDefaultValue:(double*)arg1 forKey:(struct __CFString { }*)arg2;
+ (void)_loadDefaults;

- (void).cxx_destruct;
- (void)_fallbackToLastSuccessfulKeepAliveInterval;
- (void)_processBackoffAction:(int)arg1;
- (void)_processInitialGrowthAction:(int)arg1;
- (void)_processMinimumIntervalFallbackStateAction:(int)arg1;
- (void)_processRefinedGrowthAction:(int)arg1;
- (void)_processSteadyStateAction:(int)arg1;
- (void)_resetAlgorithmToInterval:(double)arg1;
- (void)_resetAlgorithmToInterval:(double)arg1 stage:(int)arg2;
- (void)_setCurrentKeepAliveInterval:(double)arg1;
- (double)_steadyStateTimeout;
- (id)_stringForAction:(int)arg1;
- (id)_stringForStage:(int)arg1;
- (id)cacheInfo;
- (unsigned long long)countOfGrowthActions;
- (double)currentKeepAliveInterval;
- (id)description;
- (int)growthStage;
- (id)initWithCacheInfo:(id)arg1 loggingIdentifier:(id)arg2 algorithmName:(id)arg3;
- (bool)isServerOriginatedKeepAlive;
- (double)lastSuccessfulKeepAliveInterval;
- (double)maximumKeepAliveInterval;
- (bool)minimumIntervalFallbackEnabled;
- (double)minimumKeepAliveInterval;
- (void)processNextAction:(int)arg1;
- (void)setIsServerOriginatedKeepAlive:(bool)arg1;
- (void)setLastSuccessfulKeepAliveInterval:(double)arg1;
- (void)setMaximumKeepAliveInterval:(double)arg1;
- (void)setMinimumIntervalFallbackEnabled:(bool)arg1;
- (void)setMinimumKeepAliveInterval:(double)arg1;
- (bool)useIntervalIfImprovement:(double)arg1;

@end
