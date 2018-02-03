/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINotificationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {
    NSDictionary * _feedbacks;
    bool  _includePrivateEvents;
}

@property (nonatomic, retain) NSDictionary *feedbacks;
@property (nonatomic) bool includePrivateEvents;

+ (id)defaultConfiguration;
+ (id)privateConfiguration;

- (void).cxx_destruct;
- (bool)defaultEnabled;
- (id)feedbackKeyPaths;
- (id)feedbacks;
- (bool)includePrivateEvents;
- (long long)requiredSupportLevel;
- (void)setFeedbacks:(id)arg1;
- (void)setIncludePrivateEvents:(bool)arg1;

@end
