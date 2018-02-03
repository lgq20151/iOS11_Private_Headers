/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextViewInteractableLink : _UITextViewInteractableItem <DDDetectionControllerInteractionDelegate> {
    LSAppLink * _appLink;
    NSURL * _link;
}

@property (nonatomic, retain) LSAppLink *appLink;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *link;
@property (readonly) Class superclass;

+ (id)interactableLinkWithURL:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 subRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

- (void).cxx_destruct;
- (void)_dataDetectorAction:(id)arg1;
- (bool)_isMobileSafariRestricted;
- (void)_linkInteractionAddToReadingList;
- (void)_linkInteractionCopyLink;
- (void)_linkInteractionOpenURL;
- (void)_linkInteractionOpenURLInDefaultBrowser;
- (void)_linkInteractionOpenURLInExternalApplication;
- (bool)_linkInteractionPerformDefaultAction;
- (void)_linkInteractionShareLink;
- (void)_performLinkInteractionBlockAfterUnlockingDeviceOnly:(id /* block */)arg1;
- (void)action:(id)arg1 didDismissAlertController:(id)arg2;
- (void)actionDidFinish:(id)arg1;
- (id)actions;
- (bool)allowInteraction:(long long)arg1;
- (id)appLink;
- (id)dataDetectorActionsForTextView:(id)arg1;
- (id)defaultAction;
- (id)link;
- (id)linkActions;
- (id)localizedTitle;
- (void)setAppLink:(id)arg1;
- (void)setLink:(id)arg1;

@end
