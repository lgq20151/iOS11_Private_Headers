/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactoryiPad : UIKBRenderFactoryiPhone

- (id)ZWNJKeyImageName;
- (struct CGPoint { double x1; double x2; })ZWNJKeyOffset;
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (void)_customizePopupTraits:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (double)_row4ControlSegmentWidthLeft;
- (double)_row4ControlSegmentWidthRight;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (double)bottomRowDefaultFontSize;
- (double)cornerRadiusForKey:(id)arg1;
- (double)defaultPathWeight;
- (struct CGSize { double x1; double x2; })defaultVariantGeometrySize;
- (double)defaultVariantSizeThreshold;
- (double)deleteKeyFontSize;
- (id)deleteKeyImageName;
- (struct CGPoint { double x1; double x2; })deleteKeyOffset;
- (id)deleteOnKeyImageName;
- (double)dictationKeyFontSize;
- (id)dictationKeyImageName;
- (struct CGPoint { double x1; double x2; })dictationKeyOffset;
- (double)dismissKeyFontSize;
- (id)dismissKeyImageName;
- (struct CGPoint { double x1; double x2; })dismissKeyOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dismissKeySymbolFrame;
- (id)displayContentsForKey:(id)arg1;
- (double)dualStringKeyFontSizeAdjustment;
- (struct CGPoint { double x1; double x2; })dualStringKeyOffset;
- (double)emailDotKeyFontSize;
- (double)facemarkKeyFontSize;
- (double)fallbackFontSize;
- (double)fontSizeAdjustmentForNonAlphanumericKeycaps;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (bool)iPadFudgeLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })insetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (double)internationalKeyFontSize;
- (struct CGPoint { double x1; double x2; })internationalKeyOffset;
- (double)keyCornerRadius;
- (double)keyInsetBottom;
- (id)lightKeycapsFontName;
- (id)lowQualityLayeredBackgroundColorName;
- (double)messagesTypeKeyplanSwitchKeyFontSize;
- (id)messagesWriteboardKeyImageName;
- (double)moreKeyFontSize;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (double)predictiveKeyCornerRadius;
- (struct CGPoint { double x1; double x2; })returnKeyOffset;
- (double)returnKeySymbolFrameInset;
- (long long)rowLimitForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })secondaryShiftKeyOffset;
- (void)setAllowsPaddles:(bool)arg1;
- (void)setupLayoutSegments;
- (double)shiftKeyFontSize;
- (id)shiftKeyImageName;
- (struct CGPoint { double x1; double x2; })shiftKeyOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shiftKeySymbolFrame;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (bool)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (double)skinnyKeyThreshold;
- (double)smallKanaKeyFontSize;
- (double)spaceKeyFontSize;
- (double)stringKeyFontSize;
- (struct CGPoint { double x1; double x2; })stringKeyOffset;
- (bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (double)symbolFrameInset;
- (id)thinKeycapsFontName;
- (double)tinyPunctuationGlyphFontSize;
- (struct CGPoint { double x1; double x2; })tinyPunctuationGlyphOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })variantDisplayFrameInsets;
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 annotationIndex:(unsigned long long)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })variantPaddedFrameInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })variantSymbolFrameInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })wideShadowPaddleInsets;
- (double)zhuyinFirstToneKeyFontSize;

@end
