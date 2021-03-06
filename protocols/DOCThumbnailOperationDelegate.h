/* made by EzioChiu.
 */

@protocol DOCThumbnailOperationDelegate <NSObject>

@required

- (void)thumbnailOperation:(DOCThumbnailBaseOperation *)arg1 didLoadThumbnail:(UIImage *)arg2 representativeIcon:(bool)arg3;
- (void)thumbnailOperationFailedToLoadThumbnail:(DOCThumbnailBaseOperation *)arg1;

@end
