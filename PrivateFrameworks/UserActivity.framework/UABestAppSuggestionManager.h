/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UABestAppSuggestionManager : NSObject {
    int  _bestAppNotificationCount;
    NSXPCConnection * _connection;
    <UABestAppSuggestionManagerDelegate> * _delegate;
    UABestAppSuggestion * _lastBestAppSuggestion;
    bool  _listeningForBestAppSuggestions;
}

@property (retain) NSXPCConnection *connection;
@property <UABestAppSuggestionManagerDelegate> *delegate;

- (void).cxx_destruct;
- (id)bestAppSuggestion;
- (void)bestAppSuggestionLaunchWasCancelled:(id)arg1;
- (void)bestAppSuggestionWasLaunched:(id)arg1 withInteractionType:(int)arg2;
- (id)bestAppSuggestions:(long long)arg1;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (bool)determineBestAppWithDelay:(double)arg1 withBlock:(id /* block */)arg2;
- (id)init;
- (void)launchAppWithBestAppSuggestion:(id)arg1;
- (void)launchAppWithBundleIdentifier:(id)arg1 taskContinuationIdentifier:(id)arg2;
- (void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3;
- (void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3 deviceName:(id)arg4 deviceIdentifier:(id)arg5 deviceType:(id)arg6;
- (void)notifyBestAppChanged:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 bundleIdentifier:(id)arg4 activityType:(id)arg5 dynamicIdentifier:(id)arg6 when:(id)arg7 confidence:(double)arg8 deviceName:(id)arg9 deviceIdentifier:(id)arg10 deviceType:(id)arg11;
- (void)queueFetchOfPayloadForBestAppSuggestion:(id)arg1;
- (void)removeBestApp:(id)arg1 options:(id)arg2;
- (void)removeBestAppByUUID:(id)arg1 options:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startListeningForBestAppSuggestions;
- (void)stopListeningForBestAppSuggestions;

@end