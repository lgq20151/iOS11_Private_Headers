/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion
 */

@interface NPTOLocket : NSObject <PHPhotoLibraryChangeObserver> {
    PHAssetCollection * _assetCollection;
    PHPhotoLibrary * _library;
    NPTOLocketReader * _reader;
    bool  _registeredAsPhotoLibraryChangeObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NPTOLocketReader *reader;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_changeDetailsToDictionary:(id)arg1;
- (id)_makeFetchOptions;
- (id)_makeReaderWithFetchResult:(id)arg1;
- (void)_registerPhotoLibraryChangeObserverIfNeeded;
- (void)_unregisterPhotoLibraryChangeObserverIfNeeded;
- (id)allAssets;
- (void)dealloc;
- (id)initWithAssetCollection:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (id)reader;
- (void)setReader:(id)arg1;

@end
