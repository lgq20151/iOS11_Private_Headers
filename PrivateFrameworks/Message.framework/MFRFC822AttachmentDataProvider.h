/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFRFC822AttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol> {
    MFMailMessage * _message;
    NSData * _messageData;
    MFMimePart * _parentPart;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(id /* block */)arg4;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)initWithMessageData:(id)arg1 parentPart:(id)arg2;
- (id)messageForAttachment:(id)arg1;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;

@end
