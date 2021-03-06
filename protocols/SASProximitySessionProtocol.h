/* made by EzioChiu.
 */

@protocol SASProximitySessionProtocol <NSObject>

@required

- (void)activate;
- (<SASProximitySessionDelegate> *)delegate;
- (void)invalidate;
- (bool)isConnected;
- (NSError *)sendAction:(SASProximityAction *)arg1;
- (void)setConnected:(bool)arg1;
- (void)setDelegate:(id <SASProximitySessionDelegate>)arg1;
- (void)setSharingMessageSession:(CUMessageSession *)arg1;
- (CUMessageSession *)sharingMessageSession;

@end
