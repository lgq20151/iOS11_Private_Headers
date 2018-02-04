/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNotificationReplyViewController : UIViewController <CKAudioControllerDelegate, CKBalloonViewDelegate, CKInlineReplyRaiseControllerDelegate, CKMessageEntryViewDelegate> {
    CKAudioController * _audioController;
    CKAudioMediaObject * _audioMediaObject;
    UIView * _audioMessageView;
    CKAudioBalloonView * _balloonView;
    CKConversation * _conversation;
    NSObject<CKNotificationReplyViewControllerDelegate> * _delegate;
    bool  _didSendMessage;
    CKMessageEntryView * _entryView;
    bool  _isAudioMessage;
    bool  _isAudioPlaybackOnly;
    bool  _isRaise;
    CKInlineReplyRaiseController * _raiseController;
    bool  _shouldShowKeyboard;
    CKScheduledUpdater * _typingUpdater;
}

@property (nonatomic, retain) CKAudioController *audioController;
@property (nonatomic, retain) CKAudioMediaObject *audioMediaObject;
@property (nonatomic, retain) UIView *audioMessageView;
@property (nonatomic, retain) CKAudioBalloonView *balloonView;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CKNotificationReplyViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didSendMessage;
@property (nonatomic, retain) CKMessageEntryView *entryView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAudioMessage;
@property (nonatomic) bool isAudioPlaybackOnly;
@property (nonatomic) bool isRaise;
@property (nonatomic, retain) CKInlineReplyRaiseController *raiseController;
@property (nonatomic) bool shouldShowKeyboard;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKScheduledUpdater *typingUpdater;

+ (bool)_isSecureForRemoteViewService;

- (void).cxx_destruct;
- (double)audioBubbleHeight;
- (id)audioController;
- (void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioControllerDidPause:(id)arg1;
- (void)audioControllerDidStop:(id)arg1;
- (id)audioMediaObject;
- (id)audioMessageView;
- (id)balloonView;
- (void)balloonViewDoubleTapped:(id)arg1;
- (void)balloonViewLongTouched:(id)arg1;
- (void)balloonViewTapped:(id)arg1;
- (bool)canBecomeFirstResponder;
- (id)conversation;
- (void)dealloc;
- (id)delegate;
- (bool)didSendMessage;
- (id)entryView;
- (id)initWithConversation:(id)arg1;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1;
- (bool)isAudioMessage;
- (bool)isAudioPlaybackOnly;
- (bool)isRaise;
- (void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2;
- (void)messageEntryView:(id)arg1 sendButtonLongPressEnded:(struct CGPoint { double x1; double x2; })arg2;
- (void)messageEntryView:(id)arg1 sendButtonLongPressMoved:(struct CGPoint { double x1; double x2; })arg2;
- (bool)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryViewDidBeginEditing:(id)arg1;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)messageEntryViewDidEndEditing:(id)arg1;
- (double)messageEntryViewMaxHeight:(id)arg1;
- (struct CGSize { double x1; double x2; })messageEntryViewMaxShelfPluginViewSize:(id)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(id)arg1;
- (void)messageEntryViewRecordingDidChange:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (void)messageEntryViewSendButtonLongPressBegan:(id)arg1;
- (bool)messageEntryViewShouldBeginEditing:(id)arg1;
- (void)playSendSoundForMessage:(id)arg1;
- (double)preferredContentHeight;
- (void)proximityStateDidChange:(bool)arg1;
- (id)raiseController;
- (void)raiseControllerDidStartRecording:(id)arg1;
- (void)raiseControllerDidStopRecording:(id)arg1;
- (void)sendMessage;
- (void)setAudioController:(id)arg1;
- (void)setAudioMediaObject:(id)arg1;
- (void)setAudioMessageView:(id)arg1;
- (void)setBalloonView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidSendMessage:(bool)arg1;
- (void)setEntryView:(id)arg1;
- (void)setIsAudioMessage:(bool)arg1;
- (void)setIsAudioPlaybackOnly:(bool)arg1;
- (void)setIsRaise:(bool)arg1;
- (void)setRaiseController:(id)arg1;
- (void)setShouldShowKeyboard:(bool)arg1;
- (void)setTypingUpdater:(id)arg1;
- (void)setupConversation;
- (void)setupView;
- (bool)shouldShowKeyboard;
- (bool)showsKeyboard;
- (id)textInputContextIdentifier;
- (id)typingUpdater;
- (void)updateTyping;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (id)viewForTyping;
- (void)viewWillDisappear:(bool)arg1;

@end