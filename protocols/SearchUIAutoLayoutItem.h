/* made by EzioChiu.
 */

@protocol SearchUIAutoLayoutItem <NSObject>

@required

- (UIView *)containerView;
- (bool)isContainedByItem:(id <SearchUIAutoLayoutItem>)arg1;
- (UIView *)view;

@end
