/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification {
    UIImage * _image;
    NSString * _uuid;
}

@property (nonatomic, readonly, retain) NSString *assetUUID;
@property (nonatomic, readonly, retain) UIImage *image;

+ (id)notification;

- (id)_init;
- (id)assetUUID;
- (void)dealloc;
- (id)description;
- (id)image;
- (id)init;
- (id)name;
- (id)object;
- (id)userInfo;

@end
