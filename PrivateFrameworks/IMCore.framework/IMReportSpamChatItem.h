/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMReportSpamChatItem : IMTranscriptChatItem {
    bool  _wasReportedAsSpam;
}

@property (nonatomic, readonly) bool wasReportedAsSpam;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (id)_initWithItem:(id)arg1 wasReportedAsSpam:(bool)arg2;
- (bool)wasReportedAsSpam;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
