/* made by EzioChiu.
 */

@protocol DEDWorkerProtocol <NSObject>

@required

- (void)adoptFiles:(NSArray *)arg1 forSession:(NSString *)arg2;
- (void)cancelSession:(NSString *)arg1;
- (void)commitSession:(NSString *)arg1;
- (void)getSessionStatusWithSession:(NSString *)arg1;
- (void)listAvailableExtensionsForSession:(NSString *)arg1;
- (void)pingSession:(NSString *)arg1;
- (void)startDiagnosticWithIdentifier:(NSString *)arg1 parameters:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)terminateExtension:(NSString *)arg1 info:(NSDictionary *)arg2 session:(NSString *)arg3;
- (long long)transportType;

@end
