/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetCollectionActionPerformer : PXActionPerformer {
    <PXDisplayAssetCollection> * _assetCollection;
    PXDisplayTitleInfo * _displayTitleInfo;
    PHFetchResult * _people;
}

@property (nonatomic, readonly) <PXDisplayAssetCollection> *assetCollection;
@property (nonatomic, readonly) PXDisplayTitleInfo *displayTitleInfo;
@property (nonatomic, readonly) PHFetchResult *people;

- (void).cxx_destruct;
- (id)assetCollection;
- (id)displayTitleInfo;
- (id)initWithActionType:(id)arg1;
- (id)initWithActionType:(id)arg1 assetCollection:(id)arg2 displayTitleInfo:(id)arg3 people:(id)arg4;
- (id)people;

@end
