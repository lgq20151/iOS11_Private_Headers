/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADCalendarToolOperationGroup : CADOperationGroup <CADCalendarToolInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;

- (void)CADPurgeChangeTrackingReply:(id /* block */)arg1;
- (bool)accessGrantedToPerformSelector:(SEL)arg1;

@end
