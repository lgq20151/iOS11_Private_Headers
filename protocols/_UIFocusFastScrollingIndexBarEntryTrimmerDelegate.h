/* made by EzioChiu.
 */

@protocol _UIFocusFastScrollingIndexBarEntryTrimmerDelegate <NSObject>

@required

- (bool)_focusFastScrollingIndexBarEntryTrimmer:(_UIFocusFastScrollingIndexBarEntryTrimmer *)arg1 entryIsPlaceholder:(id)arg2;
- (id)_focusFastScrollingIndexBarEntryTrimmer:(_UIFocusFastScrollingIndexBarEntryTrimmer *)arg1 placeholderEntryBetweenEntryBefore:(id)arg2 entryAfter:(id)arg3;
- (bool)_focusFastScrollingIndexBarEntryTrimmer:(_UIFocusFastScrollingIndexBarEntryTrimmer *)arg1 startingOrEndingEntryMustBePreserved:(id)arg2;

@end