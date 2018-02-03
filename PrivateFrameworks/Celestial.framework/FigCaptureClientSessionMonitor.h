/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureClientSessionMonitor : NSObject <FigCaptureDisplayLayoutObserver> {
    id /* block */  _applicationAndLayoutStateHandler;
    NSString * _applicationID;
    int  _applicationState;
    id  _applicationStateChangeNotificationToken;
    NSString * _cachedApplicationIDToInheritAppStateFrom;
    bool  _clientCanInheritApplicationState;
    int  _clientType;
    FigCaptureDisplayLayoutMonitor * _displayLayoutMonitor;
    NSString * _extensionHostApplicationID;
    int  _extensionHostApplicationState;
    bool  _haveExternalCMSession;
    id /* block */  _interruptionHandler;
    id  _interruptionStateChangeNotificationToken;
    bool  _invalid;
    int  _layoutState;
    int  _pid;
    int  _pidToInheritAppStateFrom;
    int  _resolvedExtensionApplicationState;
    struct opaqueCMSession { } * _session;
    struct OpaqueFigSimpleMutex { } * _sessionLock;
    struct OpaqueFigSimpleMutex { } * _stateChangeLock;
}

@property (readonly) NSString *applicationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct opaqueCMSession { }*session;
@property (readonly) Class superclass;

+ (id)_stringForApplicationState:(int)arg1;
+ (id)_stringForBKSApplicationState:(unsigned int)arg1;
+ (id)_stringForClientLayoutState:(int)arg1;
+ (id)_stringForClientType:(int)arg1;
+ (void)initialize;
+ (void)startPrewarmingMonitor;
+ (void)stopPrewarmingMonitor;

- (int)_createAndObserveCMSession;
- (void)_deregisterAndReleaseCMSession;
- (void)_handleApplicationStateChange:(unsigned int)arg1;
- (void)_handleAudioInterruptionChange:(int)arg1;
- (void)_handleCMSessionManagerNofification:(id)arg1;
- (bool)_isSupportedExtensionClientType;
- (id)_logString;
- (void)_notifyIfResolvedSupportedExtensionApplicationStateOrLayoutStateDidChangeUsingLayoutStateChanged:(bool)arg1;
- (int)_registerCMSessionForObservation;
- (id)_resolveApplicationID;
- (void)_setUpApplicationInfo;
- (void)_updateApplicationState;
- (id)applicationID;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPID:(int)arg1 applicationAndLayoutStateHandler:(id /* block */)arg2 interruptionHandler:(id /* block */)arg3;
- (void)invalidate;
- (void)layoutMonitor:(id)arg1 didUpdateLayoutWithForegroundApps:(id)arg2 layoutState:(int)arg3;
- (int)observeSession:(struct opaqueCMSession { }*)arg1;
- (struct opaqueCMSession { }*)session;

@end
