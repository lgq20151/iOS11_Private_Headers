/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICAttachmentPreviewGeneratorOperation : NSOperation {
    NSManagedObjectID * _attachmentID;
    ICAttachmentModel * _attachmentModel;
    NSManagedObjectContext * _managedObjectContext;
}

@property (retain) NSManagedObjectID *attachmentID;
@property (retain) ICAttachmentModel *attachmentModel;
@property (retain) NSManagedObjectContext *managedObjectContext;

- (void).cxx_destruct;
- (id)attachmentID;
- (id)attachmentModel;
- (void)cancel;
- (id)initWithAttachmentManagedObjectID:(id)arg1;
- (void)main;
- (id)managedObjectContext;
- (void)setAttachmentID:(id)arg1;
- (void)setAttachmentModel:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;

@end
