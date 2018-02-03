/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

@interface RTCReporting : NSObject <RTCReportingDeallocNotifierDelegate> {
    NSXPCConnection * _connection;
    int  _counter;
    NSArray * _enabledBackendNames;
    int  _intervalMultiplier;
    id /* block */  _loggingBlock;
    NSMutableDictionary * _periodicServiceDict;
    NSObject<OS_dispatch_queue> * _reportingQueue;
    RTCReportingDeallocNotifier * _strongDeallocNotifier;
    NSObject<OS_dispatch_source> * _timer;
    id  _weakDeallocNotifier;
    id  _weakMessageSentDelegate;
}

@property (nonatomic, copy) id /* block */ messageLoggingBlock;
@property (nonatomic) <RTCReportingMessageSentNotifier> *messageSentDelegate;

+ (id)getPersistentIdentifierForDNU:(bool)arg1;
+ (id)newHierarchyTokenFromParentToken:(id)arg1;
+ (void)regeneratePersistentIdentifierForDNU:(bool)arg1;
+ (bool)sendOneMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 error:(id*)arg6;

- (void)_myPeriodicTask:(unsigned short)arg1 type:(unsigned short)arg2;
- (void)aboutToDealloc;
- (void)dealloc;
- (void)fetchReportingStatesWithUserInfo:(id)arg1 fetchComplete:(id /* block */)arg2;
- (void)finishSession;
- (bool)flushMessages;
- (void)flushMessagesWithCompletion:(id /* block */)arg1;
- (id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3;
- (id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3 aggregationBlock:(id /* block */)arg4;
- (id /* block */)messageLoggingBlock;
- (id)messageSentDelegate;
- (void)notifyMessageWasSent:(id)arg1;
- (bool)registerPeriodicTaskForModule:(unsigned int)arg1 needToUpdate:(bool)arg2 needToReport:(bool)arg3 serviceBlock:(id /* block */)arg4;
- (oneway void)release;
- (id)retain;
- (bool)sendMessageWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 error:(id*)arg4;
- (bool)sendMessageWithDictionary:(id)arg1 error:(id*)arg2;
- (bool)serverSupportsFileUpload;
- (bool)setDigestKey:(id)arg1 algorithm:(int)arg2;
- (void)setMessageLoggingBlock:(id /* block */)arg1;
- (void)setMessageSentDelegate:(id)arg1;
- (void)startConfigurationWithCompletionHandler:(id /* block */)arg1;
- (void)startLogTimerWithInterval:(int)arg1 reportingMultiplier:(int)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4;
- (void)stopLogTimer;
- (bool)unregisterPeriodTaskForModule:(unsigned int)arg1;
- (void)updateSharedDataForKey:(id)arg1 value:(id)arg2;
- (void)updateSharedDataWithDictionary:(id)arg1;
- (bool)uploadDataArray:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)uploadFileWithURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end
