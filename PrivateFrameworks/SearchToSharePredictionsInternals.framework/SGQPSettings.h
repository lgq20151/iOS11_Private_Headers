/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPSettings : NSObject {
    NSString * _abGroup;
    NSUserDefaults * _defaults;
    long long  _hashedSessionsLogging;
    <SGQPSettingsObserver> * _observer;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly) NSString *abGroup;
@property (readonly) long long hashedSessionsLogging;

- (void).cxx_destruct;
- (void)_registerNotification;
- (void)_reloadSettingsFromDefaultsAndNotifyObserver;
- (id)abGroup;
- (long long)hashedSessionsLogging;
- (id)init;
- (void)setObserver:(id)arg1;

@end
