/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumListViewControllerCommonPhoneSpec : PUAlbumListViewControllerSpec

- (long long)albumDeletionConfirmationStyle;
- (id)albumViewControllerSpec;
- (bool)canDisplaySearchActionInNavigationBar;
- (id)emptyStackPhotoDecoration;
- (id)feedViewControllerSpec;
- (id)gridViewControllerSpec;
- (id)panoramaViewControllerSpec;
- (id)photosPickerViewControllerSpec;
- (double)posterSquareCornerRadius;
- (double)posterSubitemCornerRadius;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (bool)shouldUseCollageForCloudFeedPlaceholder;
- (bool)showsDeleteButtonOnCellContentView;
- (struct UIOffset { double x1; double x2; })stackOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })stackPerspectiveInsets;
- (struct UIOffset { double x1; double x2; })stackPerspectiveOffset;
- (id)stackPhotoDecoration;

@end