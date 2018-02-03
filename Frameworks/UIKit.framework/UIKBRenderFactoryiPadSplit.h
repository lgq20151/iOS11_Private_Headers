/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactoryiPadSplit : UIKBRenderFactoryiPad

- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (double)defaultPathWeight;
- (id)deleteKeyImageName;
- (struct CGPoint { double x1; double x2; })deleteKeyOffset;
- (id)deleteOnKeyImageName;
- (id)dictationKeyImageName;
- (id)dismissKeyImageName;
- (struct CGPoint { double x1; double x2; })dismissKeyOffset;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (struct CGPoint { double x1; double x2; })internationalKeyOffset;
- (double)keyCornerRadius;
- (double)keyInsetBottom;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (id)shiftKeyImageName;
- (struct CGPoint { double x1; double x2; })shiftKeyOffset;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (double)skinnyKeyThreshold;
- (bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (double)symbolFrameInset;
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 annotationIndex:(unsigned long long)arg4;

@end
