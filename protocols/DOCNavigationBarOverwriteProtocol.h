/* made by EzioChiu.
 */

@protocol DOCNavigationBarOverwriteProtocol <NSObject>

@optional

- (bool)isTopNavigationItem;
- (NSString *)overriddenTitle;
- (void)setIsTopNavigationItem:(bool)arg1;
- (void)setOverriddenTitle:(NSString *)arg1;

@end
