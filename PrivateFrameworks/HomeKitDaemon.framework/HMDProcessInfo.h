/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDProcessInfo : HMFObject {
    HMDApplicationInfo * _appInfo;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSHashTable * _connectionProxies;
    int  _pid;
    NSArray * _runningReasons;
    unsigned long long  _state;
    bool  _viewService;
}

@property (nonatomic, readonly) HMDApplicationInfo *appInfo;
@property (getter=isBackgrounded, nonatomic, readonly) bool background;
@property (getter=isBackgroundUpgradedToForeground, nonatomic, readonly) bool backgroundUpgradedToForeground;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) NSHashTable *connectionProxies;
@property (getter=isForegrounded, nonatomic, readonly) bool foreground;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) unsigned long long proxyCount;
@property (nonatomic, retain) NSArray *runningReasons;
@property (nonatomic) unsigned long long state;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;
@property (getter=isTerminated, nonatomic, readonly) bool terminated;
@property (getter=isViewService, nonatomic, readonly) bool viewService;

- (void).cxx_destruct;
- (void)activate;
- (id)activeRequestIdentifiers;
- (void)addConnectionProxy:(id)arg1;
- (id)appInfo;
- (id)clientQueue;
- (id)connectionProxies;
- (void)deactivate;
- (id)description;
- (id)init;
- (id)initWithConnectionProxy:(id)arg1 application:(id)arg2 processId:(int)arg3;
- (void)initiateRefresh;
- (bool)isBackgroundUpgradedToForeground;
- (bool)isBackgrounded;
- (bool)isForegrounded;
- (bool)isSuspended;
- (bool)isTerminated;
- (bool)isViewService;
- (int)pid;
- (unsigned long long)proxyCount;
- (void)removeConnectionProxy:(id)arg1;
- (id)runningReasons;
- (void)setRunningReasons:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
