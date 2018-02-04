/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudDownloadBatchDetails : NSObject {
    bool  _hasResourceChanges;
    long long  _numberOfPhotos;
    long long  _numberOfVideos;
}

@property (nonatomic) bool hasResourceChanges;
@property (nonatomic) long long numberOfPhotos;
@property (nonatomic) long long numberOfVideos;

- (bool)hasResourceChanges;
- (long long)numberOfPhotos;
- (long long)numberOfVideos;
- (void)setHasResourceChanges:(bool)arg1;
- (void)setNumberOfPhotos:(long long)arg1;
- (void)setNumberOfVideos:(long long)arg1;
- (void)unionBatchDetails:(id)arg1;

@end