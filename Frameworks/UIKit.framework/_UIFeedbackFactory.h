/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFeedbackFactory : NSObject {
    NSDictionary * _customContinuousFeedbacks;
    NSDictionary * _customDiscreteFeedbacks;
    NSDictionary * _customFeedbacksArchiveContents;
    NSString * _localIdentifier;
}

@property (nonatomic, readonly) NSArray *continuousFeedbackIdentifiers;
@property (nonatomic, retain) NSDictionary *customContinuousFeedbacks;
@property (nonatomic, retain) NSDictionary *customDiscreteFeedbacks;
@property (nonatomic, readonly) NSDictionary *customFeedbacksArchiveContents;
@property (nonatomic, readonly) NSArray *discreteFeedbackIdentifiers;
@property (nonatomic, retain) NSString *localIdentifier;

+ (id)sharedFactory;

- (void).cxx_destruct;
- (long long)_continuousFeedbackTypeFromIdentifier:(id)arg1;
- (bool)_customEventType:(unsigned long long*)arg1 andSystemSoundID:(unsigned int*)arg2 fromIdentifier:(id)arg3;
- (long long)_discreteFeedbackTypeFromIdentifier:(id)arg1;
- (id)_patternIdentifierFromIdentifier:(id)arg1;
- (void)addLocalPatterns:(id)arg1;
- (id)continuousFeedbackIdentifiers;
- (id)continuousFeedbackWithIdentifier:(id)arg1;
- (id)customContinuousFeedbacks;
- (id)customDiscreteFeedbacks;
- (id)customFeedbacksArchiveContents;
- (id)discreteFeedbackIdentifiers;
- (id)discreteFeedbackWithIdentifier:(id)arg1;
- (id)feedbackWithIdentifier:(id)arg1;
- (id)identifierForContinuousFeedbackType:(long long)arg1;
- (id)identifierForCustomDiscreteFeedbackWithEventType:(unsigned long long)arg1 systemSoundID:(unsigned int)arg2;
- (id)identifierForDiscreteFeedbackType:(long long)arg1;
- (id)identifierForLocalPatternFeedbackWithName:(id)arg1;
- (id)identifierForPatternFeedbackWithFilename:(id)arg1;
- (id)localIdentifier;
- (void)performWithLocalIdentifier:(id)arg1 block:(id /* block */)arg2;
- (void)setCustomContinuousFeedbacks:(id)arg1;
- (void)setCustomDiscreteFeedbacks:(id)arg1;
- (void)setLocalIdentifier:(id)arg1;
- (id)titleForFeedbackWithIdentifier:(id)arg1;

@end
