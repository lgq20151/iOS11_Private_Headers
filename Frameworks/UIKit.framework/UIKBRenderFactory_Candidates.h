/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactory_Candidates : UIKBRenderFactory {
    bool  _shouldUseKeyboardBackground;
}

@property (nonatomic) bool shouldUseKeyboardBackground;

- (id)controlKeyBackgroundColorName;
- (id)controlKeyDividerColorName;
- (id)controlKeyForegroundColorName;
- (id)defaultKeyDividerColorName;
- (id)initWithRenderingContext:(id)arg1;
- (long long)lightHighQualityEnabledBlendForm;
- (void)setShouldUseKeyboardBackground:(bool)arg1;
- (bool)shouldUseKeyboardBackground;
- (id)traitsForCellSize:(struct CGSize { double x1; double x2; })arg1 highlighted:(bool)arg2 edges:(unsigned long long)arg3;
- (id)traitsForEdgeGradientWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)traitsForEmptyExtendedPane:(struct CGSize { double x1; double x2; })arg1 rowHeight:(double)arg2 idiomPad:(bool)arg3 clipCorners:(bool)arg4;
- (id)traitsForExtendedCellSize:(struct CGSize { double x1; double x2; })arg1 highlighted:(bool)arg2 groupHeader:(bool)arg3 edges:(unsigned long long)arg4;
- (id)traitsForExtendedView;
- (id)traitsForHWRCellSize:(struct CGSize { double x1; double x2; })arg1 highlighted:(bool)arg2;
- (id)traitsForSortControlBackgroundWithSize:(struct CGSize { double x1; double x2; })arg1 edges:(unsigned long long)arg2;
- (id)traitsForToggleButtonWithSize:(struct CGSize { double x1; double x2; })arg1 highlighted:(bool)arg2 edges:(unsigned long long)arg3;

@end
