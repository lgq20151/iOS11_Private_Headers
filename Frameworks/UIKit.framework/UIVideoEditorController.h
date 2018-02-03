/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVideoEditorController : UINavigationController {
    struct { 
        unsigned int visible : 1; 
        unsigned int isCleaningUp : 1; 
        unsigned int didRevertStatusBar : 1; 
    }  _flags;
    int  _previousStatusBarStyle;
    NSMutableDictionary * _properties;
}

@property (nonatomic) <UINavigationControllerDelegate><UIVideoEditorControllerDelegate> *delegate;
@property (nonatomic) double videoMaximumDuration;
@property (nonatomic, copy) NSString *videoPath;
@property (nonatomic) long long videoQuality;

+ (bool)canEditVideoAtPath:(id)arg1;

- (void)_autoDismiss;
- (id)_createInitialController;
- (bool)_didRevertStatusBar;
- (void)_initializeProperties;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (id)_properties;
- (void)_removeAllChildren;
- (void)_setProperties:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)_setVideoURL:(id)arg1;
- (void)_setupControllers;
- (id)_valueForProperty:(id)arg1;
- (id)_videoURL;
- (void)editVideoViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (id)init;
- (void)setVideoMaximumDuration:(double)arg1;
- (void)setVideoPath:(id)arg1;
- (void)setVideoQuality:(long long)arg1;
- (double)videoMaximumDuration;
- (id)videoPath;
- (long long)videoQuality;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillUnload;

@end
