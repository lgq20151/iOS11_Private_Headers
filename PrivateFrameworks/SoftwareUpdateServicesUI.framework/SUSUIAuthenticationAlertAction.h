/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

@interface SUSUIAuthenticationAlertAction : BSAction {
    SUAutoInstallOperation * _autoInstallOperation;
    bool  _canDeferInstallation;
    SUDownload * _download;
    bool  _forInstallTonight;
    bool  _loaded;
}

@property (nonatomic, readonly, retain) SUAutoInstallOperation *autoInstallOperation;
@property (nonatomic, readonly) bool canDeferInstallation;
@property (nonatomic, readonly, retain) SUDownload *download;
@property (nonatomic, readonly) bool forInstallTonight;

- (void).cxx_destruct;
- (void)_loadIfNecessary;
- (id)autoInstallOperation;
- (bool)canDeferInstallation;
- (id)download;
- (void)fireCompletionIfNecessaryForResult:(bool)arg1;
- (bool)forInstallTonight;
- (id)initWithDownload:(id)arg1 autoInstallOperation:(id)arg2 forInstallTonight:(bool)arg3 canDeferInstallation:(bool)arg4 completionBlock:(id /* block */)arg5;

@end