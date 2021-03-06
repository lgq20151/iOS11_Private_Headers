/* made by EzioChiu.
 */

@protocol PXOneUpPresentationDelegate <NSObject>

@required

- (PXAssetsDataSourceManager *)oneUpPresentationDataSourceManager:(PXOneUpPresentation *)arg1;
- (PXUIMediaProvider *)oneUpPresentationMediaProvider:(PXOneUpPresentation *)arg1;

@optional

- (UIImage *)oneUpPresentation:(PXOneUpPresentation *)arg1 currentImageForAssetReference:(PXAssetReference *)arg2;
- (PXRegionOfInterest *)oneUpPresentation:(PXOneUpPresentation *)arg1 regionOfInterestForAssetReference:(PXAssetReference *)arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 scrollAssetReferenceToVisible:(PXAssetReference *)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 setHiddenAssetReferences:(NSSet *)arg2;
- (PXActionManager *)oneUpPresentationActionManager:(PXOneUpPresentation *)arg1;
- (PXAssetReference *)oneUpPresentationInitialAssetReference:(PXOneUpPresentation *)arg1;
- (PXPhotosDetailsContext *)oneUpPresentationPhotosDetailsContext:(PXOneUpPresentation *)arg1;
- (bool)oneUpPresentationShouldAutoPlay:(PXOneUpPresentation *)arg1;

@end
