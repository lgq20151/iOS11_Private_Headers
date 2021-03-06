/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKLibrarySelectedFaceSnapshotProvider : NSObject <NTKFaceCollectionObserver, NTKFaceObserver> {
    <NTKLibrarySelectedFaceSnapshotProviderDelegate> * _delegate;
    NTKFaceCollection * _libraryCollection;
    NTKFace * _selectedFace;
    NSString * _snapshotKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKLibrarySelectedFaceSnapshotProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleFaceChange:(id)arg1;
- (void)_handleSnapshotChangedNotification:(id)arg1;
- (void)_notifyIfSnapshotAvailable;
- (void)_updateSelectedFaceAndSnapshotKey;
- (void)dealloc;
- (id)delegate;
- (void)faceCollection:(id)arg1 didSelectFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (id)initWithDeviceUUID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)snapshotImage;

@end
