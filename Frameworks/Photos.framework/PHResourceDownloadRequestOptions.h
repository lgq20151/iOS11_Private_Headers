/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHResourceDownloadRequestOptions : NSObject {
    bool  _treatLivePhotoAsStill;
}

@property (nonatomic) bool treatLivePhotoAsStill;

- (id)description;
- (void)setTreatLivePhotoAsStill:(bool)arg1;
- (bool)treatLivePhotoAsStill;

@end
