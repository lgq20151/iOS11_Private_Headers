/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosPickerViewControllerSpec : NSObject {
    unsigned long long  _supportedInterfaceOrientations;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) PUTabbedLibraryViewControllerSpec *tabbedLibraryViewControllerSpec;

- (void)configureSessionInfo:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tabbedLibraryViewControllerSpec;

@end
