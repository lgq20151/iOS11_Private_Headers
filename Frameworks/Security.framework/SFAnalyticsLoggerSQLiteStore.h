/* made by EzioChiu
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SFAnalyticsLoggerSQLiteStore : SFSQLite

@property (readonly) NSArray *allEvents;
@property (readonly) NSArray *failureRecords;
@property (retain) NSDate *uploadDate;

+ (id)storeWithPath:(id)arg1 schema:(id)arg2;

- (void)addEventDict:(id)arg1 toTable:(id)arg2;
- (id)allEvents;
- (void)clearAllData;
- (void)dealloc;
- (id)failureRecords;
- (long long)hardFailureCountForEventType:(id)arg1;
- (void)incrementHardFailureCountForEventType:(id)arg1;
- (void)incrementSoftFailureCountForEventType:(id)arg1;
- (void)incrementSuccessCountForEventType:(id)arg1;
- (void)setUploadDate:(id)arg1;
- (long long)softFailureCountForEventType:(id)arg1;
- (long long)successCountForEventType:(id)arg1;
- (id)summaryCounts;
- (id)uploadDate;

@end
