/* made by EzioChiu.
 */

@protocol SiriCoreConnectionProviderDelegate <NSObject>

@required

- (void)connectionProvider:(id <SiriCoreConnectionProvider>)arg1 receivedError:(NSError *)arg2;

@end