/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVCPLoggingController : NSObject {
    NSMutableDictionary * _cachedLoggingLevelPairs;
    bool  _cachedPPTTestsAreInProgress;
    NSObject<OS_dispatch_queue> * _configurationAccessQueue;
    int  _configurationChangeNotifyToken;
    bool  _masterLoggingSwitchEnabled;
    bool  _masterLoggingSwitchInitialized;
    NSMutableArray * _registeredConfigurations;
    NSObject<OS_dispatch_queue> * _serialLoggingQueue;
}

@property (nonatomic, readonly, copy) NSString *defaultCategory;
@property (nonatomic) bool masterLoggingSwitchEnabled;
@property (nonatomic, readonly, copy) NSArray *registeredConfigurations;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_defaultCategoryOnAccessQueue;
- (void)_updateCachedPPTTestsAreInProgress;
- (void)_updateLoggingLevels;
- (void)dealloc;
- (id)defaultCategory;
- (id)init;
- (void)logMessage:(id)arg1 withLevel:(long long)arg2 category:(id)arg3 fileName:(const char *)arg4 functionName:(const char *)arg5 lineNumber:(unsigned long long)arg6;
- (bool)masterLoggingSwitchEnabled;
- (void)registerConfiguration:(id)arg1 withFacilityName:(id)arg2;
- (id)registeredConfigurations;
- (void)setMasterLoggingSwitchEnabled:(bool)arg1;
- (bool)shouldLogMessageWithLevel:(long long)arg1 category:(id)arg2;

@end
