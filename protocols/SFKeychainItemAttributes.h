/* made by EzioChiu.
 */

@protocol SFKeychainItemAttributes <NSObject, NSCopying>

@required

- (NSString *)localizedDescription;
- (NSString *)localizedLabel;
- (void)setLocalizedDescription:(NSString *)arg1;
- (void)setLocalizedLabel:(NSString *)arg1;

@end
