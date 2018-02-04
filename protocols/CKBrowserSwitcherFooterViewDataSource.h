/* made by EzioChiu.
 */

@protocol CKBrowserSwitcherFooterViewDataSource <NSObject>

@required

- (unsigned long long)numberOfPluginsInSwitcherView:(CKBrowserSwitcherFooterView *)arg1 forSection:(unsigned long long)arg2;
- (NSIndexPath *)switcherView:(CKBrowserSwitcherFooterView *)arg1 indexPathOfModelWithIdentifier:(NSString *)arg2;
- (id)switcherView:(CKBrowserSwitcherFooterView *)arg1 modelAtIndexPath:(NSIndexPath *)arg2 type:(long long*)arg3;

@end