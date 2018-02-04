/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentImageModel : ICAttachmentModel

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (void)addLocation;
- (id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2;
- (bool)canConvertToHTMLForSharing;
- (bool)canMarkup;
- (bool)canSaveURL;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1;
- (bool)hasPreviews;
- (bool)hasThumbnailImage;
- (bool)needsFullSizePreview;
- (long long)previewImageOrientation;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })previewImageOrientationTransform;
- (id)previewImageTypeUTI;
- (id)previewItemTitle;
- (id)saveURL;
- (bool)shouldCropImage;
- (bool)showThumbnailInNoteList;
- (bool)supportsQuickLook;
- (void)updateAttachmentSize;
- (void)updateFileBasedAttributes;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)activityItems;
- (id)generateFullSizePreviewWithAttachmentIdentifier:(id)arg1 existingPreviewImage:(id)arg2 markupModelData:(id)arg3 imageOrientation:(long long)arg4 imageFilterType:(short)arg5 mediaDecryptedData:(id)arg6 mediaURL:(id)arg7 mediaSize:(struct CGSize { double x1; double x2; })arg8 croppingQuad:(id)arg9;
- (bool)generatePreviewsDuringCloudActivity;
- (void)generatePreviewsInOperation:(id)arg1;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;
- (bool)needToGeneratePreviews;

@end