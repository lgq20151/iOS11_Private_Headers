/* made by EzioChiu.
 */

@protocol _UIDataTransferMonitorDelegate <NSObject>

@required

- (void)dataTransferMonitorBeganTransfers:(_UIDataTransferMonitor *)arg1;
- (void)dataTransferMonitorFinishedTransfers:(_UIDataTransferMonitor *)arg1;

@end
