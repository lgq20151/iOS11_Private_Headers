/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIContentSizeCategoryPreference : NSObject {
    NSString * _preferredContentSizeCategory;
}

@property (nonatomic, retain) NSString *preferredContentSizeCategory;

+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1 forBlock:(id /* block */)arg2;
+ (void)_resetSystemPreferenceOverride;
+ (id)system;

- (void).cxx_destruct;
- (void)checkForChanges;
- (id)init;
- (id)initWithContentSizeCategory:(id)arg1;
- (id)preferredContentSizeCategory;
- (void)setPreferredContentSizeCategory:(id)arg1;

@end