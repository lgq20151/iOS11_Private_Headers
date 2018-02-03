/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactoryNumberPad : UIKBRenderFactory

- (void)_customizeSymbolStyle:(id)arg1 secondaryStyle:(id)arg2 forKey:(id)arg3 contents:(id)arg4;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (struct CGPoint { double x1; double x2; })centerColumnLetterOffset;
- (struct CGPoint { double x1; double x2; })centerColumnNumberOffset;
- (id)controlKeyBackgroundColorName;
- (id)controlKeyDividerColorName;
- (id)controlKeyForegroundColorName;
- (id)defaultKeyDividerColorName;
- (struct CGPoint { double x1; double x2; })deleteGlyphOffset;
- (struct CGPoint { double x1; double x2; })dictationGlyphOffset;
- (struct CGPoint { double x1; double x2; })leftColumnLetterOffset;
- (struct CGPoint { double x1; double x2; })leftColumnNumberOffset;
- (double)letterFontSize;
- (long long)lightHighQualityEnabledBlendForm;
- (struct CGPoint { double x1; double x2; })loneZeroOffset;
- (double)numberFontSize;
- (struct CGPoint { double x1; double x2; })rightColumnLetterOffset;
- (struct CGPoint { double x1; double x2; })rightColumnNumberOffset;
- (void)setupLayoutSegments;
- (struct CGPoint { double x1; double x2; })specialSymbolOffset;

@end
