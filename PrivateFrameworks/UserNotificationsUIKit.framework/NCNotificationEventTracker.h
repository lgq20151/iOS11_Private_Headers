/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationEventTracker : NSObject {
    PETScalarEventTracker * _longLookCustomActionTracker;
    PETScalarEventTracker * _longLookDefaultActionTracker;
    PETScalarEventTracker * _longLookDismissTracker;
    PETScalarEventTracker * _longLookPresentationTracker;
    PETScalarEventTracker * _longLookReparkTracker;
    PETScalarEventTracker * _notificationCenterClearAllTracker;
    PETScalarEventTracker * _notificationCenterClearDayTracker;
    PETScalarEventTracker * _shortLookClearTracker;
    PETScalarEventTracker * _shortLookDefaultActionTracker;
    PETScalarEventTracker * _shortLookDismissTracker;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_attachmentCountProperty;
- (id)_customActionsCountProperty;
- (id)_customExtensionProperty;
- (id)_destinationProperty;
- (id)_firstPartyAppProperty;
- (id)_longLookCustomActionTracker;
- (id)_longLookDefaultActionTracker;
- (id)_longLookDismissTracker;
- (id)_longLookPresentationTracker;
- (id)_longLookReparkTracker;
- (id)_notificationCenterClearAllTracker;
- (id)_notificationCenterClearDayTracker;
- (id)_primaryAttachmentTypeProperty;
- (id)_shortLookClearTracker;
- (id)_shortLookDefaultActionTracker;
- (id)_shortLookDismissTracker;
- (id)_textInputProperty;
- (id)_triggerPropertyForEvent:(id)arg1;
- (void)longLookCustomAction:(id)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)longLookDefaultActionInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)longLookDidPresentWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)longLookDismissInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)longLookReparkInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)notificationCenterClearAll;
- (void)notificationCenterDayCleared;
- (id)notificationDestinationForState:(id)arg1;
- (unsigned long long)primaryAttachmentTypeForRequest:(id)arg1;
- (void)shortLookClearedForNotificationRequest:(id)arg1 withState:(id)arg2;
- (void)shortLookDefaultActionInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)shortLookDismissInvokedForNotificationRequest:(id)arg1 withState:(id)arg2;

@end
