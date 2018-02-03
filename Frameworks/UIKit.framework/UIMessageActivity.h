/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMessageActivity : UIActivity <UIManagedConfigurationRestrictableActivity> {
    MFMessageComposeViewController * _messageComposeViewController;
    NSString * _sourceApplicationBundleID;
    bool  _sourceIsManaged;
}

@property (nonatomic, retain) MFMessageComposeViewController *messageComposeViewController;
@property (nonatomic, copy) NSString *sourceApplicationBundleID;
@property (nonatomic) bool sourceIsManaged;

+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;
+ (id)applicationBundleID;

- (void).cxx_destruct;
- (id)_bundleIdentifierForActivityImageCreation;
- (void)_cleanup;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)messageComposeViewController;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setMessageComposeViewController:(id)arg1;
- (void)setSourceApplicationBundleID:(id)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (id)sourceApplicationBundleID;
- (bool)sourceIsManaged;

@end
