/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyLog : NSObject <NSCopying> {
    NSString * _buildVersion;
    NSString * _clientIdentifier;
    NSDictionary * _config;
    NSDate * _date;
    TIRollingLog * _records;
    NSString * _systemVersion;
    TIRollingLog * _traceLog;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, retain) NSDictionary *config;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) TIRollingLog *records;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) TIRollingLog *traceLog;
@property (nonatomic, readonly) NSUUID *uuid;

- (id)buildVersion;
- (id)clientIdentifier;
- (id)config;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (void)enumerateHumanReadableTraceEntriesWithBlock:(id /* block */)arg1;
- (void)enumerateRecordsWithBlock:(id /* block */)arg1;
- (id)filename;
- (id)init;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithTypologyLog:(id)arg1;
- (void)logRecord:(id)arg1;
- (void)logToHumanReadableTrace:(id)arg1;
- (id)propertyList;
- (id)recordSummary;
- (id)records;
- (void)setClientIdentifier:(id)arg1;
- (void)setConfig:(id)arg1;
- (id)systemVersion;
- (id)textSummary;
- (id)timestamp;
- (id)traceLog;
- (id)uuid;

@end
