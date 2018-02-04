/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarServerReplyItem : CalDAVItemWithRecurrenceChildren {
    CoreDAVLeafItem * _attendee;
}

@property (nonatomic, retain) CoreDAVLeafItem *attendee;

- (void).cxx_destruct;
- (id)attendee;
- (id)copyParseRules;
- (void)setAttendee:(id)arg1;

@end