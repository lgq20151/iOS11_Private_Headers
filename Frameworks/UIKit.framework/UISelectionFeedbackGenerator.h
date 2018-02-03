/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISelectionFeedbackGenerator : UIFeedbackGenerator {
    double  _lastSelectionChangeTime;
}

@property (nonatomic) double lastSelectionChangeTime;
@property (getter=_selectionConfiguration, nonatomic, readonly) _UISelectionFeedbackGeneratorConfiguration *selectionConfiguration;

+ (Class)_configurationClass;

- (void)_deactivated;
- (void)_playFeedbackWithSpeed:(double)arg1;
- (id)_selectionConfiguration;
- (id)_stats_key;
- (double)lastSelectionChangeTime;
- (void)selectionChanged;
- (void)setLastSelectionChangeTime:(double)arg1;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;

@end
