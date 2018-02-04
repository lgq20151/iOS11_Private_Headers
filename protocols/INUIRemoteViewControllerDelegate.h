/* made by EzioChiu.
 */

@protocol INUIRemoteViewControllerDelegate <NSObject>

@optional

- (NSArray *)interfaceSectionsForRemoteViewController:(INUIRemoteViewController *)arg1;
- (struct CGSize { double x1; double x2; })maximumSizeForRemoteViewController:(INUIRemoteViewController *)arg1;
- (NSDictionary *)maximumSizesBySystemVersionForRemoteViewController:(INUIRemoteViewController *)arg1;
- (struct CGSize { double x1; double x2; })minimumSizeForRemoteViewController:(INUIRemoteViewController *)arg1;
- (NSDictionary *)minimumSizesBySystemVersionForRemoteViewController:(INUIRemoteViewController *)arg1;
- (void)remoteViewController:(INUIRemoteViewController *)arg1 desiresConstrainedSize:(struct CGSize { double x1; double x2; })arg2;
- (void)remoteViewController:(INUIRemoteViewController *)arg1 requestsHandlingOfIntent:(INIntent *)arg2;
- (void)remoteViewControllerServiceDidTerminate:(INUIRemoteViewController *)arg1;

@end