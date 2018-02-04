/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMSenderChatItem : IMTranscriptChatItem {
    IMHandle * _handle;
}

@property (nonatomic, readonly) IMHandle *handle;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 handle:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)handle;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end