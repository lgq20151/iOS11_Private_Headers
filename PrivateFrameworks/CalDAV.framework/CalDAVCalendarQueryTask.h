/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask {
    NSDateComponents * _eventFilterEndDate;
    NSDateComponents * _eventFilterStartDate;
    bool  _syncEvents;
    bool  _syncTodos;
    NSDateComponents * _todoFilterEndDate;
    NSDateComponents * _todoFilterStartDate;
}

@property (nonatomic, retain) NSDateComponents *eventFilterEndDate;
@property (nonatomic, retain) NSDateComponents *eventFilterStartDate;
@property (nonatomic) bool syncEvents;
@property (nonatomic) bool syncTodos;
@property (nonatomic, retain) NSDateComponents *todoFilterEndDate;
@property (nonatomic, retain) NSDateComponents *todoFilterStartDate;

- (void).cxx_destruct;
- (void)_appendComponentFiltersToXMLData:(id)arg1;
- (void)_appendTimeRangeFilterToXMLData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_icsDateStringForNSDateComponents:(id)arg1;
- (id)description;
- (id)eventFilterEndDate;
- (id)eventFilterStartDate;
- (id)httpMethod;
- (id)requestBody;
- (void)setEventFilterEndDate:(id)arg1;
- (void)setEventFilterStartDate:(id)arg1;
- (void)setSyncEvents:(bool)arg1;
- (void)setSyncTodos:(bool)arg1;
- (void)setTodoFilterEndDate:(id)arg1;
- (void)setTodoFilterStartDate:(id)arg1;
- (bool)syncEvents;
- (bool)syncTodos;
- (id)todoFilterEndDate;
- (id)todoFilterStartDate;

@end