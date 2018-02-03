/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWatchKitExtensionRequestActionResponse : BSActionResponse

@property (nonatomic, readonly) NSDictionary *result;

+ (id)responseWithWatchKitExtensionResult:(id)arg1;

- (id)initWithWatchKitExtensionResult:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)result;

@end