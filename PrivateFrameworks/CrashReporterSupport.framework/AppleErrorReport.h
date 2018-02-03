/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
 */

@interface AppleErrorReport : NSObject {
    double  _capture_time;
    NSString * _incidentID;
    NSString * _logType;
    NSMutableDictionary * _logWritingOptions;
    NSString * _logfile;
    NSMutableArray * _notes;
}

@property (nonatomic, readonly) NSString *logfile;
@property (nonatomic, readonly) NSArray *notes;

+ (id)bootArgs;
+ (unsigned char)executeWithTimeout:(unsigned int)arg1 Code:(id /* block */)arg2;
+ (id)kernelVersionDescription;
+ (void)logSafely:(id /* block */)arg1;
+ (id)systemIDWithDescription:(bool)arg1;

- (id)additionalIPSMetadata;
- (id)appleCareDetails;
- (void)dealloc;
- (void)generateLogAtLevel:(bool)arg1 withBlock:(id /* block */)arg2;
- (id)getSyslogForPid:(int)arg1 andOptionalSenders:(id)arg2;
- (id)hardwareModel;
- (id)incidentID;
- (id)init;
- (bool)isActionable;
- (bool)isAppleTV;
- (bool)isInternalInstall;
- (id)logfile;
- (id)notes;
- (id)overrideFileExtension;
- (id)problemType;
- (id)reportNamePrefix;
- (bool)saveToDir:(id)arg1;
- (bool)secondChanceToSylog;
- (int)streamContentAtLevel:(bool)arg1 withBlock:(id /* block */)arg2;
- (void)symlink:(id)arg1;

@end
