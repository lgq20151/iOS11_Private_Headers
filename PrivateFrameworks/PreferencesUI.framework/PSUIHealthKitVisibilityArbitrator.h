/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIHealthKitVisibilityArbitrator : NSObject <LSApplicationWorkspaceObserverProtocol> {
    unsigned long long  _healthAppInstallState;
    unsigned long long  _visibilityState;
    id /* block */  _visibilityStateChangeHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long healthAppInstallState;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long visibilityState;
@property (nonatomic, copy) id /* block */ visibilityStateChangeHandler;

- (void).cxx_destruct;
- (void)_queryHealthAppInstallStateWithCompletion:(id /* block */)arg1;
- (void)_reloadVisibilityStateIncludingInstallState:(bool)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (unsigned long long)healthAppInstallState;
- (id)init;
- (void)reloadVisibilityState;
- (void)setHealthAppInstallState:(unsigned long long)arg1;
- (void)setVisibilityState:(unsigned long long)arg1;
- (void)setVisibilityStateChangeHandler:(id /* block */)arg1;
- (unsigned long long)visibilityState;
- (id /* block */)visibilityStateChangeHandler;

@end
