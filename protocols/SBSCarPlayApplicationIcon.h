/* made by EzioChiu.
 */

@protocol SBSCarPlayApplicationIcon <NSObject>

@required

- (NSData *)iconImageData;
- (double)iconImageScale;
- (NSString *)localizedDisplayName;

@end
