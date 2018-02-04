/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUICameraViewController : CMKCameraViewController <UIImagePickerCameraViewController> {
    long long  _newStatusBarStyle;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _previewViewTransform;
    long long  _previousStatusBarStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_adjustContentSizeForOrientation:(long long)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (long long)_cameraCaptureMode;
- (long long)_cameraDevice;
- (long long)_cameraFlashMode;
- (id)_cameraOverlayView;
- (id)_cameraView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_cameraViewTransform;
- (bool)_displaysFullScreen;
- (void)_editabilityChanged:(id)arg1;
- (long long)_imagePickerStatusBarStyle;
- (long long)_preferredWhitePointAdaptivityStyle;
- (void)_setAllowsStillFromVideoMode:(bool)arg1;
- (void)_setCameraCaptureMode:(long long)arg1;
- (void)_setCameraCaptureMode:(long long)arg1 device:(long long)arg2;
- (void)_setCameraDevice:(long long)arg1;
- (void)_setCameraFlashMode:(long long)arg1;
- (void)_setCameraOverlayView:(id)arg1;
- (void)_setCameraViewTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (void)_setShowsCameraControls:(bool)arg1;
- (bool)_showsCameraControls;
- (bool)_startVideoCapture;
- (void)_stopVideoCapture;
- (void)_takePicture;
- (void)_updateCameraViewForPopover;
- (void)_windowOrientationWillChange:(id)arg1;
- (void)cameraView:(id)arg1 photoSaved:(id)arg2;
- (void)cameraView:(id)arg1 videoSavedToPath:(id)arg2 editingInfo:(id)arg3;
- (void)cameraViewCancelled:(id)arg1;
- (bool)cameraViewShouldShowPreviewAfterSelection:(id)arg1;
- (void)cameraViewWillPreviewPhoto:(id)arg1;
- (void)cameraViewWillRetakePhoto:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithInitialImagePickerProperties:(id)arg1;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersStatusBarHidden;
- (void)setAllowsEditing:(bool)arg1;
- (void)setWantsImageData:(bool)arg1;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end