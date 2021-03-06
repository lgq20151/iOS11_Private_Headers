/* made by EzioChiu.
 */

@protocol CNAvatarCardViewControllerDelegate <NSObject>

@optional

- (NSArray *)cardViewController:(CNAvatarCardViewController *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;
- (void)cardViewControllerDidDismiss:(CNAvatarCardViewController *)arg1;
- (void)cardViewControllerDidUpdatePreferredSize:(CNAvatarCardViewController *)arg1;
- (void)cardViewControllerWillDismiss:(CNAvatarCardViewController *)arg1;

@end
