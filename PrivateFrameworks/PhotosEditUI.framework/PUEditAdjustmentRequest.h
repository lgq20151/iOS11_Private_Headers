/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUEditAdjustmentRequest : NSObject {
    <PUEditableAsset> * _asset;
    id /* block */  _completionHandler;
    PUPhotoEditResourceLoader * _loader;
    PUEditableMediaProvider * _mediaProvider;
    PLPhotoEditModel * _modifiedEditModel;
    PLPhotoEditModel * _originalEditModel;
    id /* block */  _performChangesBlock;
    NSProgress * _progress;
}

@property (nonatomic, retain) <PUEditableAsset> *asset;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) PUPhotoEditResourceLoader *loader;
@property (nonatomic, retain) PUEditableMediaProvider *mediaProvider;
@property (nonatomic, copy) PLPhotoEditModel *modifiedEditModel;
@property (nonatomic, copy) PLPhotoEditModel *originalEditModel;
@property (nonatomic, copy) id /* block */ performChangesBlock;
@property (nonatomic, retain) NSProgress *progress;

- (void).cxx_destruct;
- (id)asset;
- (id /* block */)completionHandler;
- (id)loader;
- (id)mediaProvider;
- (id)modifiedEditModel;
- (id)originalEditModel;
- (id /* block */)performChangesBlock;
- (id)progress;
- (void)setAsset:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setLoader:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setModifiedEditModel:(id)arg1;
- (void)setOriginalEditModel:(id)arg1;
- (void)setPerformChangesBlock:(id /* block */)arg1;
- (void)setProgress:(id)arg1;

@end
