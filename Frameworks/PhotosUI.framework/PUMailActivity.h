/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMailActivity : UIMailActivity <MFMailComposeViewControllerDelegate, PUActivity> {
    PLManagedAsset * _currentVideo;
    PUActivityItemSource * _currentVideoItemSource;
    bool  _didCheckMailDropAvailable;
    PLUIEditVideoViewController * _editVideoViewController;
    bool  _isMailDropAvailable;
    bool  _isSharingSingleVideo;
    PUActivityItemSourceController * _itemSourceController;
    MFMailComposeViewController * _mailComposeController;
    UIViewController * _referenceViewController;
    PLProgressView * _remakerProgressView;
    id  _strongSelf;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PUActivityItemSourceController *itemSourceController;
@property (readonly) Class superclass;

+ (bool)allowedToModifyEmailAccounts;
+ (void)openEmailAccountPrefs;

- (void).cxx_destruct;
- (void)_composeMailForVideo:(id)arg1 trimmedFilePath:(id)arg2;
- (bool)_isMailDropEnabled;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_pu_cleanup;
- (void)_remakeAndSendVideoWithTrimStartTime:(double)arg1 endTime:(double)arg2;
- (void)_sendViaEmail;
- (void)_showTrimViewControllerForVideo:(id)arg1 maximumTrimDuration:(double)arg2 trimButtonTitle:(id)arg3;
- (bool)_showTrimViewControllerIfNeededForVideo:(id)arg1 usingMode:(int)arg2;
- (void)_transcodeVideo:(id)arg1 usingMode:(int)arg2;
- (void)activityDidFinish:(bool)arg1;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)cancelRemaking;
- (void)dealloc;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (id)itemSourceController;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)mailComposeViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setItemSourceController:(id)arg1;

@end