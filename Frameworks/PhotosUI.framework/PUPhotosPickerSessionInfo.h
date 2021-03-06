/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosPickerSessionInfo : PUSessionInfo

- (id)_initWithTargetAlbum:(struct NSObject { Class x1; }*)arg1 orTargetAlbumName:(id)arg2 isLocal:(bool)arg3;
- (id)initWithTargetAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)initWithTargetAlbumName:(id)arg1 isLocal:(bool)arg2;
- (bool)isSelectingAssets;
- (id)localizedPrompt;

@end
