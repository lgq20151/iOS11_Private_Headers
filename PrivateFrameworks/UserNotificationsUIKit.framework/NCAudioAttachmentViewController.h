/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCAudioAttachmentViewController : NCAttachmentViewController {
    NCAudioPlayerControlsViewController * _playerViewController;
}

@property (nonatomic, retain) NCAudioPlayerControlsViewController *playerViewController;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })contentSize;
- (unsigned long long)customContentLocation;
- (void)dealloc;
- (id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2;
- (id)playerViewController;
- (void)setPlayerViewController:(id)arg1;
- (void)viewDidLoad;

@end